#include <iostream>
#include "singleton.h"

void MySingleton::doFancyStuff() {
  std::cout << "Doing some fancy stuff" << std::endl;
}

MySingleton* MySingleton::getInstance() {
}

