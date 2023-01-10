#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Punkt{
    double x;
    double y;
    double z;
};
struct Kula{
    struct Punkt a;
    double r;
};
 int main ()
 {
    double value;
    struct Punkt p1;
    struct Kula kula;
    printf("Podaj x punktu: ");
    scanf("%lf", &value);
    p1.x = value;
    printf("\nPodaj y punktu: ");
    scanf("%lf", &value);
    p1.y = value;
    printf("\nPodaj z punktu: ");
    scanf("%lf", &value);
    p1.z = value;

    printf("Podaj x poczatku kuli: ");
    scanf("%lf", &value);
    kula.a.x = value;
    printf("\nPodaj y poczatku kuli: ");
    scanf("%lf", &value);
    kula.a.y = value;
    printf("\nPodaj z poczatku kuli: ");
    scanf("%lf", &value);
    kula.a.z = value;
    printf("\nPodaj promien kuli: ");
    scanf("%lf", &value);
    kula.r = value;


    //dlugosc
    double dyst = sqrt( (p1.x-kula.a.x)*(p1.x-kula.a.x)+(p1.y-kula.a.y)*(p1.y-kula.a.y)+(p1.z-kula.a.z)*(p1.z-kula.a.z) );
    if(dyst > kula.r)
        printf("\nPunkt jest poza kula");
    else if(dyst == kula.r)
        printf("\nPunkt jest na kuli");
    else if(dyst < kula.r)
        printf("\nPunkt jest w kuli");
    return 0;
 }
