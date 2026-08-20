O programa imprime:
  "Primeiro programa"
O compilador interpreta o "%c" como um "espaço reservado" no "printf" para imprimir um caractere no lugar dele.
O primeiro "%c" recebe o  "\n" (pula uma linha);
Já o segundo "%c" recebe o "\t" (da um espaço e imprime as aspas duplas de fechamento);
Por fim o terceiro "%c" recebe "\"" (imprime a primeira aspas duplas).
