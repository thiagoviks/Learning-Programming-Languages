import java.util.Scanner;

class automovel {
   public static void main(String args[]) {

      Scanner sc = new Scanner(System.in);
      float custo_fabrica, perc_revendedor, impostos, preco_final;
      System.out.println("Digite o valor do custo de fabrica deste automovel");
      custo_fabrica = sc.nextFloat();
      perc_revendedor = (25 * custo_fabrica) / 100;
      impostos = (45 * custo_fabrica) / 100;
      preco_final = custo_fabrica + perc_revendedor + impostos;
      System.out.println("Custo de Fabrica ............R$ " + custo_fabrica + "\nPercentual do revendedor ....R$ "
            + perc_revendedor + "\nValor dos impostos ..........R$ " + impostos + "\nPreco Final .................R$ "
            + preco_final);
      sc.close();

   }
}
