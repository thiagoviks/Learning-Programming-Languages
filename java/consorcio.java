
import java.util.Scanner;

class consorcio {
   public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      float valor_prest, total_pago, saldo_devedor;
      int total_prest, qtd_prest_pagas;
      System.out.println("Digite o total das prestacoes");
      total_prest = sc.nextInt();
      System.out.println("Digite a quantidade das prestacoes pagas");
      qtd_prest_pagas = sc.nextInt();
      System.out.println("Digite o valor de cada prestacao");
      valor_prest = sc.nextFloat();
      total_pago = qtd_prest_pagas * valor_prest;
      saldo_devedor = valor_prest * (total_prest - qtd_prest_pagas);

      System.out.println("O total pago = " + total_pago + "\nO saldo devedor = " + saldo_devedor);
      sc.close();
   }
}
