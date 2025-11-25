#include "cercle.h"
#include <stdio.h>

int main(void) {
    double r, p, s;

    printf("Entrer le rayon du cercle : ");
    scanf("%lf", &r);

    p = peri(r);
    s = surf(r);

    printf("\nLe périmètre du cercle de rayon %lf est : %lf\n", r, p);
    printf("La surface du cercle de rayon %lf est : %lf\n", r, s);

    return 0;
}
