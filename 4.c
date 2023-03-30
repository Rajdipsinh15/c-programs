/*Write a C function to invert the bits in given integer variable. The inversion of bits should start from given position and should be done upto given counts.*/
#include<stdio.h>
void bit_reverse(int n){

	printf("%d\n",n);
	int pos,i,j,m,p;
	printf("normal binary \n");
	for(pos=31 ; pos>=0 ; pos--)
		printf("%d",n>>pos&1);
	printf("\n");
	for(i=0,j=31 ; i<=31 ; i++,j--)
	{
		//m=n>>i &1;// set clear
		//p=n>>j &1;

		//if(m!=p)// toggle 
	//	{
			n=n^1<<i;
	//		n=n^1<<j;
	//	}
	}
//	printf("%d\n",n);
	printf("reverse binary\n");

	for(pos=31;pos>=0;pos--)
		printf("%d",n>>pos&1);
	printf("\n");


}
void main(){

	 int n;
	printf("enter the number\n");
	scanf("%d",&n);
	bit_reverse(n);
}
