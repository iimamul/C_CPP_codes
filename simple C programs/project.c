#include<stdio.h>

float product_price(float price,float quantity) //Cost calculating
{
    float cost;
    cost=price*quantity;
    return (cost);
}

int main()
{
    //Introductory line of the program
    printf("\t\tA GROCERY SHOP MANAGEMENT SYSTEM\n");
    printf("\t\t********************************\n");

    //creating a structure
    struct product_info
    {
        char product_name[15];
        float total_quantity;
        float price_per_unit;
    };
    int i,count=0;
    struct product_info product[20];

    //Grocer will input his product information here
    for(i=0; ;i++)  //Taking input
    {
        printf("\nEnter product name: ");
        scanf("%s",product[i].product_name);
        printf("\nEnter product total quantity(kg): ");
        scanf("%f",&product[i].total_quantity);

        if(product[i].total_quantity==0)
            break;
        printf("\nEnter product price per unit(kg/liter): ");
        scanf("%f",&product[i].price_per_unit);
        count=count+1;
    }

    //Product list will show here
    printf("\n\nHERE IS THE PRODUCT LIST OF THIS SHOP\n");
    printf("_____________________________________\n");

    for(i=0;i<=count-1;i++) //Showing product list
    {
        printf("Product :%s\nprice per unit : %f\n",product[i].product_name,product[i].price_per_unit);
    }

    char choice[15];
    char type;
    int x;
    float quantity,cost[20],p;
    float total_cost=0;

    //Buyer will input here that what kind of product he/she want to buy
    for(i=0; ;i++)
    {
        fflush(stdin);
        printf("Enter product type (s for solid, l for liquid and f for finish buying): ");
        scanf("%s",&type);

        if(type=='b')
            break;


        switch(type) //Detecting product type
        {
            case 's' :
                printf("\nEnter product name that you want to buy: ");
                scanf("%s",choice);
                for(i=0;i<=count-1;i++)
                {
                    x=strcmp(choice,product[i].product_name); //Compare product name with grocer's input
                    if(x==0)
                    {
                        printf("Your choice is %s\n",product[i].product_name);
                        printf("Enter the product quantity(Kg): ");
                        scanf("%f",&quantity);
                        p=product_price(product[i].price_per_unit,quantity);    //call product_price function
                        printf("You product cost is %f\n",p);
                        product[i].total_quantity=product[i].total_quantity-quantity;
                        if(product[i].total_quantity<=0)
                            printf("This product are no more available");

                        // total product buying cost counting
                        total_cost=total_cost+p;
                        printf("\nTotal product selling price is %f\n",total_cost);
                    }
                }
                break;
            case 'l':
                printf("\nEnter product name that you want to buy: ");
                scanf("%s",choice);
                for(i=0;i<=count-1;i++)    //input product name and quantity
                {
                    x=strcmp(choice,product[i].product_name);
                    if(x==0)
                    {
                        printf("Your choice is %s\n",product[i].product_name);
                        printf("Enter the liquid quantity(liter): ");
                        scanf("%f",&quantity);
                        p=product_price(product[i].price_per_unit,quantity);
                        printf("You product cost is %f\n",p);
                        product[i].total_quantity=product[i].total_quantity-quantity;
                        if(product[i].total_quantity<=0)
                            printf("This product are no more available\n");
                        // total product buying cost counting
                        total_cost=total_cost+p;
                        printf("\nTotal product selling price is %f\n",total_cost);
                    }
                }
                break;

            default:
                printf("\nNo Choice");
        }
    }

    for(i=0;i<=count-1;i++)         //Display the remaining products
    {
        printf("\nRemaining %s is %f (kg/liter)",product[i].product_name,product[i].total_quantity);
    }
    return 0;
}

