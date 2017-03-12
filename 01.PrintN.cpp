#include <stdio.h>
void PrintN(int N)
{   int i;
    for(i=1;i<=N;i++){
        printf("%d\n",i);
    }
    return 0;
} //循环实现

void PrintN(int N)
{   if(N){
        PrintN(N-1);
        printf("%d\n",N);
    }   
    return 0;
} //递归实现

 
