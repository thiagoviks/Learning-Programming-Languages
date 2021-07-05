
class serie_for {
   public static void main(String args[]) {
      int i;
      String mensagem = "";
      for (i = 10; i <= 300; i = i + 10) {
         mensagem = mensagem + i + " - ";
         if ((i == 100) || (i == 200) || (i == 300))
            mensagem = mensagem + "\n";
      }
      System.out.println(mensagem);

   }
}
