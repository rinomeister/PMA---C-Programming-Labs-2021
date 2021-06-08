## **Programske metode i apstrakcije**
**Vježba 0**

1. Kreirati projekt, te napisati program koji ispisuje ”Napokon PMA!”.

        #include <stdio.h>
        int main(void){
        printf("Napokon PMA!\n");
        return 0;
        }

2. Napisati program u kojem se unose dva cijela broja, zbrajaju i ispisuje rezultat.

        #include <stdio.h>
        int main(void){
        int a, b, c;
        printf("Unesi dva cijela broja\n");
        scanf("%d %d", &a, &b);
        c = a + b;
        printf("zbroj je %d\n", c);
        return 0;
        }

3. Napisati program koji zamjenjuje vrijednosti dviju varijabli unesenih putem tipkovnice. Zamjenjene vrijednosti ispisati.

4. Napisati program koji ispisuje manji od dva unesena broja (naredba if). Ako su brojevi jednaki neka ispisuje drugi broj.

        #include <stdio.h>
        int main(void){
        int a, b, c;
        printf("Unesi dva cijela broja\n");
        scanf("%d %d", &a, &b);
        if (a < b)
        printf("%d\n", a);
        else
        printf("%d\n", b);
        return 0;
        }

5. Napisati program koji sortira tri unesena broja.
