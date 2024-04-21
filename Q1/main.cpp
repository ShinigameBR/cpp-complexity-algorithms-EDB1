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

    // Vetor de teste
    int vetores[][10] = {
        {},                        // Vetor vazio
        {10},                      // Vetor com um elemento
        {1, 2, 3, 4, 5},           // Vetor em ordem crescente
        {5, 4, 3, 2, 1},           // Vetor em ordem decrescente
        {1, 2, 2, 6, 8, 3, 4, 5},  // Vetor com elementos repetidos
    };

    for (auto& vetor : vetores) {
        int n = sizeof(vetor) / sizeof(vetor[0]);
        cout << "Vetor: ";
        for (int i = 0; i < n; i++) {
            cout << vetor[i] << " ";
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