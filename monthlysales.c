/* SHOPS STORE N  DIFFERENT TYPES OF ITEMS GIVEN THE NUMBER OF 
ITEMS OF EACH TYPE SOLD DURING A GIVEN MONTH AND THE CORRESSPONDING UNIT PRICES,
COMPUTE THE TOTAL MONTHLY SALES....*/

#include <stdio.h>
int main() 
{
    int n, i;
    float totalSales = 0;
    char itemname[20];

    // Input the number of different types of items
    printf("Enter the number of different types of items: ");
    scanf("%d", &n);
    int quantities[n];
    float unitPrices[n];
// Input quantities and unit prices
    printf("Enter the quantities and unit prices of each item:\n");
    for (i = 0; i < n; i++) 
    {
        printf("enter the item name:\n");
        scanf("%s",itemname);
        printf("Item  %d____:%s Quantity sold: ", i + 1,itemname);
        scanf("%d", &quantities[i]);
        printf("Item %d _____ Unit price: ", i + 1,itemname);
        scanf("%f", &unitPrices[i]);
    }
                                                            // Calculate total sales
    for (i = 0; i < n; i++)
    {
        totalSales += quantities[i] * unitPrices[i];
    }
    printf("\nThe total monthly sales amount is: %.2f\n", totalSales);
    return 0;
}
