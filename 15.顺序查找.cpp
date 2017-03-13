typedef struct LNode *List;
struct LNode{
    ElementType Element[MAXSIZE];
    int Length;
};


int SequentialSearch(List Tb1,ElementType K)
{/*在Element[i]~Element[n]中查找关键字为K的数据元素*/
    int i;
    Tb1->Element[0] = K;   /*建立哨兵*/
    for(i = Tb1->Length;Tb1->Element[i]!=K;i--);
    return i; /*查找成功返回所在单元下标，不成功返回0*/
} 

/*顺序查找的另一种形式*/
int SequentialSearch(List Tb1,ElementType K)
{/*在Element[i]~Element[n]中查找关键字为K的数据元素*/
    int i;
    for(i = Tb1->Length;i>0&&Tb1->Element[i]!=K;i--);
    return i; /*查找成功返回所在单元下标，不成功返回0*/
} 
