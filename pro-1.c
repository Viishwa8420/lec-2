#include<stdio.h>
main()
{
  int size1, size2,i;

    printf("Enter size for array1: ");
    scanf("%d", &size1);

    int array1[size1];
    printf("Enter elements for array1 (%d elements):\n");
    for ( i = 0; i < size1; i++)
    {
        printf("array1[%d] = ", i);
        scanf("%d", &array1[i]);
    }

    printf("\nEnter size for array2: ");
    scanf("%d", &size2);

    int array2[size2];
    printf("Enter elements for array2 (%d elements):\n");
    for ( i = 0; i < size2; i++)
    {
        printf("array2[%d] = ", i);
        scanf("%d", &array2[i]);
    }

    int merged_array[size1 + size2];
    for ( i = 0; i < size1; i++)
    {
        merged_array[i] = array1[i];
    }
    for ( i = 0; i < size2; i++)
    {
        merged_array[size1 + i] = array2[i];
    }

    printf("\nMerged array is: ");
    for ( i = 0; i < size1 + size2; i++)
    {
        printf("%d", merged_array[i]);
        if (i < size1 + size2 - 1) // for not printing  comma after last element.
        {
            printf(", ");
        }
    }


}
/*

Output :

Enter size for array1: 5
Enter elements for array1 (5 elements):
array1[0] = 1
array1[1] = 2
array1[2] = 3
array1[3] = 4
array1[4] = 5

Enter size for array2: 3
Enter elements for array2 (3 elements):
array2[0] = 1
array2[1] = 2
array2[2] = 3

Merged array is: 1, 2, 3, 4, 5, 1, 2, 3

*/

