#!/bin/sh -x
rm *.o
g++ -c good_user.cpp
g++ -c bad_user.cpp
g++ -c bad2_user.cpp
g++ -c bad_singleton.cpp
g++ -c singleton.cpp
g++ -c test.c


g++ -o test_good good_user.o singleton.o test.o
g++ -o test_bad bad_user.o bad_singleton.o test.o
g++ -o test2_bad bad2_user.o singleton.o test.o

