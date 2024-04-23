#include <iostream>
using namespace std;

int busca_sequencial_recursiva(int *a, int n, int x)
{
    if (n == 0)
        return -1;
    else if (x == a[n - 1])
        return n - 1;
    else
        return busca_sequencial_recursiva(a, n - 1, x);
}

// Função de teste para busca sequencial recursiva
void testar_busca_sequencial_recursiva() {
    cout << "Testando busca sequencial recursiva\n\n";

    // Vetores de teste
    int vetor1[] = {};                         // Vetor vazio
    int vetor2[] = {10};                       // Vetor com um elemento
    int vetor3[] = {1, 2, 3, 4, 5};            // Vetor em ordem crescente
    int vetor4[] = {5, 4, 3, 2, 1};            // Vetor em ordem decrescente
    int vetor5[] = {1, 2, 2, 6, 8, 3, 4, 5};   // Vetor com elementos repetidos

    int* vetores[] = {vetor1, vetor2, vetor3, vetor4, vetor5};
    int tamanhos[] = {0, 1, 5, 5, 8};

    for (int i = 0; i < 5; ++i) {
        int* vetor = vetores[i];
        int n = tamanhos[i];

        cout << "Vetor " << i+1 << ": ";
        for (int j = 0; j < n; ++j) {
            cout << vetor[j] << " ";
        }
        cout << endl;

        int x = 4; // Elemento a ser buscado

        cout << "Elemento a ser buscado: " << x << endl;
        int resultado = busca_sequencial_recursiva(vetor, n, x);
        cout << "Resultado: " << (resultado != -1 ? "Índice " + to_string(resultado) : "Não encontrado") << endl;
        cout << endl;
    }
}

int main()
{
    // system("clear");
    // cout << "Digite o tamanho do vetor:" << endl;
    // int n;
    // cin >> n;

    // system("clear");
    // int a[n];
    // cout << "Digite os items do vetor:" << endl;
    // for (int i = 0;i < n; i++)
    // {
    //     cout << "Item " << i <<": ";
    //     cin >> a[i];
    // }

    // system("clear");
    // cout << "Digite o item que deseja buscar no vetor:" << endl;
    // int x;
    // cin >> x;

    // system("clear");
    // cout << "A posição do item procurado é: " << busca_sequencial_recursiva(a, n, x) << endl;

    testar_busca_sequencial_recursiva();
    return 0;
}