//Write a C program to create a new array after replacing  all the values 5 with 0 shifting all zeros to right direction.

#include <stdio.h>

void main()
{
    int a[5];
    int i, j, temp;
    printf("Enter 5 numbers ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (a[i] == 5)
        {
            a[i] = 0;
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}