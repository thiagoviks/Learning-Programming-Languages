import java.util.Scanner;

class operacoes_subalgoritmos_modularizando {
  static float num1, num2, soma, multiplicacao, subtracao, divisao;

  public static void main(String args[]) {
    leitura();
    calculos();
    imprimir();
  }

  public static void leitura() {
    Scanner sc = new Scanner(System.in);
    System.out.println("Digite o numero 1");
    num1 = sc.nextFloat();
    System.out.println("Digite o numero 2");
    num2 = sc.nextFloat();
    sc.close();
  }

  public static void calculos() {
    soma = num1 + num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;
    subtracao = num1 - num2;
  }

  public static void imprimir() {
    System.out.println("A soma = " + soma + "\nA divisao = " + divisao + "\nA multiplicacao = " + multiplicacao
        + "\nA subtracao = " + subtracao);
  }

}
