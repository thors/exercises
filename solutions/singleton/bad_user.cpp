#include "../../tasks/singleton/singleton.h"
#include "user.h"

User::User() {
  iSingleton = new MySingleton();
  iSingleton->iData=5;
}

