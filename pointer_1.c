#include <Stdio.h>
    void change(int *n){
        *n=*n * 10;
    }
int main(){
    int a=5;
    printf("%d\n",a);
    change(&a);
    printf("%d\n",a);
    return 0;
}