#include <stdio.h>
#include <string.h>
int main(){char s[]="anagram",t[]="nagaram";int c[256]={0};if(strlen(s)!=strlen(t)){puts("false");return 0;}for(int i=0;s[i];i++){c[(unsigned char)s[i]]++;c[(unsigned char)t[i]]--;}for(int i=0;i<256;i++)if(c[i]){puts("false");return 0;}puts("true");}
