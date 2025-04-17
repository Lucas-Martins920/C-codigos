#include <stdio.h>

int main (void)
{
    int n, i, primo = 1;
    printf ("DIgite um número: ");
    scanf("%d", &n);

    for (i= 2 ; i < n; i++)
    {
        if (n % i == 0)
            {
             
             primo = 0;
             break;
                /* code */
        }
    }

    if (primo && n > 1)
        printf("É primo !\n");
    
    else
    printf("Não é primo.\n");

    return 0;
    
      /* code */
    
    
    
            
        /* code */
    
    
}