#include<stdio.h>
#include"1.h"
int main(){
	BiTree a;
	printf("������������Ľڵ㣬�ս����һ���ո���棺\n");
    CreateBiTree(a);
	printf("�������Ҷ�ӽ��Ϊ��%d", leave(a));
	printf("����������Ϊ��%d\n", Deep(a));
	exchange(a);
	printf("����������������������������Ϊ��");
	in(a);
	printf("����������������������������Ϊ��");
	pre(a);
	printf("����������������������������Ϊ��");
	post(a);
	return 0;
}