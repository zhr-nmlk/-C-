#include <stdio.h>
int main(){
    int dollar,remain1,remain2,remain3,remain4;
    printf("Enter a dollar amount: ");
    scanf("%d",&dollar);
    remain1=dollar/20;
    remain2=(dollar-remain1*20)/10;
    remain3=(dollar-remain1*20-remain2*10)/5;
    remain4=(dollar-remain1*20-remain2*10-remain3*5)/1;
    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d",remain1,remain2,remain3,remain4);
    return 0;
}