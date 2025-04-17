#include <stdio.h>

int main (void)
{
    int n, f = 1;
    printf ("digite um número: ");
    scanf("%d" , &n);

    while (n > 0)
        f *= n --;
    
    printf("Fatorial = %d\n" , f);
    return 0;    

    {
        /* code */
    }
    
}