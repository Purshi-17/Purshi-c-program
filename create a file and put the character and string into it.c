#include<stdio.h>
void main()
{FILE *fp;
  char c[110];
  fp= fopen("file.txt","w");//while in writing mode erase the old data in file add other data into it//
  fputc('a',fp);
  fputs("hello",fp);}
