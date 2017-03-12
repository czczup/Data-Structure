#define MaxSize <储存数据元素的最大个数>
typedef struct SNode *Stack;
struct SNode{
    ElementType Data[MaxSize];
    int Top;/*下标*/
}; 

void Push(Stack PtrS,ElementType item)
{
    if(PtrS->Top==MaxSize-1){
        printf("堆栈满");return; 
    }else{
        PtrS->Data[++(PtvrS->Top)] = item;
        return; 
    }
} 

ElementType Pop(Stack PtrS)
{
    if(PtrS->Top==-1){
        printf("堆栈空");
        return ERROR; 
    }else{
        return (PtrS->Data[(PtrS->Top)--]); 
    } 
}
