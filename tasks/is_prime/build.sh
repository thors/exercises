gcc -c is_prime.c
gcc -c test.c

gcc -o test_for_your_solution -lm is_prime.o solution_test.o
gcc -o your_test_for_solution -lm bad__is_prime.o test.o
gcc -o your_test_for_your_solution -lm is_prime.o test.o
