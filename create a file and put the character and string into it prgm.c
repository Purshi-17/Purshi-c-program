#include<stdio.h>
void main()
{  FILE *fp;
  char c[110];
  fp= fopen("file.txt","a");//without erase the old data we can append character and string//
  fputc('p',fp);
  fputs("urshi",fp);}
