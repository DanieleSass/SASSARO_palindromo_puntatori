#include <stdio.h>

int main(void) {
    char stringa[]="i topi non avevano nipoti";
    char *p1= stringa;
    char *p2= stringa;

    //con il secondo puntatore arriva alla fine della stringa
    while (*p2 != '\0')
    p2++;

    p2--;
    //printf("%s\n", p1);
    //printf("%s\n", p2);

    while (p1<p2)
    {
        if (*p1==' ')
            p1++;
        if (*p2==' ')
            p2--;
        if (*p1!=*p2)
        {
            printf("NON palindrome");
            return 0;
        }
        p1++;
        p2--;

    }
        printf("palindrome");
    return 0;
}