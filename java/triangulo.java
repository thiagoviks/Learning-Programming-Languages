import java.util.Scanner;

class triangulo {
      public static void main(String args[]) {
            Scanner sc = new Scanner(System.in);
            float le, ld, li;
            System.out.println("Digite o valor para LE: ");
            le = sc.nextFloat();
            System.out.println("Digite o valor para LD: ");
            ld = sc.nextFloat();
            System.out.println("Digite o valor para LI: ");
            li = sc.nextFloat();

            if ((li < (le + ld)) && (le < (ld + li)) && (ld < (li + le)))
                  if ((le == ld) && (le == li))
                        System.out.println("triangulo  equilatero");
                  else if ((li == ld) || (li == le) || (le == ld))
                        System.out.println("triangulo  isosceles");
                  else // if ((ld != le) && (ld != li) && (li != le))
                        System.out.println("triangulo  escaleno");
            else
                  System.out.println("nao e um triangulo");
            sc.close();
      }
}
