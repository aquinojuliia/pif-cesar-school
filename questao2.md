A) A biblioteca <conio.h> não faz parte do padrão ANSI C. Por isso as funções como getch() e getche() não funciona em todos os sistemas.
B) São as funções getchar() e a putchar().
C) #include <stdio.h>
    int main() {
        int c;

        do{
            c = getchar();
        } while ( c == '\n');

        printf("Caractere: %c\n", c);
        return 0;
    }