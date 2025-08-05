#include <stdio.h>
#include <stdlib.h>

 int main(){
    int num1;
    int num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);  
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    int l;
    int b;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d",&l, &b);
    int area= l * b;
    printf("Area of reactnale : %d\n", area );

    float c =37;
    float f;
     f = ((9 /5) * c )+32 ;
    printf("Temperature in Fahrenheit: %f\n", f);

   
    int p =34;
    int r = 5;
    int t = 2; 
    printf("The value of simple interest is: ",( p * r * t) / 100);
    


    return 0;

}