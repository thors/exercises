#include "singleton.h"
#include "user.h"


class MyOtherSingleton {
 public:
  int iData;
  static MyOtherSingleton* getInstance();
  void doFancyStuff();
 private:
  static MyOtherSingleton *iInstance;
};

MyOtherSingleton* MyOtherSingleton::iInstance;

MyOtherSingleton* MyOtherSingleton::getInstance() {
  if (0==iInstance) {
    iInstance = new MyOtherSingleton();
  }
  return iInstance;
}

User::User() {
  iSingleton = (MySingleton*) new MyOtherSingleton();
  iSingleton->iData=5;
}

