#include "user.h"

User::User() {
  iSingleton = MySingleton::getInstance();
  iSingleton->iData=5;
}

