#!/bin/sh -x

for user in `ls *user.o`
do
    target=`echo $user | sed "s/\.o/test/"`
    rm $target
done

g++ -c singleton.cpp
g++ -c test.c


for user in `ls ../../solutions/singleton/*user.cpp`
do
    user_obj=`echo $user | sed "s/\.cpp/.o/" | sed "s/.*\///"`
    target=`echo $user_obj | sed "s/\.o/test/"`
    g++ -c $user 
    g++ -o $target $user_obj singleton.o test.o
done

