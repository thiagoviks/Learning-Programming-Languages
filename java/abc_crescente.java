import java.util.Scanner;

class abc_crescente {
        public static void main(String args[]) {
                Scanner sc = new Scanner(System.in);
                System.out.println("Digite o valor para A: ");
                int a = sc.nextInt();
                System.out.println("Digite o valor para B: ");
                int b = sc.nextInt();
                System.out.println("Digite o valor para C: ");
                int c = sc.nextInt();
                if ((a <= b) && (a <= a))
                        if (b <= c)
                                System.out.println("Em ordem crescente ficou: " + a + "-" + b + "-" + c);
                        else
                                System.out.println("Em ordem crescente ficou: " + a + "-" + c + "-" + b);
                else if ((b <= a) && (b <= c))
                        if (a <= c)
                                System.out.println("Em ordem crescente ficou: " + b + "-" + a + "-" + c);
                        else
                                System.out.println("Em ordem crescente ficou: " + b + "-" + c + "-" + a);
                else if (a <= b)
                        System.out.println("Em ordem crescente ficou: " + c + "-" + a + "-" + b);
                else
                        System.out.println("Em ordem crescente ficou: " + c + "-" + b + "-" + a);
                sc.close();
        }
}
