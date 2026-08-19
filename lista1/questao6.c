/* O programa apresenta alguns erros de sintaxe e de lógica. 
Primeiro, na declaração main() falta informar o tipo da função, sendo o correto int main(). 
Também é necessário incluir a biblioteca stdio.h, pois o programa utiliza o comando printf(), 
e a biblioteca stdlib.h caso queira utilizar system("pause"). Outro erro está no printf, 
pois foram colocados quatro especificadores %d (%d%d%d%d), mas apenas três variáveis foram declaradas: a, b e c. 
Além disso, a variável d foi utilizada no printf, mas não foi declarada. 
Por exemplo, o correto seria int a = 1, b = 2, c = 3; e depois printf("Os números são: %d %d %d\n", a, b, c);. 
Assim, o programa corrigido fica: */

#include <stdio.h>
#include <stdlib.h>

int main() {
  
    int a = 1, b = 2, c = 3;
    printf("Os números são: %d %d %d\n", a, b, c);
    system("pause");

    return 0;
}
