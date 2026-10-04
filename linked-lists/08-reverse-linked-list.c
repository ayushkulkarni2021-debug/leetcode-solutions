#include <stdio.h>
struct Node{int v;struct Node*next;};
int main(){struct Node a={1,0},b={2,0},c={3,0};a.next=&b;b.next=&c;struct Node*prev=0,*cur=&a;while(cur){struct Node*n=cur->next;cur->next=prev;prev=cur;cur=n;}for(cur=prev;cur;cur=cur->next)printf("%d ",cur->v);}
