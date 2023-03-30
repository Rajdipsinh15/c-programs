/*Write a C program to compare two strings (returns 0 on success and -1 on failure) Define above function in another c file instead of main source file. Make a Makefile to compile these c files*/
#include<stdio.h>
extern int compare(char *, char *);
void main()
{
	char m[10],s[10];
	int i;
	printf("enter the frist string\n");
	scanf("%s",m);
	printf("enter the second string\n");
	scanf("%s",s);
	i=compare(m,s);
	printf(" return=%d \n",i);

}
