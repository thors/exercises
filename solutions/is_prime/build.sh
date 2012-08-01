gcc -c bad__is_prime.c
gcc -c good__is_prime.c
gcc -c test.c

gcc -o test_good -lm good__is_prime.o test.o
gcc -o test_bad -lm bad__is_prime.o test.o
