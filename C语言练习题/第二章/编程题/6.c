#include <stdio.h>
int main(){
    int x;
    
    printf("Enter the number of x:");
    scanf("%d",&x);
    
    printf("计算得到多项式的值为：%d",((((3*x+2)*x-5)*x-1)*x+7)*x-6);
    
    return 0;
}