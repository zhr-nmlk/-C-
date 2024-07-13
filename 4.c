//编写一个程序，要求用户输入一个美元数额，然后显示出增加5%税率后的相应金额。格式如下所示：
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