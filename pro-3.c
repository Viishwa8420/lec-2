#include <stdio.h>
 main()
{
    int size,i;
    
    printf("Enter array size: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter array elements:\n");
    for (i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }
    printf("The squares of the elements are: ");
    for ( i = 0; i < size; i++)
    {
        printf("%d", array[i] * array[i]);
        if (i < size - 1)
        {
            printf(", ");
        }
    }
}

/*

Output :

Enter array size: 5
Enter array elements:
a[0] = 1
a[1] = 2
a[2] = 3
a[3] = 4
a[4] = 5
The squares of the elements are: 1, 4, 9, 16, 25

*/
