import java.util.Scanner;

class tabuada_while {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int i, numero;
    String mensagem = "";
    System.out.println("Digite um numero: ");
    numero = sc.nextInt();
    i = 1;

    while (i <= 9) {
      mensagem = mensagem + "\n" + numero + " x " + i + " = " + (numero * i);
      i++; // igual ao i=i+1;
    }
    System.out.println(mensagem);
    sc.close();
  }
}
