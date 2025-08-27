#include <stdio.h>

int main() {
	
	int a = 123456;
	int* pa = &a;
	
	printf("pa : %d\n", pa);	
	printf("*pa : %d\n", *pa);
	printf("a : %d", a);
	
	return 0;
}
