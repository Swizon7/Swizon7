#include <stdio.h>
int main(){

    int n;
    printf("Enter Number:");
    scanf("%d",&n);

    int prime=0;

    if(n==0 || n==1){
    prime=1;
    }else{
    for(int i=2 ;i<n;i++){
        if(n%i==0){
            prime=1;
            break;
        }
    }
}

    if(prime==1){
        printf("is not prime\n");
    }else{
        printf("is prime");
    }
}