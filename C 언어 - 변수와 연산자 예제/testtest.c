#include <stdio.h>

int main() {
	
	int a = 0x1234;
	char *pc;	// 1
	int *pi;	// 4
	double *pd;	// 8
		
	
	printf("  a : %08x\t  &a : %08x\n\n\n", a, &a);
	
	pi = &a;
	pc = pi;
	pd = pi;

	printf("  a : %08x\t  &a : %08x\n", a, &a);	
	printf("  p : %08x\t  *p : %08x\n", pi, *pi);
	printf("  p : %08x\t  p : %08x\n", pi, pc, pd);
	
	printf("  p : %08x\t  p+1 : %08x	%08x\n", p, ++p, *(p+1));
	printf("  p : %08x\t  p+1 : %08x	%08x\n", p, ++p, *(p+2));
	
	printf("  p : %08x\t  p+1 : %08x	%08x\n", pi+1, pc+1, pd+1);
	printf("  p : %08x\t  p+1 : %08x	%08x\n", pi+2, pc+2, pd+2);
}
