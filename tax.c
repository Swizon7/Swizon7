#include <stdio.h>

int main(){
int income,tax =0;
    printf("Enter your income: ");
    scanf("%d", &income);
    if(income<25000){
        tax=0;
    }
    else if(income>25000 && income<=50000){
        tax= 0.05 * (income - 25000);
    }
    else if (income >500000 && income<=1000000){
        tax= 0.05 * (500000 - 250000) + 0.2 * (income -500000);
    }else {
        tax= 0.05 * (500000 - 250000) + 0.2 * (100000 -500000) + 0.3 * (income- 100000);
    }
    printf("Tax : %d",tax);
    return 0;
}