import java.util.Scanner;

class maior_menor {
   public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);

      System.out.println("Digite o valor para N1: ");
      int n1 = sc.nextInt();
      System.out.println("Digite o valor para N2: ");
      int n2 = sc.nextInt();
      System.out.println("Digite o valor para N3: ");
      int n3 = sc.nextInt();

      if ((n1 >= n2) && (n1 >= n3))
         System.out.println("o maior e o : " + n1);
      else if ((n2 >= n1) && (n2 >= n3))
         System.out.println("o maior e o : " + n2);
      else
         System.out.println("o maior e o : " + n3);

      if ((n1 <= n2) && (n1 <= n3))
         System.out.println("o menor e o : " + n1);
      else if ((n2 <= n1) && (n2 <= n3))
         System.out.println("\no menor e o : " + n2);
      else
         System.out.println("\no menor e o : " + n3);

      sc.close();

   }
}
