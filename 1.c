/*Write a C program that displays given number in string format. e.g., 10 -> ten 100 -> hundred 5270 -> five thousand two hundred seventy*/
#include<stdio.h>

void convert(int num)
{
	int n;
	char a[][10]={ "","one","two","three","four","five","six","seven","eight","nine"};
	char b[][10]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	char c[][10]={"ten","eleven","twele","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};	
	if(num==0){
		printf(" zero ");
		return;
	}
	if(num<0)
	{
		printf(" minus ");
		num=-num;
	}
 	if(num>=1000)
	{
		n=num/1000;
		printf("%s thousand ",a[n]);
		num=num%1000;
	}
	if(num>=100){
		n=num/100;
		printf("%s hundred ",a[n]);
		num=num%100;
	}
	if(num>=20){
		n=num/10;
		printf("%s ",b[n]);
		num=num%10;
	}
	if(num>=10 && num<=19)
	{
		printf("%s ",c[num-10]);
		num=0;
	}
	if(num>0)
	{
		printf("%s ",a[num]);
	}

}



void main(){

	int n;
	printf("enter the number\n");
	scanf("%d",&n);

	convert(n);
	printf("\n");
}
