#include<stdio.h>
#include<conio.h>

void main(){
int i,j;
clrscr();
//outer loop
for(i=1;i<=5;i++){
//inner loop
  for(j=1;j<=5;j++){
  printf("%d",i);
  }
  printf("\n");
  }
getch();
}