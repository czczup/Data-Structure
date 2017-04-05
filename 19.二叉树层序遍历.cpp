void LevelOrderTraversal(BinTree BT)
{
	Queue Q;
	BinTree T;
	if(!BT)
		return;
	Q = CreatQueue(MaxSize);
	AddQ(Q,BT);//根结点入队 
	while(!isEmptyQ(Q)){
		T = DeleteQ(Q);//从队列中取出一个元素
		printf("%d\n",T->Data);//访问该元素所指结点
		if(T->Left)//若该元素所指结点的左孩子结点非空
			AddQ(Q,T->Left);//则将其左孩子的指针顺序入队
		if(T->Right)//若该元素所指结点的右孩子结点非空
			AddQ(Q,T->Right);//则将其右孩子的指针顺序入队
	}
}

