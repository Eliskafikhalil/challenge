#include <stdio.h>
#include <stdlib.h>


int main()
{ float temp_f;
    float temp_C;
    printf("enter température en Fahrenhei");

    scanf("%f ,&temp_f");

    temp_C = (temp_f-32)/1.8;

    printf("Affichage Température /n");
    return 0;
}
