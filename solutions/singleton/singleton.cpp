#include <iostream>
#include "singleton.h"

MySingleton* MySingleton::iInstance;

void MySingleton::doFancyStuff() {
  std::cout << "Doing some fancy stuff" << std::endl;
}

MySingleton::MySingleton() {
}

MySingleton* MySingleton::getInstance() {
	if ( NULL == iInstance ) {
		iInstance  = new MySingleton();
	}
	return iInstance;
}

