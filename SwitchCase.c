#include <stdio.h>
int main()
{
    
    // switch case - conditional statements
    int order;
    printf("Press 1 to OrderPizza\nPress 2 to Order Burger\nPress 3 to order Cold Drink : \n");
    scanf("%d",&order);
    
    switch (order)
    {
       case 1:printf("Pizza Ordered Successfully");
              break;
       case 2:printf("Burger Ordered Successfully");
              break;
       case 3:printf("Cold Drink Ordered Successfully");
              break;
       default:printf("Invalid Order");
              
    }
    return 0;
    
}
