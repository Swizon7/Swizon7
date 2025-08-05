#include <stdio.h>
int main(){
    int num1,num2,choice;
    printf("Enter Your Choice:1 for Addition,2 for Subtraction, 3 for Multiplication,4 for Divison:");
    scanf("%d %d %d",&choice,&num1,&num2);

    
    switch(choice){
        case 1:
        printf("%d + %d = %d",num1,num2,num1+num2);
        break;
        case 2:
        printf("%d - %d = %d",num1,num2,num1 -num2);
        break;
        case 3:
        printf("%d * %d = %d",num1,num2,num1*num2);
        break;
        case 4:
        if(num2 != 0){
            printf("%.2f / %.2f = %.2f",(float)num1,(float)num2, (float)num1/num2);
        }else{
            printf("Error: cannnot divided by 0");
        }
        break;
        deafult:
        printf("Invalid choice");
    }
    return 0;
}