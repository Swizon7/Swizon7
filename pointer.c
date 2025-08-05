#include <Stdio.h>
int ptr(int *a){
    printf(" value of %d\n",a);
    printf("value at %d\n",*a);
    return 5;
}

int main(){
    int i=1;
    int *b=&i;
    printf("%u\n",&i);
   ptr(b);
    
    return 0;
}