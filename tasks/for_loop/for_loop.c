#include <stdio.h>

void forLoop1() {
	int i,j;
	for (i=0; i<10; i++) {
		j = j < i ? j : i;
	}
	printf("%d,%d,%d",i,j);
}

int main( int argc, char**args ) {
	forLoop1();
	return 0;
}

