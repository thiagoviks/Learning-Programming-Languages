
import java.util.Scanner;

class avaliacao_if2 {
   public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      float prova1, prova2, prova3, media;
      System.out.println("Digite a nota da prova 1: ");
      prova1 = sc.nextFloat();
      System.out.println("Digite a nota da prova 2: ");
      prova2 = sc.nextFloat();
      System.out.println("Digite a nota da prova 3: ");
      prova3 = sc.nextFloat();

      prova1 = prova1 * 2 / 10;
      prova2 = prova2 * 3 / 10;
      prova3 = prova3 * 5 / 10;
      media = (prova1 + prova2 + prova3);

      if (media >= 6)
         System.out.println("Aprovado com media " + media);
      else if (media >= 4)
         System.out.println("Recuperacao com media " + media);
      else
         System.out.println("Reprovado com media " + media);

      sc.close();
   }
}
