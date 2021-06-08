#include <stdio.h>

void spremanje() 
{
    FILE* fp;
    int broj;
    char zivotinja[20];

    fp = fopen("dat.txt", "r");

    if (!fp) 
    {
        printf("NE mogu otvoriti file");
    }
    else
    {
        char buffer[100];
        do {
            fscanf(fp, "%d %s", &broj, zivotinja);
            for (int i = 0; i < broj; i++)
            {
                printf("%s", zivotinja);
            }
            printf("\n");
        } while (fgets(buffer, sizeof(buffer), fp));
    }
}

int main() {
    spremanje();

    return 0;
}