#include <stdio.h>
#include <stdlib.h>

 int main ()
 {
    FILE *in, *out;
    if((in=fopen("dane.txt", "r"))==NULL){
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
    int tab[count];
    for(int i=0; i<count; i++){
        fscanf(in, "%d", &tab[i]);
    }
    int temp;
    for(int i=0; i<count; i++){
        for(int j=1; j<count-i; j++){
            if(tab[j-1]>tab[j]){
                temp = tab[j-1];
                tab[j-1] = tab[j];
                tab[j] = temp;
            }
        }
    }
    for(int i=0; i<count; i++){
        printf("%d \n", tab[i]);
    }
    fclose(in);
    return 0;
 }
