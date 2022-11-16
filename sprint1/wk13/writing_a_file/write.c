#include <stdio.h>
#include <stdlib.h>


void main()
{
FILE *fp = NULL;

char ch = 'a';
fp = fopen("abc.txt", "w");

if (fp == NULL)
{
printf("Error");
exit(1);
}

fputc(ch, fp);
printf("\n");

fclose(fp);
}