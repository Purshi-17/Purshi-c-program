#include<stdio.h>
void main()
{ FILE *fp;
  char c;
  fp= fopen("file.txt","r");
  c= fgetc(fp);
//get the character from the file //
  printf("character is %c\n",c);
  fclose(fp);
  return 0;}
