#include<stdio.h>

//char *str = "Good afternoon";	// const ���� 
char *s1 = "Good";
char *s2 = "afternoon";	// const ���� 
char *ss[] = { s1, s2 };

int main(){
//	char* str = "Good afternoon";	// "�ȿ� ������ ����� �ǹ�����.
//	����� �����Ϸ��� �߱� ������ ������ �����. 

//	char str[] = "Good afternoon";
//	Heap�������� ����� stack�������� ������ ���� ������ ���ذŴ�. 
	
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
