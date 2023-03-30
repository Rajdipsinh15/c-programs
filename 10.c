/*Write a C program to find keyword/substring from a given string. If substring is available print "Search successful" otherwise print "Search Unsuccessful"*/
#include<stdio.h>
void main()
{
	char s[10],m[50];
	printf("enter main string\n");
	scanf("%[^\n]",m);
	printf("enter sub string\n");
	scanf(" %[^\n]",s);

	int i,j;
	for(i=0;m[i];i++)
	{
		if(m[i]==s[0])
		{
			for(j=1;s[j];j++)
				if(m[i+j]!=s[j])
				{
					printf("Search Unsuccessful\n");
					break;
				}
			if(s[j]==0){
				printf("Search successful\n");
				break;
			}
		}
	}
	if(s[j]!=0)
		printf("Search unsuccessful\n");
}
