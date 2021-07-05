class vetores_troca_5 {
     public static void main(String args[]) {
          int A[] = { 9, 3, 7, 6, 21 };
          int B[] = { 6, 4, 9, 2, 28 };
          int C[] = new int[5];
          String mensagem = "Valores Originais\n";
          for (int j = 0; j <= 4; j++) {
               mensagem = mensagem + "A[" + j + "] =" + A[j] + " - \n";
               mensagem = mensagem + "B[" + j + "] =" + B[j] + " - \n";
          }
          for (int i = 0; i <= 4; i++) {
               C[i] = A[i];
               A[i] = B[i];
               B[i] = C[i];
          }
          ;
          mensagem = mensagem + "\n\nValores Ordenados\n";
          for (int j = 0; j <= 4; j++) {
               mensagem = mensagem + "A[" + j + "] =" + A[j] + " - \n";
               mensagem = mensagem + "B[" + j + "] =" + B[j] + " - \n";
          }
          System.out.println(mensagem);

     }
}
