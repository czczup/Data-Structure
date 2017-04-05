/*结构数组表示二叉树:静态链表*/
#define MaxTree 10
#define ElementType char
#define Tree int
#define NULL -1
struct TreeNode {
	ElementType Element;
	Tree Left;
	Tree Right;
} T1[MaxTree],T2[MaxTree];
int main() {
	Tree R1,R2;
	R1 = BuildTree(T1);//建二叉树1
	R2 = BuildTree(T2);//建二叉树2
	if(Isomorphic(R1,R2))
		printf("Yes\n");//判断是否同构并输出
	else
		printf("No\n");
	return 0;
}
Tree BuildTree(struct TreeNode T[]) {
	scanf("%d\n",&N);
	if(N) {
		for(int i=0; i<N; i++)
			check[i] = 0;
		for(int i=0; i<N; i++) {
			scanf("%c %c %c\n",&T[i].Element,&cl,&cr);
			if(cl!='-') {
				T[i].Left = cl-'0';
				check[T[i].Left] = 1;
			} else T[i].Left = Null;
		}
		for(i=0; i<N; i++)
			if(!check[i])
				break;
		Root = i;
	}
	return Root;
}

int Isomorphic(Tree R1,Tree R2){
	if ((R1==Null)&&(R2==Null)) /* both empty */
		return 1;
	if (((R1==Null)&&(R2!=Null)) || ((R1!=Null)&&(R2==Null)))
		return 0; /* one of them is empty */
	if (T1[R1].Element != T2[R2].Element )
		return 0; /* roots are different */
	if ((T1[R1].Left == Null)&&(T2[R2].Left == Null))
		/* both have no left subtree */
		return Isomorphic(T1[R1].Right,T2[R2].Right);
	if (((T1[R1].Left!=Null)&&(T2[R2].Left!=Null))&&
		((T1[T1[R1].Left].Element)==(T2[T2[R2].Left].Element)) )
		/* no need to swap the left and the right */
		return ( Isomorphic(T1[R1].Left,T2[R2].Left) &&
				Isomorphic(T1[R1].Right,T2[R2].Right));
	else /* need to swap the left and the right */
		return (Isomorphic(T1[R1].Left,T2[R2].Right)&&
				Isomorphic(T1[R1].Right,T2[R2].Left));
}
