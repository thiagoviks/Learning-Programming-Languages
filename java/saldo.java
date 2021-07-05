import java.util.Scanner;

class saldo {
   public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      float valor_saldo, cheque_entrou;
      valor_saldo = 500;
      System.out.println("Digite o valor do cheque que entrou: ");
      cheque_entrou = sc.nextFloat();
      valor_saldo = valor_saldo - cheque_entrou;
      System.out.println(" O Saldo atual = " + valor_saldo);
      sc.close();
   }
}
