#include<stdio.h>
#include<string.h>


void main()
{



   char str[20];
   int i,n;

   printf("enter num:");
   scanf("%d",&n);

   for(i=0;i<n;i++)
   {

      scanf("%c",&str[i]);

   }
    printf("entered value are:");
    for(i=0;i<n;i++)

        {
            printf("%c",str[i]);
        }
}


