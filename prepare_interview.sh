#!/bin/sh -x

export ROOT=`pwd`
export SOLUTIONS=$ROOT/solutions
export TASKS=$ROOT/tasks

echo "Delete old object files"
rm `find . -name "*.o"`


cd $SOLUTIONS/is_prime
./build.sh
cp bad__is_prime.o $TASKS/is_prime
cp test.o $TASKS/is_prime/solution_test.o
