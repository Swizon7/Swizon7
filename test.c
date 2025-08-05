#include <stdio.h>
int main(){
    FILE *fp= fopen("test.txt","w");
    if(fp==NULL){
        printf("Invalid couldn't open file");
        return 1;
    }
    fprintf(fp,"Welcome to BCA program");
    fclose(fp);
    return 0;
}