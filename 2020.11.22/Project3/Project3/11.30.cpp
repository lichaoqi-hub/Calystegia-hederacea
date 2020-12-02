#include<stdio.h>
//int main()
//{
//	float i = 1,score1,score2,score3,score4,score5,aver;
//	while (i <= 50)
//	{
//		scanf_s("%f,%f,%f,%f,%f", &score1, &score2, &score3, &score4, &score5);
//		aver = (score1 + score2 + score3 + score4 + score5)/5;
//		printf("aver=%f", aver);
//		i++;
//	}
//	return 0;
//}
int main()
{
	int i = 1, sum=0;
	while (i <= 100)
	{
		sum = sum + i;
		i++;
	}
	printf("sum=%d\n", sum);
	return 0;
}