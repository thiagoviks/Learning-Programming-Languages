import java.util.Scanner;

class par_impar {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int numero;
        System.out.println("Digite um numero:");
        numero = sc.nextInt();
        if (numero % 2 == 0)
            System.out.println("O numero " + numero + " e par");
        else
            System.out.println("O numero " + numero + " e impar");

        sc.close();
    }
}
