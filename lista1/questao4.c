/*Codigo com erros :*/

/* #include <stdio.h>
#include <stdlib.h>;
int Main{}
(
printf( Existem %d semanas no ano.,52);
cout << endl;
system("PAUSE");
return 0;
)  */

/*Codigo Corrigido:*/

#include <stdio.h>   // CORRIGIDO: biblioteca para usar printf
#include <stdlib.h>  // CORRIGIDO: retirado o ";" após <stdlib.h>

int main()  // CORRIGIDO: "Main{}" para "main()" e abertura correta da função
{
    printf("Existem %d semanas no ano.\n", 52);
    // CORRIGIDO: texto colocado entre aspas e adicionada a quebra de linha \n

    system("PAUSE");  // Mantido: pausa o programa no Windows

    return 0;  // Mantido: indica que o programa terminou corretamente
}