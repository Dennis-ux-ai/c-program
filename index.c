
#include <stdio.h>
void main()
{
    int number[5];
    printf("Enter 5 numbers: ");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &number[i]);
    

    }
    int index;
    printf("Enter i index from 1 to 4");
    scanf("%d", &index);
   if (index>=1 && index<=4)
   {
       printf("The number at index %d is %d", index, number[index-1]);
   }
   else
   {
       printf("Invalid index");
   }    


}
