#include <iostream>
using namespace std;

int fibonacci_iterativo(int n)
{
    int i, j, aux;
    j = 1;
    aux = 0;
    for (int i = 1; i <= n; i++)
    {
        aux += j;
        j = aux - j;
    }
    return aux;
}

// Função de teste
void testar_fibonacci_iterativo()
{
    cout << "Testando fibonacci_iterativo\n\n";

    // Teste para os primeiros 10 números de Fibonacci
    for (int i = 1; i <= 10; i++)
    {
        cout << "Fibonacci(" << i << ") = " << fibonacci_iterativo(i) << endl;
    }
}

int main()
{
    // system("clear");
    // cout << "Digite um número presente na sequência de Fibonacci:" << endl;
    // int n;
    // cin >> n;

    // system("clear");
    // cout << "A posição do item procurado é: " << fibonacci_iterativo(n) << endl;

    testar_fibonacci_iterativo();
    return 0;
}