#include "libmy.h"

char *_strpbrk(char *s, char *accept) {
   int i;
   int j;

   for (i = 0; s[i] != '\0'; i++) {
       for (j = 0; accept[j] != '\0'; j++) {
           if (s[i] == accept[j])
               return (s);
               s++;
       }
//        /
   }


int main(void)
{
       char *s = "hello, world";
       char *f = "world";
       char *t;

       t = _strpbrk(s, f);
       printf("%s\n", t);
}