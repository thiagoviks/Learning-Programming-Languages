import java.util.Scanner;

class salario {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    float salario_liquido, salario_bruto, inss;
    String nome;
    System.out.println("Digite o nome do funcionario");
    nome = sc.nextLine();
    System.out.println("Digite o valor do salario bruto");
    salario_bruto = sc.nextFloat();
    inss = (salario_bruto * 9) / 100;
    salario_liquido = salario_bruto - inss;
    System.out.println("O nome do funcionario = " + nome + "\nO salario bruto = " + salario_bruto
        + "\nO desconto do inss = " + inss + "\nO salario liquido = " + salario_liquido);
    sc.close();
  }
}
