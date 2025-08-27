#include<stdio.h>

int main() {
	
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int size = sizeof(arr)/sizeof(arr[0]);
	int* p = arr;
	int i = 0;
	
	printf("arr[] = { ", size);
	for(i = 0;i<size;i++) {
		printf("%d", arr[i]);
		
		if(i<8)
			printf(", ");
		else
			printf(" }");
	}
}
