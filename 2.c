/*Write a C program to find 1's count in binary value of given integer number*/
#include<stdio.h>
void main(){

	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	int pos,c=0;

	for(pos=0;pos<=31;pos++)
		if(n>>pos&1)
			c++;
	printf(" given number= %d\n  number binary 1's= %d\n",n,c);
}
