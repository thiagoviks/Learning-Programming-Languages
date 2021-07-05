import java.util.Scanner;

class compra_desconto {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        float valor_compra, valor_desconto, valor_pagar;
        int desconto;
        String nome;

        System.out.println("Digite o nome do Cliente: ");
        nome = sc.nextLine();
        System.out.println("Digite o valor da Compra: ");
        valor_compra = sc.nextFloat();
        if (valor_compra <= 200)
            desconto = 10;
        else if (valor_compra <= 500)
            desconto = 15;
        else
            desconto = 20;

        valor_desconto = (valor_compra * desconto) / 100;
        valor_pagar = valor_compra - valor_desconto;
        System.out.println(
                "Nome do Cliente .: " + nome + "\nValor da Compra .: " + valor_compra + "\nO percentual de desc: "
                        + desconto + "\nValor do desconto .: " + valor_desconto + "\nValor a pagar .:" + valor_pagar);
        sc.close();

    }
}
