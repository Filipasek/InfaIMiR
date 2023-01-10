#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Punkt{
    double x;
    double y;
    double z;
};
 int main ()
 {
    double value;
    struct Punkt p1;
    struct Punkt p2;
    printf("Podaj x pierwszego punktu: ");
    scanf("%lf", &value);
    p1.x = value;
    printf("\nPodaj y pierwszego punktu: ");
    scanf("%lf", &value);
    p1.y = value;
    printf("\nPodaj z pierwszego punktu: ");
    scanf("%lf", &value);
    p1.z = value;
    printf("\nPodaj x drugiego punktu: ");
    scanf("%lf", &value);
    p2.x = value;
    printf("\nPodaj y drugiego punktu: ");
    scanf("%lf", &value);
    p2.y = value;
    printf("\nPodaj z drugiego punktu: ");
    scanf("%lf", &value);
    p2.z = value;

    //dlugosc
    printf("\nOdleglosc wynosi: %lf", sqrt( (p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)+(p1.z-p2.z)*(p1.z-p2.z) ));
    return 0;
 }
