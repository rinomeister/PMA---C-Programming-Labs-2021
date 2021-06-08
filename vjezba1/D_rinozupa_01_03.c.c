#include<stdio.h>
int main()
{
   int broj,prvazna,drugazna,trecazna,suma,pomocna;
   printf("Unesite broj:\n");
   scanf("%d",&broj);
   

   if (broj < 1000 &&  broj > 99)
     
   {
      trecazna=broj % 10;
      prvazna=broj/100;
      pomocna=broj/10;
      drugazna=pomocna%10;
      suma=(prvazna*prvazna*prvazna+drugazna*drugazna*drugazna+trecazna*trecazna*trecazna);
      if (broj == suma)
      {
         printf("ovo je armstrong broj!\n");
      }
      else
         printf("ovo nije armstrong broj!\n");

   }
   else
      printf("Niej troznamenkasti broj\n");
   return 0;
}