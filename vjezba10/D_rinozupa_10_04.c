#include <stdio.h>

int spremanje() 
{
    FILE* fp;
    int broj1, broj2, broj3, broj4, red_broj = 1, max_red = 1;
    float temp = 0, temp2 = 0, prosjek = 0;

    fp = fopen("dat2.txt", "r");

    if (!fp) 
    {
        printf("NE mogu otvoriti file");
    }
    else
    {
        char buffer[100];
        float max = 0;
        do {
            fscanf(fp, "%d %d %d %d", &broj1, &broj2, &broj3, &broj4);
            prosjek = broj1 + broj2 + broj3 + broj4;
            prosjek = prosjek / 4;
            temp = prosjek;
            red_broj++;
            printf("%f %f\n", prosjek, max);

            if (prosjek > max) {
                max = prosjek;
                max_red = red_broj;
            }

        } while (fgets(buffer, sizeof(buffer), fp));
    }

    return max_red-1;
}

int main() {
    int rezultat;

    rezultat = spremanje();

    printf("%d", rezultat);

    return 0;
}