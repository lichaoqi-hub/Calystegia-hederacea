#include <stdio.h>
#include "1.h"
int main(){
	BiTree b;
	printf("������������Ľ�㣬�սڵ���һ���ո���棺\n");
	CreateBiTree(b);
	printf("�������Ҷ�ӽڵ���Ϊ��%d\n", Leaves_Num(b));
	printf("����������Ϊ��%d\n", Depth(b));
	Exchange(b);
	printf("�����������������������������Ϊ��");
	PreOrderTraverse(b);
	printf("\n");
	printf("�����������������������������Ϊ��");
	InOrderTraverse(b);
	printf("\n");
	printf("������������������ĺ�������Ϊ��");
	PostOrderTraverse(b);
	return 0;
}
