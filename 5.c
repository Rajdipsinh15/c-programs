/*Write a C program that returns index of first matched element from given array. if element is not found it returns -1. e.g., if array[] = {1, 2, 5, 9, 11} and search value entered is "5" than it returns 2. If search value entered is "7" which is not present inside array, so function returns -1*/
#include<stdio.h>
int fun(int *p)
{
	int i,k;
	printf("search value\n");
	scanf("%d",&k);
	for(i=0;p[i];i++){
		if(p[i]==k)
			return 2;
	}
	return -1;

}
void main()
{
	int n;
	printf("enter the array size\n");
	scanf("%d",&n);
	int a[n],i,r;
	printf("enter array element\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	r=fun(a);
	printf("return =%d\n",r);
}
