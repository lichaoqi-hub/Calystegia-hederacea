#include <stdio.h>
int main()
{
	int a, n, count;
	printf("����һ����������λ������");
	scanf("%d", &a);
	n = a / 10;
	for (count = 1; n != 0; count++);
	n = n / 10;
	printf("�������%dλ������,�����ӡ��", count);
	for (n = 1; n <= count; n++)
	{
		printf("%d ", a % 10);
		a = a / 10;
	}
	printf("\n");

}
