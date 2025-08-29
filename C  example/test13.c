#include<stdio.h>

char *title[] = {"번호", "이름", "국어", "영어", "수학"};
char *name[] = {"박정석", "박재은", "박시혜", "임준혁", "이승빈"};
int kor[] = {10, 20, 30, 40, 50};
int eng[] = {60, 70, 80, 90, 80};
int mat[] = {70, 60, 30, 40, 50};
int main(void){
//  int i = 10;
//  int *p = &i;
//  int **pp = &p;
  
//  printf("i  : %08x\t (%08x)\n",          &i,  i);
//  printf("p  : %08x\t (%08x)\t (%08x)\n", &p,  p,  *p);
//  printf("pp : %08x\t (%08x)\t (%08x)\n", &pp, pp, **pp);
  
  int nameSize = sizeof(name) / sizeof(name[0]);
//  printf("%d\n", size);
  for(int i = 0; i < nameSize; i++){
    if( i == 0 ){
      for(int j=0; j<nameSize ;j++){
        printf("%s\t", title[j]);
      }
      printf("\n");
    } else {
      printf("%2d\t%s\t%3d\t%3d\t%3d\n", i, name[i], kor[i], eng[i], mat[i]);
    }
  }
}
