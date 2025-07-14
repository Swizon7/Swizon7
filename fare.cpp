#include <stdio.h>


int main() {


    // Define constants for base fare, per km charge, and night charge
    float base_fare = 50.0; // Example base fare
    float per_km_charge = 10.0; // Example per km charge
    float night_charge_amount = 50.0; // Example night charge amount
    float student_discount=30.0; //Example student_discount amount

    printf("--------------------Taxi Fare----------------\n");


            char a[100];
             printf(" Enter name :");
            scanf("%s",&a[100]);


    // Declare variables for input
    float distance_km;
    char night_charge_option;
    char student_option;


    // Get input from the user
    printf(" Enter distance in km: ");
    scanf("%f", &distance_km);

    printf(" Is it night charge applicable? (Y/N): ");
    scanf(" %c", &night_charge_option); // Note the space before %c to consume newline

    printf(" Is student or elderly person? (Y/N):");
    scanf(" %c",&student_option);


    // Calculate total fare
    float total_fare = base_fare + (distance_km * per_km_charge);
    float discount=student_discount;


    // Add night charge if applicable
    if (night_charge_option == 'Y'  && student_option == 'Y') {

        printf(" Output: Fare: %.0f \t Discount:%.0f \t Night Charge: %.0f\n", total_fare,discount, night_charge_amount);
     }
      else if(night_charge_option == 'N' && student_option =='Y') {
        printf(" Output: Fare: %.0f \t Discount:%.0f \t Night Charge:0\n",  total_fare,discount);
    }
    else if(night_charge_option == 'Y'  && student_option == 'N'){
        printf(" Output:Fare:%.0f \t Discount:0 \t Night Charge:%.0f\n",total_fare,night_charge_amount);
    }
    else{
  printf(" Output:Fare:%.0f \t Discount:0 \t Night Charge:0 \n",total_fare);
    }
    
    if(night_charge_option == 'Y' && student_option == 'Y'){

      printf("   Grand Total: %.0f",total_fare+ night_charge_amount-discount);
     }
     else if(night_charge_option == 'N' && student_option =='Y'){
        printf(" Grand Total: %.0f",total_fare-discount);
    }
    else if(night_charge_option == 'Y'  && student_option == 'N'){
        printf(" Grand Total: Fare: %.0f \n",total_fare+night_charge_amount);
    }
    else{
          printf(" Grand Total:Fare:%.0f ",total_fare);
    }


    return 0;
}