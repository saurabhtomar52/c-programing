#include<stdio.h>
#include "Table.h"
int main(){
    int n;
    printf("Input the No to get Table of : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
       int b = Table(n,i);
       printf("%d\n",b);
    }
}