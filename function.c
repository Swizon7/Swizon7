#include <stdio.h>

    float f(float mass, float gra) {
        return mass*gra;
    }

int main(){
   
    float m;
    printf("enter mass:");
    scanf("%f",&m);
      float g=9.8;
    float force= f(m,g);
    printf("%f ",force);
    return 0;
}