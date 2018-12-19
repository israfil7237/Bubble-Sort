#include <stdio.h>
int main()
{
    int a[10],n,i,j;     //declare an array and some local variable

    printf("Enter 10 integer number for sorting: \n");

    for(i=0; i<10; i++)       //this loop for getting 10 integers data from user
    {
        scanf("%d",&a[i]);
    }
    printf("Select Option (1) to see  Ascending  Order  Sorted: \n");
    printf("\nSelect Option (2) to see Descending Order Sorted: \n");
    scanf("%d", &n);  //user choice option for ascending and descending order sort
    if(n==1)         //condition for ascending order
    {
        printf("\n\tUnsorted Integer that You have Input: ");
        for (i = 0; i <10; i++)
        {
            printf(" %d ", a[i]);
        }
        printf("\n");
        for (i = 0; i <10; i++)
        {
            for (j = 0; j <10; j++)
            {
                if (a[j] > a[i])
                {
                    int tmp = a[i];   //swapping
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
        }
        printf("\n\tBubble Sort in Ascending Order : ");
        for (i = 0; i <10; i++)
        {
            printf(" %d ", a[i]);
        }
        printf("\n\n");
    }
    else if(n==2)   //condition for descending order
    {
        printf("\n\tUnsorted Integer that You have Input: ");
        for (i = 0; i <10; i++)
        {
            printf(" %d ", a[i]);
        }
        printf("\n");

        for ( i = 0; i <10; i++)
        {
            for ( j = 0; j <10; j++)
            {
                if (a[j] < a[i])
                {
                    int tmp = a[i];   //swapping
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
        }
        printf("\n\tBubble Sort in Descending Order : ");
        for (i = 0; i <10; i++)
        {
            printf(" %d ", a[i]);
        }
        printf("\n\n");
    }

    return 0;
}

