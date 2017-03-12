#define MaxSize <存储数据元素的最大个数>
struct DStack{
    ElementType Data[MaxSize];
    int Top1;
    int Top2;
}S;
S.Top1 = -1;
S.Top2 = MaxSize; 

void Push(struct DStack *PtrS,ElementType item,int Tag)
{/*Tag作为区分两个堆栈的标志，取值分别为1和2*/
    if(PtrS->Top2 - PtrS->Top1 == 1){
        printf("堆栈满"); return; 
    }
    if(Tag == 1)/*对第一个堆栈操作*/
        PtrS->Data[++(PtrS->Top1)] = item;
    else        /*对第二个堆栈操作*/
        PtrS->Data[--(PtrS->Top2)] = item;
}

ElementType Pop(struct DStack *PtrS,int Tag)
{
    if(Tag == 1){/*对第一个堆栈操作*/
        if(PtrS->Top1 == -1){
            printf("堆栈1空"); return NULL;
        }else return PtrS->Data[(PtrS->Top1)--];
    }else{/*对第二个堆栈操作*/
        if(PtrS->Top2 == MaxSize){
            printf("堆栈2空"); return NULL;
        }else return PtrS->Data[(PtrS->Top2)++];
    }
 } 
