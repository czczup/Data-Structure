#include <stdio.h>
typedef struct LNode *List;
struct LNode{
    ElementType Data[MAXSIZE];
    int Last;
}; 
struct LNode L;
List Ptrl;
//主要操作的实现
/*1.初始化*/
List MakeEmpty()
{
    List Ptrl;
    Ptrl = (list)malloc(sizeof(struct LNode));
    Ptrl->Last = -1;
    return Ptrl;
}
/*2.查找*/
int Find(ElementType X,List Ptrl)
{
    int i = 0;
    while(i<=Ptrl->Last&&Ptrl->Data[i]!=X)
        i++;
    if(i>Ptrl->Last)  return -1;/*如果没找到返回-1*/
    else return i;/*找到后返回存储位置*/
}/*查找成功的平均比较次数为(n+1)/2,平均时间性能为O(n)*/
/*3.插入*/
void Insert(ElementType X,int i,List Ptrl)
{
    int j;
    if(Ptrl->Last==MAXSIZE-1){
        printf("表满");
        return; 
    }
    if(i<1||i>Ptrl->Last+2){
        printf("位置不合法");
        return; 
    }
    for(j = Ptrl->Last;i>=i-1;j--)
        Ptrl->Data[j+1] = Ptrl->Data[j];/*向后移动*/
    Ptrl->Data[i-1] = X;                /*新元素插入*/
    ptrl->Last++;                       /*仍指向最后元素*/
    return;
} /*平均移动次数为n/2,平均时间性能为O(n)*/
/*4.删除*/
void Delete(int i,List Ptrl)
{
    int j;
    if(i<1||i>Ptrl->Last+1){
        printf("不存在第%d个元素",i);
        return; 
    }
    for(j=i;j<=Ptrl->Last;j++)
        Ptrl->Data[j-1] = Ptrl->Data[j];
    Ptrl->Last--;
    return;
}/*平均删除次数为(n-1)/2,平均时间性能为O(n)*/ 



