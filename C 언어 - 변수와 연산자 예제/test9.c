#include <stdio.h>
#include <conio.h>

int Rectangle(int x, int y);
double Triangle(int x, int y);

void main(){
	int x = 0, y = 0;
	int r = 0;
	double t = 0.0;
	
	printf("x, y ���� �Է����ּ���. : "); scanf("%d %d", &x, &y);
	
	r = Rectangle(x, y);
	t = Triangle(x, y);
	
	printf("�غ��� %d�̰�, ���̰� %d�� 4������ ������ %d�Դϴ�.\n", x, y ,r);
	printf("�غ��� %d�̰�, ���̰� %d�� 3������ ������ %f�Դϴ�.", x, y ,t);
	
}
int Rectangle(int x, int y){	
	return x*y;
}

double Triangle(int x, int y){	
	return ( (double)x * (double)y ) / 2.0;
}
