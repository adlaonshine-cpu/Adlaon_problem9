#include <stdio.h>
int main(){
    int i;
    int discountedCustomers = 0;
    int customers;
    float purchase;
    float discount;
    float finalAmount;
      float totalSales = 0;
     
        printf("Enter number of customers: ");
        scanf("%d", &customers);
      for (i = 1; i <= customers; i++) {
          printf("Enter Purchase Amount:");
          scanf("%f", &purchase);
  
          if (purchase >= 1000) {
              discount = purchase * 0.10;
              discountedCustomers++;
          } else {
              discount = 0;
          }
  
          finalAmount = purchase - discount;
          printf("Discount: %.2f\n", discount);
          printf("Final Amount: %.2f\n", finalAmount);
  
          totalSales += finalAmount;
      }
  
        printf("Total sales: %.2f\n", totalSales);
        printf("Customers with discounts: %d\n", discountedCustomers);
  
  
  
  
  
  
  
  
    return 0;
  }