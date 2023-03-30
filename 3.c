/*Write a C program to reverse the given number in most efficient way.*/
#include<stdio.h>
void main()
{
	int m,n,s=0;
	printf("enter the number\n");
	scanf("%d",&m);

	for(n=m;n;n=n/10)
	{
		s=s*10+n%10;
	}
	printf("reverse given number=%d \n",s);
}
