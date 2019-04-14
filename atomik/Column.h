#ifndef COLUMN_H
#define COLUMN_H

#include "Container.h"

class Column : public Container {

  public:
    Column(int ux, int uy, int w, int h) : Container(ux, uy, w, h) {}
    Column() : Container() {}

    void appendChild(Block *child) {
      Container::appendChild(child);

      int gap = 6;
      int totalGap = gap * (chAmt - 1);
      int itemHeight = (height - totalGap) / chAmt;
      int currentY = y;

      for (int i = 0; i < chAmt; i++) {
        chSet[i]->setX(x);
        chSet[i]->setY(currentY);
        chSet[i]->setWidth(width);
        chSet[i]->setHeight(itemHeight);

        currentY += itemHeight + gap;
      }
    }
};

#endif