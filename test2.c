#include <stdio.h>

int main(void){
	
	int num1 = 00;				// int�� ������ �����ϰ� 10 ���� 
	int *numPtr = &num1;		// ������ ���� �����ϰ� num1�� �ּҸ� ���� 
	
	printf("%p\n", numPtr);		// ������ ���� numPtr�� �� ���  
	printf("%p\n", &num1);		// ���� num1�� �޸� �ּ� ��� 
	
	return 0;
}
