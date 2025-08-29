#include <stdio.h>

int main() {
	
	int a = 0x1234;
	int* p = &a;
		
	// Before
	printf("=== Before ===\n");
	// 8자리 16진수 출력 (앞에 빈자리는  0) 
	printf("  a : %08x\t  &a : %08x\n", a, &a);
	printf("  p : %08x\t  &p : %08x\t *p : %08x\n\n", p, &p, *p);
	printf("  a : 일반 변수\n");
	printf(" &a : a 변수의 주소 값\n");
	printf("  p : 포인터 변수 - 주소 값을 저장하는 변수여서 a 변수의 주소를 저장함.\n");
	printf(" &p : 포인터 변수의 주소 값을 불러옴.\n");
	printf(" *p : 포인터 변수의 주소에 내용을 불러옴. 즉, a변수의 값을 불러옴.\n");
	
	// Before
	printf("\n=== After ===\n");
	*p = 0x5678;
	printf("  a : %08x\t &a : %08x\n", a, &a);
	printf("  p : %08x\t &p : %08x\t *p : %08x\n", p, &p, *p);
	
	
	printf("  p : %08x\t  p+1 : %08x	%08x\n", p, ++p, *(p+1));
	printf("  p : %08x\t  p+1 : %08x	%08x\n", p, ++p, *(p+2));
}
