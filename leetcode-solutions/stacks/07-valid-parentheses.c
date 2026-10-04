#include <stdio.h>
int main(){char*s="()[]{}",st[100];int top=-1,ok=1;for(int i=0;s[i];i++){char c=s[i];if(c=='('||c=='['||c=='{')st[++top]=c;else{if(top<0){ok=0;break;}char o=st[top--];if((c==')'&&o!='(')||(c==']'&&o!='[')||(c=='}'&&o!='{')){ok=0;break;}}}if(top!=-1)ok=0;puts(ok?"true":"false");}
