import java.util.Scanner;

class vendas {
   public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      float fixo, comissao, vendas_mes, salario_total;
      fixo = 800;
      System.out.println("Digite o valor da venda no mes ");
      vendas_mes = sc.nextFloat();
      comissao = (vendas_mes * 15) / 100;
      salario_total = fixo + comissao;
      System.out.println(
            "O salario Fixo = " + fixo + "\nA comissao  = " + comissao + "\nO salario total = " + salario_total);
      sc.close();
   }
}
