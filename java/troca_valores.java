
class troca_valores {
   public static void main(String args[]) {
      int A, B, Auxiliar;
      A = 5;
      B = 10;
      System.out.println("Antes da troca : \nA = " + A + " e \nB = " + B);
      Auxiliar = A;
      A = B;
      B = Auxiliar;
      System.out.println("Depois da troca: \nA = " + A + " e \nB = " + B);
   }
}
