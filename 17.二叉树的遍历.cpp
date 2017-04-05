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
*/

void PostOrderTraversal(BinTree BT)
{
	if(BT){
		PostOrderTraversal(BT->Left);
		PostOrderTraversal(BT->Right);
		printf("%d",BT->Data);
	}
}


