//��дһ������Ҫ���û�����һ����Ԫ���Ȼ����ʾ������5%˰�ʺ����Ӧ����ʽ������ʾ��
//Enter an amount: 100.00
//With tax added: $105.00
#include <stdio.h>
int main(){
    float dollar;
    printf("Enter an amount:");
    scanf("%f",&dollar);
    printf("With tax added: $%.2f",dollar*1.05f);
    return 0;



}