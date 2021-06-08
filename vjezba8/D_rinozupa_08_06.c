#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void kalkulatorgodina(char *datumrodenja,int velicina,int trenutnagodina, int trenutnimjesec, int trenutnidan);
int main()
{
    char *datumrodenja=" 23.1.2000 "; //STRING MORA BITI OBLIKA DD.MM.YYYY STO JE UKUPNO 10 CHARS
    int trenutnagodina = 2021;
    int trenutnimjesec = 5;
    int trenutnidan = 17;
    int velicina;
    //printf("Unesite vas datum rodenja u obliku DD.MM.YYYY\n");
    //gets(datumrodenja);
    velicina = strlen(datumrodenja);
    kalkulatorgodina(datumrodenja,velicina,trenutnagodina,trenutnidan,trenutnimjesec);

}

void kalkulatorgodina(char *datumrodenja,int velicina,int trenutnagodina, int trenutnimjesec, int trenutnidan)
{
    char dan[2];
    strncpy(dan,&datumrodenja[1],2);
    dan[2]='\0';
    puts(dan);
    char godina[3];
    strncpy(godina,&datumrodenja[6],18);
    puts(godina);
    char mjesec[3];
    strncpy(dan,&datumrodenja[4],1);
    puts(dan);
    int mjesecinteger = atoi(mjesec);
    int daninteger= atoi(dan);
    int godinainteger = atoi(godina);
    int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (dan >  trenutnimjesec)
    {
        trenutnidan = trenutnidan + month[mjesecinteger - 1];
        trenutnimjesec = trenutnimjesec - 1;
    }
    if (mjesecinteger > trenutnimjesec)
    {
        trenutnagodina = trenutnagodina - 1;
        trenutnimjesec = trenutnimjesec + 12;
    }
    int finalnidan = trenutnidan - daninteger;
    int finalnimjesec = trenutnimjesec - mjesecinteger;
    int finalnigodina = trenutnagodina - godinainteger;
    printf("Trenutno ste stari %d godina, %d mjeseca i %d dana",finalnigodina, finalnimjesec,finalnidan);

}
