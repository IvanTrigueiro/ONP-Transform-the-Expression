#include <iostream>
#include <stack>
#include <cstring>
#include <ctype.h>
using namespace std;
int main ()
{
    int t;
    cin >> t; // Numero de expressoes
    char expressao[400];
    stack <char> pilha; // Pilha dos operadores
    while (t--)
    {
        cin >> expressao;
        int tam = strlen(expressao);

        for(int i = 0; i < tam; i++ )
        {
            if(isalpha(expressao[i])) //Compara se eh alfabetico
                cout << expressao[i];
            else if(expressao[i] == ')' )
            {
                cout << pilha.top ();
                pilha.pop();
            }

            else if (expressao[i] != '(' )
                pilha.push(expressao[i]);
        }

        cout << endl;
    }
    return 0;
}
