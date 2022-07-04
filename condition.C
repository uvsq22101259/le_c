
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int age;
    scanf("%d",&age);
    // int enfant = 2;


    // if(age >= 18 || enfant == 2 )
    // {
    //     printf("il a %d ans donc il est majeur et peut rentrer!!\n",age);
    // }

    // else if (age > 16)
    // {
    //     printf("bon vous avez %d ans, vous pouvez quand meme entrer. \n ",age);
    // }

    // else
    // {
    //     printf("desole vous etes mineur. Veuiller circuler!\n");
    // }
    switch (age)
    {
    case 3:
        printf("j'ai %d ans",age);
        break;
    
    default:
        printf("va te faire");
        break;
    }
    return 0;
}