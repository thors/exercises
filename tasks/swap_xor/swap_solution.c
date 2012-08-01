#include <stdio.h>


int main( int argc, char**args ) {
	int i, j;
	i = 5;
	j = 9;
	printf("Values before swap: i=%d, j=%d\n", i, j);
	i = i ^ j;
	j = i ^ j;
	i = i ^ j;	
	printf("Values after swap: i=%d, j=%d\n", i, j);
	return 0;
}

/*
Output:

Values before swap: i=5, j=9
Values after swap: i=9, j=5

*/
