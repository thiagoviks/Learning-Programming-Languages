
class fibonacci {
    public static void main(String args[]) {

        int i, num_anterior, num_atual, novo_numero;
        num_anterior = 0;
        num_atual = 1;
        String mensagem = "O 1. numero fibonaccci 1\n";
        for (i = 2; i <= 10; i++) {
            novo_numero = num_atual + num_anterior;
            num_anterior = num_atual;
            num_atual = novo_numero;
            mensagem = mensagem + "o " + i + ". numero fibonaccci  " + novo_numero + "\n";
        }
        System.out.println(mensagem);

    }
}
