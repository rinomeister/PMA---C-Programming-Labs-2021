#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Razlomak
{
    int djeljenik, djelitelj
};

struct Razlomak IzracunatRazlomak(struct Razlomak raz, struct Razlomak raz2, char operacija)
{
    struct Razlomak rezultat;
	if (operacija == '+')
	{
		rezultat.djeljenik = (raz.djeljenik + raz2.djeljenik);
		rezultat.djelitelj = (raz.djelitelj * raz2.djelitelj);
		return rezultat;
	}
	else if (operacija == '-')
	{
		rezultat.djeljenik = (raz.djeljenik - raz2.djeljenik);
		rezultat.djelitelj = (raz.djelitelj * raz2.djelitelj);
		return rezultat;
	}
	else if (operacija == '*')
	{
		rezultat.djeljenik = (raz.djeljenik * raz2.djeljenik);
		rezultat.djelitelj = (raz.djelitelj * raz2.djelitelj);
		return rezultat;
	}
	else if (operacija == '/')
	{
		rezultat.djelitelj = (raz.djelitelj + raz2.djelitelj);
		rezultat.djeljenik = (raz.djeljenik * raz2.djeljenik);
		return rezultat;
	}
}

void ispis(struct Razlomak rezultat)
{
	printf("%d/%d", rezultat.djeljenik,rezultat.djelitelj);
}

int main()
{
    struct Razlomak raz = {6,2};
    struct Razlomak raz2 = {4,2};
    char operacija = '+';
    ispis(IzracunatRazlomak(raz,raz2,operacija));
    //return 0;
}