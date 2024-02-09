#include <stdio.h>
main()
{
    int start_year, end_year,year,i;

    printf("Enter the first number: ");
    scanf("%d", &start_year);

    printf("Enter the second number: ");
    scanf("%d", &end_year);
    
    int leap_years[100]; 
    int count = 0;

    for ( year = start_year; year <= end_year; year++)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
          leap_years[count] = year;
            count++;
        }
    }

  
    printf("The array is: ");
    for (i = 0; i < count; i++)
    {
        printf("%d", leap_years[i]);
        if (i < count - 1) 
        {
            printf(", ");
        }
    }
}

/*

Output :

Enter the first number: 2000
Enter the second number: 2040
The array is: 2000, 2004, 2008, 2012, 2016, 2020, 2024, 2028, 2032, 2036, 2040

*/

