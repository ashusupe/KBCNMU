#include<stdio.h>
void set (int* a)
{
	*a=0;
	printf("in set function a=%d\n",*a);
	
}
int main()
{
	int a=10;
	printf("main before calling function a=%d\n ",a);
	set (&a);
	printf("main after calling function a=5d\n",a);
	return 0;
}
