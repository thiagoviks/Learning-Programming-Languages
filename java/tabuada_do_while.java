import java.util.Scanner;

class tabuada_do_while {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int i, numero;
    String mensagem = "";
    System.out.println("Digite um numero: ");
    numero = sc.nextInt();
    i = 1;

    do {
      mensagem = mensagem + "\n" + numero + " x " + i + " = " + (numero * i);
      i++;
    } while (i <= 9);
    System.out.println(mensagem);
    sc.close();

  }
}
