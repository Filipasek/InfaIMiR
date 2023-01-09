#include <stdio.h>
 #include <stdlib.h>

 int main ()
 {
    FILE *in, *out;
    if((in=fopen("dane.txt", "r"))==NULL || (out=fopen("wyniki.txt", "w"))==NULL){
        printf("Nie moglem otworzyc pliku\n");
        exit(1);
    }
    double a,b,c;
    fscanf(in, "%lf %lf %lf", &a, &b, &c);
    double x1, x2;
    double d = b * b - 4 * a * c;
    if (d < 0)
    {
        fprintf(out, "Delta ujemna");
        fclose(in);
        fclose(out);
        exit(1);
    }
    else if (d == 0)
    {
        x1 = x2 = -b / (2 * a);
    }
    else
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
    }
    fprintf(out, "%lf \n%lf", x1, x2);

    fclose(in);
    fclose(out);
    return 0;
 }
