#include<stdio.h>
int main(){
    int total;
    char grade;
    scanf("%d" ,&total);
    // fflush(stdin);
    while(getchar()!='\n');
    scanf("%c" ,&grade);
    printf("input:%d, %c\n" ,total,grade);    
    return 0;

}