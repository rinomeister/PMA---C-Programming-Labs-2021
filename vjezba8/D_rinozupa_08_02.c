#include <stdio.h>
#include <string.h>
int samoglasnici(char rijec);
int main()
{
    char rijec[100];
    char rijecnova[100];
    int duljina,i;
    int j = 0;
    printf("Unesite neki string\n");
    gets(rijec);
    duljina = strlen(rijec);
    for (i = 0 ; i<duljina ; i++)
    {
        if (samoglasnici(rijec[i])== 0)
        {
            rijecnova[j] = rijec[i];
            j++;
        }
    }

    rijecnova[j] = '\0';
    printf("Novi string nakon brisanja samoglasnika je %s\n",rijecnova);
}

int samoglasnici(char rijec)
{
    switch(rijec)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'I':
        case 'i':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            return 1;
        default:
            return 0;
    }
}
