#include <stdio.h>

int main(void){
	
	// A, B, AND, OR, XOR, NOT 
	int A=0;
	int B=0;
	int i=0;
	
	printf("A\tB\tAND\tOR\tXOR\tNOT\n");
	
	for(i=0; i<4; i++){
		printf("%2d\t%2d\t%2d\t%2d\t%2d\t%2d\n", A, B, A&&B, A||B, A^B, !A);	
		if(i==0 || i==2) {
			B++;
		} else if(i==1) {
			A=B;
			B=0;
		} 
	}
	
	return 0;
}
