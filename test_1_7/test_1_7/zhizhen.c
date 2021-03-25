#include<stdio.h>
int main()
{
	int a = 0x11223344;
	int* pa=&a;
	*pa = 0;
	printf("%p\n", pa);
	return 0;
}