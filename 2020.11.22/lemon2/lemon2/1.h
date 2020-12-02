
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef int Status;
#define OK 1
#define ERROR 0
typedef struct BiTNode{
	char data;
	BiTNode *lchild, *rchild;
}BiTNode, *BiTree;
int CreateBiTree(BiTree &T){
	char ch;
	scanf("%c", &ch);
	if (ch == ' ')
		T = NULL;
	else
	{
		T = (BiTree)malloc(sizeof(BiTree));
		T->data = ch;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);

	}
		
	
	
	return OK;
}
int in(BiTree T){
	if(T){
		in(T->lchild);
		printf("%c", T->data);
		in(T->rchild);


	}
	return OK;
}
int pre(BiTree T){
	if (T){
		printf("%c", T->data);
		pre(T->lchild);
		pre(T->rchild);
	}
	return OK;

}
int post(BiTree T){
	if (T){
		post(T->lchild);
		post(T->rchild);
		printf("%c", T->data);
	}
	return OK;
}
int leave(BiTree T){
	if (!T){
		return 0;
	}
	else
	{
		if ((!T->lchild) && (!T->rchild))
			return 1;
		else
			return leave(T->lchild) + leave(T->rchild);
	}
}
int Deep(BiTree T){
	int deep1, deep2, deep3;
	if (!T){
		deep3 = 0;
	}
	else
	{
		deep1 = Deep(T->lchild);
		deep2 = Deep(T->rchild);
		deep3 = 1 + (deep1 > deep2?deep1: deep2);
	}
	return deep3;
}
void exchange(BiTree &T){
	if (T->lchild != NULL&&T->rchild != NULL);
	else{
		BiTree a = T->lchild;
		T->lchild = T->rchild;
		T->rchild = a;
}
	if (T->lchild)
		exchange(T->lchild);
	if (T->rchild)
		exchange(T->rchild);

	
}





