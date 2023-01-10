#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum oceny{ndst = 1, dop=2, dst=3, db=4, bdb=5};

 int main ()
 {
    enum oceny ocena;
    int suma = 0;
    int ilosc = 8;
    int tab[] = {ndst, dop, dop, ndst, bdb, db, ndst, dop};
    for(int i = 0; i<ilosc; i++){
        ocena = tab[i];
        suma = suma+ocena;
    }
    double srednia = suma/ilosc;
    printf("Srednia ocen to: %lf", srednia);
    return 0;
 }
