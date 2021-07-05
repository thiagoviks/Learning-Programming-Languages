import java.util.Scanner;

class matriz_3x3 {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int exerc_matriz[][] = new int[3][3];
    String mensagem = "";
    for (int l = 0; l <= 2; l++)
      for (int c = 0; c <= 2; c++) {
        System.out.println("Digite valor para exerc_matriz[" + l + "," + c + "] : ");
        exerc_matriz[l][c] = sc.nextInt();
        mensagem = mensagem + "\nO valor de exerc_matriz[" + l + "," + c + "].: " + exerc_matriz[l][c];

      }
    ;
    System.out.println(mensagem);
    sc.close();
  }
}
