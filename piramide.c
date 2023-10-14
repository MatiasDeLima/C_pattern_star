#include <stdio.h>

void main() {
    
    int n, i, s, j;

    printf(" Enter a number: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(s = 0; s < n - i -1; s++)
        {
            printf("  ");
        }
        for(j = 0; j < i * 2 + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// PRINT 5

/*

    *
   ***
  *****
 *******
*********

*/ 

// OUTRA FORMA DE IMPRIMIR SO QUE FIGURA DIFERENTE
void main()[
    int n, i, j;

    printf(" Enter a number size: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= 2 * n - 1; j++)
        {
            if(j >= n - (i - 1) && j <= n + (i -1))
            {
                printf("*");
            } 
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
]