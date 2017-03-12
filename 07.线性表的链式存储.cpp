typedef struct LNode *List;
struct LNode{
    ElementType Data;
    List Next; 
};
struct LNode L;
List Ptrl;
/*1.求表长*/
int Length(List Ptrl)
{
    List p=Ptrl;
    int j = 0;
    while(p){
        p = p->Next;
        j++; 
    }
    return j;
}/*时间性能为O(n)*/
 
/*2.查找*/
List FindKth(int K,List Ptrl)
{/*按序号查找*/
    List p = Ptrl;
    int i = 1;
    while(p!=NULL&&i<K){
        p = p->Next;
        i++;
    }
    if(i==k) return p;
    else return NULL; 
}
List Find(ElementType X,List Ptrl)
{
    List p = Ptrl;
    while(p!=NUll&&p->Data!=X)
        p = p->Next
    return p;
}/*时间性能为O(n)*/


/*3.插入*/
List Insert(ElementType X,int i,List Ptrl)
{
    List p,s;
    if(i==1){
        s=(List)malloc(sizeof(struct LNode));
        s->Data = X;
        s->Next = Ptrl;
        return s;
    }
    p = FindKth(i-1,Ptrl);
    if(p == NULL){
        printf("参数错");
        return NULL; 
    }else{
        s=(List)malloc(sizeof(struct LNode));
        s->Data = X;
        s->Next = p->Next;
        p->Next = s;
        return Ptrl;
    }
} 

/*4.删除*/
List Delete(int i,List Ptrl)
{
    List p,s;
    if(i==1){        /*若要删除的是第一个结点*/
        s = Ptrl;    /*s指向第一个结点*/
        if(Ptrl!=NULL)  Ptrl = Ptrl->Next;/*从链表中删除*/
        else return NULL;
        free(s);     /*释放被删除结点*/
        return Ptrl;
    }
    p = FindKth(i-1,Ptrl);
    if(p==NULL){
        printf("第%d个结点不存在",i-1); return NULL;
    }else if(p->Next==NULL){
        printf("第%d个结点不存在",i); return NULL; 
    }else{
        s = p->Next;
        p->Next = s->Next;
        free(s);
        return Ptrl;
    }
 } 
