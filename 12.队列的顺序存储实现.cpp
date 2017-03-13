#define MaxSize <存储数据元素的最大个数>
struct QNode{
    ElementType Data[MaxSize];
    int rear;
    int front;
}; 
typedef struct QNode *Queue;

void AddQ(Queue PtrQ,ElementType item)
{/*入队列*/
    if((PtrQ->rear+1)%MaxSize == PtrQ->front){
        printf("队列满");
        return;
    }
    PtrQ->rear = (PtrQ->rear+1)%MaxSize;
    /*求余数实现循环队列*/
    PtrQ->Data[PtrQ->rear] = item;
}

ElementType Delete(Queue PtrQ)
{
    if(PtrQ->front == PtrQ->rear){
    /*收尾相等则队列空*/
        printf("队列空");
        return ERROR;
    }else{
        PtrQ->front = (PtrQ->front+1)%MaxSize;
        return PtrQ->Data[PtrQ->front];
    }
} 
