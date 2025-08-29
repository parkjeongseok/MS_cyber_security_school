#include<stdio.h>

//char *str = "Good afternoon";	// const 영억 
char *s1 = "Good";
char *s2 = "afternoon";	// const 영억 
char *ss[] = { s1, s2 };

int main(){
//	char* str = "Good afternoon";	// "안에 문장은 상수를 의미힌다.
//	상수를 변경하려고 했기 때문에 문제가 생긴다. 

//	char str[] = "Good afternoon";
//	Heap영역에서 만들고 stack영역으로 가지고 가서 변경을 해준거다. 
	
//	char b[100];
//	strcpy(b, str);
//	char *p = b;
//	
//	printf("Before : \"%s\"\n", p);
//	
//	*(p+5) = '_';
//	
//	printf("After : \"%s\"", p);

	printf("\"%s %s\" \n", s1, s2);
	printf("\"%s %s\" \n", ss[0], ss[1]);
}
