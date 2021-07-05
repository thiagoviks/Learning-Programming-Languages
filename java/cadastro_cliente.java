import java.util.Scanner;

class cadastro_cliente {
  public static void main(String args[]) {
    cadastro dados_cliente = new cadastro();
    Scanner sc = new Scanner(System.in);
    System.out.println("Digite o nome do Cliente");
    dados_cliente.nome = sc.nextLine();
    System.out.println("Digite a idade Cliente");
    dados_cliente.idade = sc.nextInt();
    System.out.println("Digite o salario do Cliente");
    dados_cliente.salario = sc.nextFloat();

    System.out.println("Nome do Cliente .: " + dados_cliente.nome + "\nIdade do Cliente .: " + dados_cliente.idade
        + "\nSalario do cliente .: " + dados_cliente.salario);

    sc.close();
  }
}

class cadastro {
  String nome;
  int idade;
  float salario;
}
