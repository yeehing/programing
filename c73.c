#include<stdio.h>
int main(){
    int num=256;
    char grade='A';
    double pi=3.141592;
    printf("10����%d, 8���� %0,16����%x %X\n",num,8,num-1,10+5);
    printf("10���:%c,ASCII��:%d\n", grade,grade);
    printf("���ڿ�%s\n","hello world");
    printf("pi:%1f, 100�� ���� ǥ��� %e, %E\n", pi, 100.0,100.0);
    printf("�ۼ�Ʈ���%% ����ǥ���\"\n");
return 0;
}