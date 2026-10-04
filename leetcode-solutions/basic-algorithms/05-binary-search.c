#include <stdio.h>
int main(){int a[]={-1,0,3,5,9,12},n=6,t=9,l=0,r=n-1;while(l<=r){int m=l+(r-l)/2;if(a[m]==t){printf("%d\n",m);return 0;}if(a[m]<t)l=m+1;else r=m-1;}puts("-1");}
