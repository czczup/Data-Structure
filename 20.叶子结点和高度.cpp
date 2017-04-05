/*输出二叉树的叶子结点*/
void PreOrderTraversal(BinTree BT)
{
	if(BT){
		if(!BT->Left && !BT->Right) 
			printf("%d",BT->Data);
		PreOrderTraversal(BT->Left);
		PreOrderTraversal(BT->Right);
	}
}
/*求二叉树的高度*/
void PostOrderTraversal(BinTree BT)
{	
	int HL,HR,MaxH; 
	if(BT){
		HL = PostOrderTraversal(BT->Left);
		HR = PostOrderTraversal(BT->Right);
		MaxH = HL>HR?HL:HR;
		return (MaxH + 1); 
	}
	else return 0;
}

