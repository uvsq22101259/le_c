#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num_menu;

    printf("=== Menu ===\n1. Royal Cheese\n2. Mc Deluxe\n3. Mc Bacon\n4. Big Mac\nVotre choix ?\n");
    
    do
    {
        scanf("%d",&num_menu);
        switch (num_menu)
        {
        case 1:
            printf("tu as choisi le Royal Cheese\n");
            break;
        case 2:
            printf("tu as choisi le Mc Deluxe\n");
            break;
        case 3:
            printf("tu as choisi le Mc Bacon\n");
            break;
        case 4:
            printf("tu as choisi le Big Mac\n");
            break;
        default:
            printf("nous n'avons pas compris votre choix. voici le menu\n === Menu ===\n1. Royal Cheese\n2. Mc Deluxe\n3. Mc Bacon\n4. Big Mac\nVotre choix\n ?");
            break;
        }
       
    } while (num_menu > 4 );
    return 0;
}