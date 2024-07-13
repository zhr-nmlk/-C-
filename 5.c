#include <stdio.h>
int main(){
    int x;
    printf("Enter the number of x:");
    scanf("%d",&x);//注意不要漏掉“ & ”
    printf("计算得到多项式的值为：%d",3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6);
    return 0;
}