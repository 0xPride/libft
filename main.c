#include <stdio.h>
#include "libft.h"
#include <string.h>

int main () {
   char dest[20] = "oldstring";
   const char src[]  = "newstring";

   ft_strncpy(dest, src, 9);
   for (int i = 0; i < 20; i++)
   {
   	printf("%i %c\n -> %c", i,dest[i], '\0');
   }
   return(0);
}
