
/*Problema: Fa�a um algoritmo que gere a seguinte s�rie: 10, 20, 30, 40, ..... 980, 990, 1000.*/

#include <stdio.h>
int main()
{
   int i;
   for(i=10;i<=1000;i=i+10)
   {                      
      printf("%d\n",i);
      if ((i == 100) || (i == 200) || (i ==300))
         printf("\n");  
   } 
return 0;
}

