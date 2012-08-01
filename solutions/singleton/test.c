#include <assert.h>
#include <iostream>
#include "singleton.h"
#include "user.h"

int main(int argc, char **args) {
	MySingleton *myInstance = MySingleton::getInstance();
	User *user = new User();
	MySingleton *userInstance = user->iSingleton;
	myInstance->iData = 1;
	userInstance->iData = 2;
	assert(2 == myInstance->iData);
	return 0;
}
