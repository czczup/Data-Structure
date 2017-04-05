/*中序遍历非递归遍历算法*/
void InOrderTraversal(BinTree BT)
{
	BinTree T=BT;
	Stack S = CreatStack(MaxSize);
	while(T || !IsEmpty(S)){//数不空或堆栈不空 
		while(T){//遇到一个结点数不空 
			Push(S,T);//就把它圧栈
			T = T->Left;//并去遍历它的左子树
		}
		if(!IsEmpty(S)){//当左子树遍历结束后
			T = Pop(S);//从栈顶弹出这个结点
			printf("%5d",T->Data);//并访问它
			T = T->Right;//然后按其右指针再去中序遍历该结点的右子树
		}
	}
}
//将printf语句换到第8行->先序遍历 
