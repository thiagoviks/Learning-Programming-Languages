
/*Problema: Ler para uma vari�vel INTEIRA um n�mero de 1 a 12 e mostrar o nome do m�s correspondente.
 Caso o m�s n�o existir, mostrar essa informa��o.*/

#include <stdio.h>
int main()
{
   int mes;
   printf("Digite o mes de 1 a 12: ");
   scanf("%d",&mes);
   switch(mes)
   {
      case 1:printf("O mes = Janeiro");break;
      case 2:printf("O mes = Fevereiro");break; 
      case 3:printf("O mes = Marco");break; 
      case 4:printf("O mes = Abril");break; 
      case 5:printf("O mes = Maio");break; 
      case 6:printf("O mes = Junho");break; 
      case 7:printf("O mes = Julho");break; 
      case 8:printf("O mes = Agosto");break; 
      case 9:printf("O mes = Setembro");break; 
      case 10:printf("O mes = Outubro");break;
      case 11:printf("O mes = Novembro");break; 
      case 12:printf("O mes = Dezembro");break; 
      default:printf("O mes nao EXISTE");
   }          
   printf("\n");                              
return 0;
}

