Position Find(ElementType X,BinTree BST)
{
	if(!BST)
		return NULL;
	if(X > BST->Data)
		return Find(X,BST->Right);
	else if(X < BST->Data)
		return Find(X,BST->Left);
	else
		return BST;
}//尾递归
Position Find(ElementType X,BinTree BST)
{
	while(BST){
		if(X > BST->Data)
			BST = BST->Right;
		else if(X < BST->Data)
			BST = BST->Left);
		else
			return BST;
	}
	return NULL;
}//查找的效率决定于树的高度 
Position FindMin(BinTree BST)
{
	if(!BST)
		return NULL;
	else if(!BST->Left)
		return BST;
	else
		return FindMin(BST->Left);
 } 
Position FindMax(BinTree BST)
{
	if(BST)
		while(BST->Right)
			BST = BST->Right;
	return BST;
}

BinTree Insert(ElementType X,BinTree BST)
{
	if(!BST){
		/*若原树为空,生成并返回一个结点的二叉搜索树*/
		BST = malloc(sizeof(struct TreeNode));
		BST->Data = X;
		BST->Left = BST->Right = NULL;
	}else{/*开始找要插入元素的位置*/
		if(X < BST->Data)
			BST->Left = Insert(X,BST->Left);
		else if(X > BST->Data)
			BST->Right = Insert(X,BST->Right);
		/*else X已经存在,什么都不做*/
	return BST;
	}
}

BinTree Delete(ElementType X,BinTree BST)
{
	Position Tmp;
	if(!BST)
		printf("要删除的元素未找到\n");
	else if(X < BST->Data)
		BST->Left = Delete(X,BST->Left);//左子树递归删除 
	else if(X > BST->Data)
		BST->Right = Delete(X,BST->Right);//右子树递归删除 
	else//找到要删除的结点 
		if(BST->Left && BST->Right){//被删除结点有左右两个子结点 
			Tmp = FindMin(BST->Right);//在右子树找到最小的元素填充删除结点 
			BST->Data = Tmp->Data;
			BST->Right = Delete(BST->Data,BST->Right);//在删除结点的右子树中删除最小元素 
		}else{//被删除结点有一个或无子结点 
			Tmp = BST;
			if(!BST->Left)//有右孩子或无子结点 
				BST = BST->Right;
			else if(!BST->Right)//有左孩子或无子结点 
				BST = BST->Left;
			free(Tmp); 
		}
	return BST;
 } 


