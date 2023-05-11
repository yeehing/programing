#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    // 조건?참일때 실행:거짓실행
    a=b?printf("a==b"):printf("a!=b");
    return 0;
}