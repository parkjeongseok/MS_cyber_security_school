#include <stdio.h>

int main() {
	
	int a = 0x1234;
	int* p = &a;
		
	// Before
	printf("=== Before ===\n");
	// 8�ڸ� 16���� ��� (�տ� ���ڸ���  0) 
	printf("  a : %08x\t  &a : %08x\n", a, &a);
	printf("  p : %08x\t  &p : %08x\t *p : %08x\n\n", p, &p, *p);
	printf("  a : �Ϲ� ����\n");
	printf(" &a : a ������ �ּ� ��\n");
	printf("  p : ������ ���� - �ּ� ���� �����ϴ� �������� a ������ �ּҸ� ������.\n");
	printf(" &p : ������ ������ �ּ� ���� �ҷ���.\n");
	printf(" *p : ������ ������ �ּҿ� ������ �ҷ���. ��, a������ ���� �ҷ���.\n");
	
	// Before
	printf("\n=== After ===\n");
	*p = 0x5678;
	printf("  a : %08x\t &a : %08x\n", a, &a);
	printf("  p : %08x\t &p : %08x\t *p : %08x\n", p, &p, *p);
	
	
	printf("  p : %08x\t  p+1 : %08x	%08x\n", p, ++p, *(p+1));
	printf("  p : %08x\t  p+1 : %08x	%08x\n", p, ++p, *(p+2));
}
