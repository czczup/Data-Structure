#include <stdio.h>
double f1(int n,double a[],double x){
	int i;
	double p=a[0];
	for(i=1; i<=n; i++){
		p+=(a[i]*pow(x,i));
	}
	return p;
}//普通算法 T(n)=C1*n^2+C2*n

double f2(int n,double a[],double x){
    int i;
    double p=a[n];
    for(i=n;i>0;i--){
        p=a[i-1]+x*p;
    }
    return p; 
}//秦九韶算法 T(n)=C*n
