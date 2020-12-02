#include<stdio.h>
#include"1.h"
int main(){
	BiTree a;
	printf("请输入二叉树的节点，空结点用一个空格代替：\n");
    CreateBiTree(a);
	printf("这棵树的叶子结点为：%d", leave(a));
	printf("这棵树的深度为：%d\n", Deep(a));
	exchange(a);
	printf("交换左右子树后二叉树的先序遍历为：");
	in(a);
	printf("交换左右子树后二叉树的先序遍历为：");
	pre(a);
	printf("交换左右子树后二叉树的先序遍历为：");
	post(a);
	return 0;
}