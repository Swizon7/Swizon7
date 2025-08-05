#include <Stdio.h>

 int main (){
    int a[] ={4,5,8,9};
    int *ptr = &a[0];
    for(int i =0; i<4;i++){
        // printf("%d\n",*ptr);
        printf("%d\n",a[i]);
        // ptr++;
    }
} 
