1. Explain, what the singleton pattern means
============================================



2. Finish the implementation of the singleton pattern in singleton.cpp and singleton.h
======================================================================================
You can run build.sh, the build errors might give you hints what's missing in the existing 
code


3. Run build.sh on the command line
===================================
There are some tests implemented to test your implementation. Each test executable consist 
of test.c, Your singleton implementation and a User class using your singleton. The class 
definition of the user class is visible in user.h, but the implementation is not available.

good_usertest: good_user.o singleton.o test.o
bad_usertest: bad_user.o singleton.o test.o

If your implementation of the singleton pattern is correct, at least the binary good_usertest 
should be available. If bad_usertest exists as well, execute it and analyze any test failures.
