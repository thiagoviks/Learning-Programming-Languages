
//Problema:Ler a nota de 10 alunos, calcular a media e mostrar essa m�dia

#include <stdio.h>
int main()
{
float nota,calc_media, soma_notas=0;
int i;
for(i=1;i<=10;i++)
{
   printf("Digite a %dº das 10 notas sendo cada nota entre 0 e 10: ",i);
   scanf("%f",&nota);
   if ((nota >= 0) && (nota <=10))
      soma_notas = soma_notas + nota;
   else
   {
      printf("\nNota invalida, digite apenas notas de 0 a 10\n");    
       i--; 
   }   
}

calc_media = soma_notas / 10;   
printf("A media geral dos 10 alunos: %f\n",calc_media); 
return 0;
}
