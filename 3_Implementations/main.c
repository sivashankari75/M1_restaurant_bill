#include"restaurant_bill.h"
int main()
{
    char response = 'y';
     printBreakfast();
     while(response == 'y'|| response == 'Y')
    {
            printf("Enter the number of adults :");
            scanf("%d",&adultNumber);
            printf("Enter the number of children:");
            scanf("%d",&childNumber);
            orderBreakfast();
            printf("\n Do you want to proceed further(y/n):");
            scanf("\n%c",&response);
    }
 printf("\n      ******************* THANK YOU FOR COMING  ************************\n");
 printf("\20*********************   PLEASE VISIT US AGAIN  *************************\20 \n");
   system("pause");
   return 0;
}
