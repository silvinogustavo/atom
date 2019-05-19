#ifndef SHARED_CPP
#define SHARED_CPP

#include "colors.h"
#include "states.h"

int currentBg = WHITE;
bool hasLoaded = false;
bool inputLock = false;
int systemState = SYSTEM_INITIAL;
int rot = 2;
int transitionStep = 5;

void goToState(int nextState) {
  inputLock = true;
  hasLoaded = false;
  systemState = nextState;
}

#endif