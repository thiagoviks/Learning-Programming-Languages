
import java.util.Scanner;

class matriz_maior_menor {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int maior = 0, menor = 99999;
    int exerc_matriz[][] = new int[3][3];
    String mensagem = "";
    for (int l = 0; l <= 2; l++)
      for (int c = 0; c <= 2; c++) {
        System.out.println("Digite valor para exerc_matriz[" + l + "," + c + "]: ");
        exerc_matriz[l][c] = sc.nextInt();
        mensagem = mensagem + "\nO valor de exerc_matriz[" + l + "," + c + "].: " + exerc_matriz[l][c];
        if (exerc_matriz[l][c] > maior)
          maior = exerc_matriz[l][c];
        if (exerc_matriz[l][c] < menor)
          menor = exerc_matriz[l][c];
      }
    mensagem = mensagem + "\n\n O maior valor da matriz .: " + maior + "\nO menor valor da matriz .: " + menor;
    System.out.println(mensagem);
    sc.close();
  }
}