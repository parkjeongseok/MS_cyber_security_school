#include<stdio.h>
#include<string.h>

char *title[] = {"번호", "이름", "국어", "영어", "수학"};
char *name[] = {"박정석", "박재은", "박시혜", "임준혁", "이승빈"};
int kor[] = {10, 20, 30, 40, 50};
int eng[] = {60, 70, 80, 90, 80};
int mat[] = {70, 60, 30, 40, 50};

//  t13 [write number] // --help
//  해당 번호에 맞는 학생의 국영수 성적 출력
//  default is all

//  n은 커맨드라인에서 작성한 단어의 개수이다.
//  t13이라고 작성하면 t13하나이기에 1이다.
int main(int n, char *s[]){   // CLI : Command Line Interface
  
  int start = 0;
  int end = sizeof(title)/sizeof(title[0]);
  
  if ( n > 1 ) {
    if( strcmp(s[1], "--help") == 0){
      printf("\n\n==============================================================\n");
      printf("=                                                            =\n");
      printf("=      t13 [write number] [write --help]                     =\n");
      printf("=        해당 번호에 맞는 학생의 국영수 성적 출력합니다.     =\n");
      printf("=        <default> is all                                    =\n");
      printf("=                                                            =\n");
      printf("==============================================================\n\n\n");
      exit(1);
      
    } else {
      start = atoi(s[1]);//s[1][0] - '0' - 1; // 문자 '1'==>> 숫자 1로 바꿔주는 방법
      end = start + 1;
    }
  }
   for(int i = start; i < end ; i++){
     if( i == start ){
       for( int j=0; j<5; j++ ){
         printf("%s", title[j]);
       }
       printf("\n");
     }
     printf("%2d\t%s\t%3d\t%3d\t%3d\n", i+1, name[i], kor[i], eng[i], mat[i]);
  }
  

  return 0;
}


