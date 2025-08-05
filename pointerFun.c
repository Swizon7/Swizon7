#include <stdio.h>

    int *sum (int a , int b){
        int s=a+b;
        int *ptr =&s;
        printf("Sum : %d\n",s);
        return ptr;
    }
    float *average(int a, int b){
        float avg=(a+b)/2.0;
        float *ptr=&avg;
        printf("Average: %f\n",avg);
        return ptr;
    }
int main(){
    int n1 = 6;
    int n2 = 4;
    // printf("Enter the Two number:");
    // scanf("%d %d",&n1,&n1);
    
    int *ptr_1 = sum(n1,n2);
     float *ptr_2 = average(n1,n2);
    // float *ptr_2;
    
    // ptr_1 = sum(n1,n2);
    // ptr_2 = average(n1,n2);

    printf("sum:%u\n",ptr_1);
    printf("average:%u",ptr_2);
    return 0;
}
