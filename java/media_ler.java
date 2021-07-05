import java.util.Scanner;

class media_ler {
   public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      float nota1, nota2, calc_media;
      System.out.println("Digite a primeira nota");
      nota1 = sc.nextFloat();
      System.out.println("Digite a segunda nota");
      nota2 = sc.nextFloat();
      calc_media = (nota1 + nota2) / 2;
      System.out.println("A media = " + calc_media);
      sc.close();
   }
}
