#include<stdio.h>
void main()
{  FILE *fp;
  char c[50];
  fp=fopen("file.txt","a+b");
  fputc('P',fp);
  fputs("urshi",fp);}
