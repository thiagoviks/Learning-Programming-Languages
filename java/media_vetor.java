import java.util.Scanner;

class media_media_vetor_correto {
   public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      float notas[] = new float[5];
      float calc_media, soma_notas;
      int contador;
      contador = 0;
      soma_notas = 0;
      for (int i = 0; i <= 4; i++) {
         System.out.println("digite a " + i + ". nota: ");
         notas[i] = sc.nextFloat();
         soma_notas = soma_notas + notas[i];
      }
      calc_media = soma_notas / 5;
      for (int i = 0; i <= 4; i++)
         if (notas[i] >= calc_media)
            contador++;

      System.out.println(" A media geral da turma foi de .: " + calc_media + "\n" + contador
            + " alunos ficaram com a nota acima da media");

      sc.close();
   }
}
