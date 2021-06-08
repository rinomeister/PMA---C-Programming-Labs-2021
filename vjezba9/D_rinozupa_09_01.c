#include <stdio.h>
#include <stdlib.h>
#define NAJVECI(a, b, c) ((a<b)? (b)<(c)?(c):(b) : (a) < (c)? (c):(a))
#define NAJMANJI(a, b, c) ((a>b)? (b)>(c)?(c):(b) : (a) > (c)? (c):(a))
void najvecinajmanji(int a,int b,int c,int *min,int *max);
int main()
{
    int a=10,b=5,c=2;
    int *min,max;
    najvecinajmanji(a,b,c,&min,&max);
    printf("%d je najveci, %d je najmanji", max,min);
    return 0;
        
}
void najvecinajmanji(int a,int b,int c,int *min,int *max)
{
    *max = NAJVECI(a, b, c);
    *min = NAJMANJI(a, b, c);

}