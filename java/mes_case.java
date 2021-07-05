import java.util.Scanner;

class mes_case {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int mes;
        System.out.println("Digite o mes de 1 a 12 ");
        mes = sc.nextInt();
        switch (mes) {
            case 1:
                System.out.println("O mes = Janeiro");
                break;
            case 2:
                System.out.println("O mes = Fevereiro");
                break;
            case 3:
                System.out.println("O mes = Marco");
                break;
            case 4:
                System.out.println("O mes = Abril");
                break;
            case 5:
                System.out.println("O mes = Maio");
                break;
            case 6:
                System.out.println("O mes = Junho");
                break;
            case 7:
                System.out.println("O mes = Julho");
                break;
            case 8:
                System.out.println("O mes = Agosto");
                break;
            case 9:
                System.out.println("O mes = Setembro");
                break;
            case 10:
                System.out.println("O mes = Outubro");
                break;
            case 11:
                System.out.println("O mes = Novembro");
                break;
            case 12:
                System.out.println("O mes = Dezembro");
                break;
            default:
                System.out.println("O mes nao EXISTE");
        }
        sc.close();

    }
}
