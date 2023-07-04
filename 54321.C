#include<stdio.h>
#include<conio.h>

void main(){
int i,j;
clrscr();
//outer loop
for(i='a';i<='e';i++){
//inner loop
for(j='a';j<='e';j++){
 printf("%c",j);
 }
 printf("\n");
 }
getch();
}