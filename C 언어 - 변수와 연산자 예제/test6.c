#include <stdio.h>

int main(void){
	int startIndex = 0, endIndex = 0, result = 0;
	
	printf("�ε��� ���۰���? : ");
	scanf("%d", &startIndex);
	
	printf("�ε��� ���ᰪ��? : ");
	scanf("%d", &endIndex);
	
	for(; startIndex<endIndex; startIndex+=2) {
		result += startIndex;
		printf("%4d, %4d\n", result, startIndex);
	}
	
	
	
//	int index1 = 0, index2=0, val = 0;
//	
//	printf("�ε��� ���۰���? : ");
//	scanf("%d", &index1);
//	
//	printf("�ε��� ���ᰪ��? : ");
//	scanf("%d", &index2);
//	
//	while(index1 < index2){
//		
//		val += index1;
//		printf("%4d, %4d\n", val, index1);
//		index1 += 2;
//	}
}
