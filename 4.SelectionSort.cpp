void SelectionSort(int List[],int N) 
{/*��N���������зǵݼ�����*/
    for(i=0;i<N;i++){
        MinPosition=ScanForMin(List,i,N-1);
        /*��List[i]��List[N-1]������СԪ��������λ�ø���MinPosition*/
        Swap(List[i],List[MinPosition]);
        /*��δ���򲿷ֵ���У԰�������򲿷ֵ����λ��*/
    }
}
