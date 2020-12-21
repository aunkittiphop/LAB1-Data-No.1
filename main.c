#include <stdio.h>

void printN(int n) {
	if(n<=10) {
		printf("%d ",n);
		printN(n+1);
	}
}

int main(void) {
	printN(5);
}
