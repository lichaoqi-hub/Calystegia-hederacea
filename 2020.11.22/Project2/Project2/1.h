#include <stdio.h>
#include <stdlib.h>
typedef int Status;
typedef char TElemType;
#define OK 1
typedef struct BiTNode
{
	TElemType data;
	struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;
Status CreateBiTree(BiTree &T)
{
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
Status InOrderTraverse(BiTree T)
{
	if (T)
	{
		InOrderTraverse(T->lchild);
		printf("%c", T->data);
		InOrderTraverse(T->rchild);
	}
	return OK;
}
Status PreOrderTraverse(BiTree T)
{
	if (T)
	{
		printf("%c", T->data);
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}
	return OK;
}
Status PostOrderTraverse(BiTree T){
	if (T){
		PostOrderTraverse(T->lchild);
		PostOrderTraverse(T->rchild);
		printf("%c", T->data);
	}
	return OK;
}
Status Leaves_Num(BiTree T){
	if (!T){
		return 0;
	}
	else{
		if ((!T->lchild) && (!T->rchild))
			return OK;
		else
			return Leaves_Num(T->lchild) + Leaves_Num(T->rchild);
	}
}
void Exchange(BiTree &T){
	if (T->lchild == NULL&&T->rchild == NULL);
	else{
		BiTree temp = T->lchild;
		T->lchild = T->rchild;
		T->rchild = temp;
	}
	if (T->lchild)
		Exchange(T->lchild);
	if (T->rchild)
		Exchange(T->rchild);
}
Status Depth(BiTree T){
	int depthval, depthleft, depthright;
	if (!T){
		depthval = 0;
	}
	else{
		depthleft = Depth(T->lchild);
		depthright = Depth(T->rchild);
		depthval = 1 + (depthleft>depthright ? depthleft : depthright);
	}
	return depthval;
}
