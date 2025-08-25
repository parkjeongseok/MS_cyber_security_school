// Hello 'C' World
#include <stdio.h>
//#include <stdafx.h>
// Commit Chages Test
int main()
{
	int age = 0;
	int point = 0;
	
//	printf("My age : %d \n%d is my point \nGood \nmoring \neverbody", 25, 100); 
	
	printf("How old are you : ");
	scanf("%d", &age);
	
	printf("How many points do you have? : ");
	scanf("%d", &point);
	
	printf("\n");
	
	printf("My age : %d\n", age);
	printf("%d is my point", point);
	
	return 0;
}
