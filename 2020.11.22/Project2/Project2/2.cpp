#include <stdio.h>
#include "1.h"
int main(){
	BiTree b;
	printf("请输入二叉树的结点，空节点用一个空格代替：\n");
	CreateBiTree(b);
	printf("这棵树的叶子节点树为：%d\n", Leaves_Num(b));
	printf("这棵树的深度为：%d\n", Depth(b));
	Exchange(b);
	printf("交换左右子树后二叉树的先序序列为：");
	PreOrderTraverse(b);
	printf("\n");
	printf("交换左右子树后二叉树的中序序列为：");
	InOrderTraverse(b);
	printf("\n");
	printf("交换二叉树后二叉树的后序序列为：");
	PostOrderTraverse(b);
	return 0;
}
