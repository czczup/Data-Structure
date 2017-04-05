/*
先序遍历
1.访问根结点
2.先序遍历其左子树
3.先序遍历其右子树
*/

void PreOrderTraversal(BinTree BT)
{
	if(BT){
		printf("%d",BT->Data);
		PreOrderTraversal(BT->Left);
		PreOrderTraversal(BT->Right);
	}
}

/*
中序遍历
1.中序遍历其左子树
2.访问根结点
3.中序遍历其右子树
*/

void InOrderTraversal(BinTree BT)
{
	if(BT){
		InOrderTraversal(BT->Left);
		printf("%d",BT->Data);
		InOrderTraversal(BT->Right);
	}
}


/*
后序遍历
1.后序遍历其左子树
2.后序遍历其右子树
3.访问根结点
*/

void PostOrderTraversal(BinTree BT)
{
	if(BT){
		PostOrderTraversal(BT->Left);
		PostOrderTraversal(BT->Right);
		printf("%d",BT->Data);
	}
}


