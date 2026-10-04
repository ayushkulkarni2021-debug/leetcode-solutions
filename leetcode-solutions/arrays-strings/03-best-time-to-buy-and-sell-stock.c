#include <stdio.h>
int main(){int p[]={7,1,5,3,6,4},n=6,min=p[0],profit=0;for(int i=1;i<n;i++){if(p[i]-min>profit)profit=p[i]-min;if(p[i]<min)min=p[i];}printf("%d\n",profit);}
