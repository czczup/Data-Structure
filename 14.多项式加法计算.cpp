#include <stdio.h> 
struct PolyNode{
    int coef;   //系数 
    int expon;  //指数 
    struct PolyNode *link;
};
typedef struct PolyNode *Polynomial;
Polynomial P1,P2; 

Polynomial PolyAdd(Polynomial P1,Polynomial P2)
{              /*头  尾  临时结点*/
    Polynomial front,rear,temp;
    int sum;
    rear = (Polynomial)malloc(sizeof(struct PolyNode));
    front = rear;
    while(P1&&P2)/*退出循环说明至少有一个多项式为空*/
        switch(Compare(P1->expon,P2->expon)){/*比较值的大小*/
            case 1:/*第一个参数大*/
                Attach(P1->coef,P2->expon,&rear);
                P1 = P1->link;
                break;
            case -1:/*第二个参数大*/
                Attach(P2->coef,P2->expon,&rear);
                P2 = P2->link;
                break;
            case 0:/*两个参数相等*/
                sum = P1->coef + P2->coef;
                if(sum) Attach(sum,P1->expon,&rear);
                P1 = P1->link;
                P2 = P2->link;
                break;
        }
    /*P1不空*/
    for(;P1;P1=P1->link) Attach(P1->coef,P1->expon,&rear);
    /*P2不空*/
    for(;P2;P2=P2->link) Attach(P2->coef,P2->expon,&rear);
    rear->link = NULL;
    temp = front;
    front = front->link;/*令front指向多项式第一个非零项*/
    free(temp);   /*释放临时空表头结点*/
    return front;
}

void Attach(int c,int e,Polynomial *pRear) 
{
    Polynomial P;
    P = (Polymicial)malloc(sizeof(struct PolyNode));
    P->coef = c;      /*对新结点赋值*/
    P->expon = e;
    P->link = NULL;
    (*pRear)->link = P;
    *pRear = P;       /*修改pRear的值*/
}
