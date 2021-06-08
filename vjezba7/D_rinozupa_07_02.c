#include <stdio.h>
#include <stdlib.h>
 
int *unostrecegniza(int velicinatreceg);
int *spajanjenizova(int *prviniz, int *druginiz, int *treciniz, int velicinaprvog, int velicinadrugog, int velicinatreceg);
 
int main()
{
    int velicinaprvog,velicinadrugog,velicinatreceg,i,*pozivtreceg,*pozivnovog, velicinanovog;
    printf("Unesite velicinu prvog niza\n");
    scanf("%d", &velicinaprvog);
    printf("Unesite velicinu drugog niza\n");
    scanf("%d", &velicinadrugog);
    printf("Unesite velicinu treceg niza\n");
    scanf("%d", &velicinatreceg);
 
    int prviniz[velicinaprvog];
    int druginiz[velicinadrugog];
    for(i = 0 ; i < velicinaprvog ; i++)
    {
        printf("Unesite elemente prvog niza!\n");
        scanf("%d", &prviniz[i]);
    }
    for(i = 0 ; i < velicinadrugog ; i++)
    {
        printf("Unesite elemente drugog niza!\n");
        scanf("%d", &druginiz[i]);
    }
    pozivtreceg = unostrecegniza(velicinatreceg);
    pozivnovog = spajanjenizova(prviniz, druginiz, pozivtreceg, velicinaprvog, velicinadrugog, velicinatreceg);
 
    return 0;
}
 
int* unostrecegniza(int velicinatreceg)
{
    int *treciniz;
    treciniz = (int *)malloc(velicinatreceg * sizeof(int));
 
    for(int i = 0 ; i < velicinatreceg ; i++)
    {
        printf("Unesite elemente treceg niza\n");
        scanf("%d", &treciniz[i]);
    }
 
    return treciniz;
}
 
int *spajanjenizova(int *prviniz, int *druginiz, int *treciniz, int velicinaprvog,int velicinadrugog, int velicinatreceg)
{
    int velicinanovog = velicinaprvog + velicinadrugog + velicinatreceg;
    int *noviniz = (int *)malloc(velicinanovog * sizeof(int));
    int index = 0;
 
    printf("%d\n", velicinanovog);
 
    for(int i = 0 ; i < velicinaprvog; i++)
    {
        noviniz[index++] = prviniz[i];
    }
 
    for(int i = 0; i<velicinatreceg; i++)
    {
        noviniz[index++] = treciniz[i];
    }
 
    for (int i = 0; i< velicinadrugog; i++)
    {
        noviniz[index++] = druginiz[i];
    }
 
    for (int i = 0; i<velicinanovog; i++)
    {
        printf("%d ", noviniz[i]);
    }
 
    return noviniz;
}