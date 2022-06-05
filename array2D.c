/*

// COMPILE TIME 2D ARRAY
#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[4][3]={{0,1,2},{1,2,3},{2,3,4},{3,4,5}};
        for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enterd array %d%d=", i, j);
            printf("%d", arr[i][j]);
        printf("\n");

        }
        printf("\n");
    }
}
*/


// RUN TIME 2D ARRAY

#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[4][3];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("  enter array value %d%d =", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }
}
