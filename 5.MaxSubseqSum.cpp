int MaxSubseqSum1( int A[], int N )
{
	int ThisSum, MaxSum = 0;
	int i, j, k;
	for( i = 0; i < N; i++ ){ /* i���������λ�� */
		for( j = i; j < N; j++ ){ /* j�������Ҷ�λ�� */
			ThisSum = 0;  /* ThisSum�Ǵ�A[i]��A[j]�����к� */
			for( k = i; k <= j; k++ )
				ThisSum += A[k];
			if( ThisSum > MaxSum ) /* ����յõ���������к͸��� */
				MaxSum = ThisSum;    /* ����½�� */
		} /* jѭ������ */
	} /* iѭ������ */
	return MaxSum;
}//T(N)=O(N^3) 


int MaxSubseqSum2( int A[], int N )
{
	int ThisSum, MaxSum = 0;
	int i, j;
	for( i = 0; i < N; i++ ){ /* i���������λ�� */
		Thissum=0;   /* ThisSum�Ǵ�A[i]��A[j]�����к� */
        for( j = i; j < N; j++ ){ /* j�������Ҷ�λ�� */
			ThisSum += A[j];
            /*������ͬ��i,��ͬ��j��ֻҪ��j-1��ѭ���Ļ������ۼ�һ���*/ 
			if( ThisSum > MaxSum ) /* ����յõ���������к͸��� */
				MaxSum = ThisSum;    /* ����½�� */
		} /* jѭ������ */
	} /* iѭ������ */
	return MaxSum;
}//T(N)=O(N^2) 




int Max3( int A, int B, int C )
{ /* ����3�������е����ֵ */
    return A > B ? A > C ? A : C : B > C ? B : C;
}
int DivideAndConquer( int List[], int left, int right )
{ /* ���η���List[left]��List[right]��������к� */
    int MaxLeftSum, MaxRightSum; /* �������������Ľ� */
    int MaxLeftBorderSum, MaxRightBorderSum; /*��ſ�ֽ��ߵĽ��*/
 
    int LeftBorderSum, RightBorderSum;
    int center, i;
 
    if( left == right )  { /* �ݹ����ֹ����������ֻ��1������ */
        if( List[left] > 0 )  return List[left];
        else return 0;
    }
 
    /* ������"��"�Ĺ��� */
    center = ( left + right ) / 2; /* �ҵ��зֵ� */
    /* �ݹ�����������е����� */
    MaxLeftSum = DivideAndConquer( List, left, center );
    MaxRightSum = DivideAndConquer( List, center+1, right );
 
    /* �������ֽ��ߵ�������к� */
    MaxLeftBorderSum = 0; LeftBorderSum = 0;
    for( i=center; i>=left; i-- ) { /* ����������ɨ�� */
        LeftBorderSum += List[i];
        if( LeftBorderSum > MaxLeftBorderSum )
            MaxLeftBorderSum = LeftBorderSum;
    } /* ���ɨ����� */
 
    MaxRightBorderSum = 0; RightBorderSum = 0;
    for( i=center+1; i<=right; i++ ) { /* ����������ɨ�� */
        RightBorderSum += List[i];
        if( RightBorderSum > MaxRightBorderSum )
            MaxRightBorderSum = RightBorderSum;
    } /* �ұ�ɨ����� */
 
    /* ���淵��"��"�Ľ�� */
    return Max3( MaxLeftSum, MaxRightSum, MaxLeftBorderSum + MaxRightBorderSum );
}
 
int MaxSubseqSum3( int List[], int N )
{ /* ������ǰ2���㷨��ͬ�ĺ����ӿ� */
    return DivideAndConquer( List, 0, N-1 );
}//T(N)=O(NlogN)


int MaxSubseqSum4( int List[], int N )
{//���ߴ��� 
    int ThisSum,MaxSum;
    int i;
    ThisSum=MaxSum=0;
    for(i=0;i<N;i++){
        ThisSum+=A[i];/*�����ۼ�*/
        if(ThisSum>MaxSum)
            MaxSum=ThisSum;/*���ָ��������µ�ǰ���*/
        else if(ThisSum<0)/*�����ǰ���к�Ϊ��*/
            ThisSum=0;/*�򲻿���ʹ����Ĳ��ֺ���������֮*/
    }
    return MaxSum;
} //T(N)=O(N)
/*���ߵ���˼��ָÿ����һ�����ݾͽ��м�ʱ����
���κ�һ���ط���ֹ���룬�㷨������ȷ������ǰ�Ľ� */


