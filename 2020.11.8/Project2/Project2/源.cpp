#include <stdio.h>
int main()
{
	int a, n, count;
	printf("输入一个不多于五位的整数");
	scanf("%d", &a);
	n = a / 10;
	for (count = 1; n != 0; count++);
	n = n / 10;
	printf("这个数是%d位的整数,逆序打印：", count);
	for (n = 1; n <= count; n++)
	{
		printf("%d ", a % 10);
		a = a / 10;
	}
	printf("\n");

}
