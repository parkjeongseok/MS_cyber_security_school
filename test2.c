#include <stdio.h>

int main(void){
	
	int num1 = 00;				// int형 변수를 선언하고 10 저장 
	int *numPtr = &num1;		// 포인터 변수 선언하고 num1의 주소를 저장 
	
	printf("%p\n", numPtr);		// 포인터 변수 numPtr의 값 출력  
	printf("%p\n", &num1);		// 변수 num1의 메모리 주소 출력 
	
	return 0;
}
