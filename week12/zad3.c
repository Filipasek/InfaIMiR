#include <stdio.h>
#include <stdlib.h>

 int main ()
 {
    FILE *in, *out;
    if((in=fopen("dane.txt", "r"))==NULL || (out=fopen("wyniki.txt", "w"))==NULL){
        printf("Nie moglem otworzyc pliku\n");
        exit(1);
    }
    char c;
    int value;
    int count = 0;
    for (c = getc(in); c != EOF; c = getc(in))
        if (c == '\n')
            count = count + 1;
    fclose(in);
    if((in=fopen("dane.txt", "r"))==NULL){
        printf("Nie moglem otworzyc pliku\n");
        exit(1);
    }
    char letter;
    char text[100];
    while(fgets(text, 100, in)){
        text[0] = toupper(text[0]);
        fprintf(out, "%s \n", text);
    }
    fclose(in);
    fclose(out);
    return 0;
 }
