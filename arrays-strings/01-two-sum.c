#include <stdio.h>
int main(){int a[]={2,7,11,15},t=9,n=4;for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(a[i]+a[j]==t){printf("[%d,%d]\n",i,j);return 0;}return 0;}
