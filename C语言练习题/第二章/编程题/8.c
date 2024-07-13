#include <stdio.h>
int main(){
    float loan, rate, monthly_payment,remain1,remain2,remain3;
    printf("Enter amount of loan: ");
    scanf("%f",&loan);
    printf("Enyer interest rate: ");
    scanf("%f",&rate);
    printf("Enter monthly payment: ");
    scanf("%f",&monthly_payment);
    remain1 = loan - monthly_payment + loan*rate/1200;
    remain2 = remain1 - monthly_payment + remain1*rate/1200;
    remain3 = remain2 - monthly_payment + remain2*rate/1200;
    printf("Balance remaining after first payment: %.2f\n",remain1);
    printf("Balance remaining after second payment: %.2f\n",remain2);
    printf("Balance remaining after third payment: %.2f\n",remain3);
    return 0;
}