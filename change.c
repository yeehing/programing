#include<stdio.h>
int main(){
int dodo, gogo;
int total,deposit, change, rest, menu;
int w500, w100,w50,w10;
int cnt_dodo, cnt_gogo;
while(1)
{
printf("�� �� �� 70�� �ǲǹ� 30�� �Դϴ�.\n");
printf("������ ������ �� �Է��Ͻÿ�.\n");
scanf("%d %d",&cnt_gogo);
dodo=70*cnt_dodo;
gogo=30*cnt_gogo;
printf("�� �ݾ��� %d�Դϴ�\n",total);
printf("������ �ݾ��� �Է��Ͻÿ�.\n");
scanf("%d,&deposit");
if(deposit>total){
    change = deposit -total;
    w500=change /500;
    rest=change % 500;
    w100=rest/100;
    rest=change%100;
    w50=rest/50;
    rest=rest%50;
    w10=rest/10;
    printf("�ǶǸ� ��ü �ݾ� : %d\n",dodo);
    printf("�ǰ��� ��ü �ݾ� : %d\n",gogo);
    printf("�Ž����� : %d\n",change);
    printf("#### �Ž����� ������ �ּ� ���� ####\n\n");
    printf("500��: %d��\n", w500);
    printf("100��: %d��\n", w100);
    printf("50��: %d��\n", w50 );
    printf("10�� %d��\n", w10);
    printf("\n##################################\n\n");
    printf("����Ͻðڽ��ϱ�?�ٽ� �Է��Ϸ��� 1 �������� 0�� �����ּ���");
    scanf("%d",&menu);
    if(menu==0) break;
    else continue;
}
else {
    printf("�ݾ��� �����մϴ�. �ٽ� �Է��Ϸ��� 1 �������� 0�� �����ּ���");
    scanf("%d",&menu);
    if(menu==0) break;
    else continue;
    }
}
return 0;
}