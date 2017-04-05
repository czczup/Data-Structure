/*二分查找*/
#include <stdio.h>
int BinarySearch(List Tb1,ElementType K)
{
	int left,right,mid,NoFound=-1;
	left = 1;
	right = Tb1->Length;
	while(left<=right){
		mid = (left + right)/2;
		if(K < Tb1->Element[mid])
			right = mid - 1;
		else if(K > Tb1->Element[mid])
			left = mid + 1;
		else return mid;
	}
	return NotFound;
 } 
