#include <stdio.h>
int main(){char*s[]={"flower","flow","flight"};int i=0;while(s[0][i]){for(int j=1;j<3;j++)if(s[j][i]!=s[0][i]||!s[j][i])goto out;i++;}out:printf("%.*s\n",i,s[0]);}
