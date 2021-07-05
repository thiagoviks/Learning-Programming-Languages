import java.util.Scanner;

class prestacao {
   public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      float prestacao, valor_prest, taxa;
      int dias_atraso;

      System.out.println("Digite o valor da prestacao");
      valor_prest = sc.nextFloat();
      System.out.println("Digite a taxa de juros");
      taxa = sc.nextFloat();
      System.out.println("digite o numero de dias em atraso");
      dias_atraso = sc.nextInt();

      prestacao = valor_prest + (valor_prest * (taxa / 100) * dias_atraso);

      System.out.println("O valor corrigido da prestacao =  " + prestacao);
      sc.close();
   }
}
