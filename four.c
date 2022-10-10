#include<stdio.h>
#include<string.h>
void main(){
    int i,s=0;
    char str[50];
    printf("ENTER YOUR STRING :\n");
    gets(str);
    
    for(i=0;i<strlen(str);i++){
        if (str[i]==' ') {
            s++;
        }
    }

    printf("WORDS = %d",s+1);
    
}