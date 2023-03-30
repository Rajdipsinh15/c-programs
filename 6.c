/*Write a C program that expands given short norm to expanded string. e.g., if passed string is "a-g" output should be "abcdefg" if passed string is "b-h4-8" output should be "bcdefgh45678"*/

#include<stdio.h>
void fun(char *s)
{

	char c;
	int i=0;
	while(s[i]!='\0'){
		if(s[i]=='-')
		{
			c=s[i-1];
			while(c<s[i+1])
				printf("%c",c++);
			if(c!='\0')
				printf("%c",c);
		}
		i++;
	}
}

void main()
{
	char s[20];
	printf("enter the string\n");
	scanf("%[^\n]",s);

	fun(s);
	printf("\n");
}
