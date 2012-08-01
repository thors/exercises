#!/bin/sh -x
g++ -c singleton.cpp
g++ -c test.c


for user in `ls *user.o`
do
    export target=`echo $user | sed "s/\.o/test/"`
    g++ -o $target $user singleton.o test.o
done

