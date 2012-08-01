gcc -c is_prime.c
gcc -c test.c

gcc -o test_good -lm is_prime.o solution_test.o
gcc -o test_bad -lm bad__is_prime.o test.o
