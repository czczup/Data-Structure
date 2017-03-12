typedef struct GNode *Glist;
struct GNode{
    int Tag;    /*标志域:0表示单元素,1表示结点是广义表*/
    union{      /*子表指针域SubList与单元素数据域Data复用*/
        ElementType Data;
        GList SubList;
    }URegion;
    Glist Next; /*指向后继结点*/
};
