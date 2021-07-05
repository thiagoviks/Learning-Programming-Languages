/*Problema: Ler uma vari�vel de numero inteiro e mostrar a tabuada desse n�mero.*/

import java.util.Scanner;

class tabuada_para {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int i, numero;
    String mensagem = "";
    System.out.println("Digite um numero: ");
    numero = sc.nextInt();
    sc.close();
    for (i = 1; i <= 9; i = i + 1)
      mensagem = mensagem + "\n" + numero + " x " + i + " = " + (numero * i);
    System.out.println(mensagem);

  }
}
