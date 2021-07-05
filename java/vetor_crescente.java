class vetor_crescente {
   public static void main(String args[]) {
      int A[] = { 9, 3, 7, 6, 21, 50, 45, 36, 2, 8, 7, 9, 42, 32, 18 };
      int Aux;
      String mensagem = "Valores Originais\n";
      for (int j = 0; j <= 14; j++)
         mensagem = mensagem + "A[" + j + "] =" + A[j] + " - ";

      for (int j = 0; j <= 13; j++)
         for (int i = 0; i <= 13; i++)
            if (A[i] > A[i + 1]) {
               Aux = A[i];
               A[i] = A[i + 1];
               A[i + 1] = Aux;
            }
      ;
      mensagem = mensagem + "\n\nValores Ordenados\n";
      for (int j = 0; j <= 14; j++)
         mensagem = mensagem + "A[" + j + "] =" + A[j] + " - ";
      System.out.println(mensagem);

   }
}
