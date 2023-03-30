/*Write a C program to find string length without using library function (strlen)*/
#include<stdio.h>
void main()
{
	char s[20];
	scanf("%[^\n]",s);
	int i;
	for(i=0;s[i];i++);
	printf("string length including =%d\n",i);
}
