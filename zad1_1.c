#include <stdio.h>
#include <stdbool.h>    

int main() {
    int rok_urodzenia;
    float wzrost;
    char znak = 'A';
    bool prawko = true;

    printf("Podaj rok:");
    scanf("%d", &rok_urodzenia);
    printf("Podaj wzrost:");
    scanf("%f", &wzrost);

    printf("Jestem urodzony w %d roku, mam %f wzrostu, mam prawo jazdy", rok_urodzenia, wzrost);


    return 0;
}
