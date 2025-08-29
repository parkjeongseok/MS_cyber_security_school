#include <stdio.h>
#include <conio.h>	// windows console only

int func(char c);

int main() {
	
	int mode = 1;	// operation mode
	char c = 0;
	
	while(mode){
		printf("> "); c = getch();
		printf("%c\n", c);
		
		switch(func(c)){
			case 1: printf("> 대문자\n", c);	break;
			case 2: printf("> 소문자\n", c);	break;
			case 3: printf("> 숫자\n", c);		break;
			case 4: printf("> 특수문자\n", c);	break;
			default : mode = 0;
		}
	
	}
	return 0;
}

int func(char c) {
	
	int k = 0;
	if( (c >= 'A') && (c <= 'Z') ) 			{k = 1;}
	else if( (c >= 'a') && (c <= 'z') ) 	{k = 2;}
	else if( (c >= '0') && (c <= '9') ) 	{k = 3;}
	else if( c == 3)						{k = 0;}
//	아스키 코드에서 3은 ctrl + c를 의미한다. 
	else 									{k = 4;}
	
	return k;
}

