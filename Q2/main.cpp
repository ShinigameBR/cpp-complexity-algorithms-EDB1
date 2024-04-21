#include <iostream>
using namespace std;

int busca_binaria_iterativa(int *a, int n, int x)
{
    n = n - 1;
    for (int i = 0; i <= n; ) {
        int aux = (i + n) / 2;

        if (a[aux] == x) {
            return aux;
        }
        else if (a[aux] < x) {
            i = aux + 1;
        }
        else {
            n = aux - 1;
        }
    }

    return -1;
}

// Função de teste para busca binária iterativa
void testar_busca_binaria_iterativa() {
    cout << "Testando busca binária iterativa\n\n";

    // Vetor de teste
    int vetores[][10] = {
        {1, 2, 3, 4, 5},           // Vetor em ordem crescente
        {2, 3, 5, 6, 7},           // Vetor em ordem crescente
        {-6, 1, 2, 3, 8},           // Vetor em ordem crescente
        
    };

    for (auto& vetor : vetores) {
        int n = sizeof(vetor) / sizeof(vetor[0]);
        cout << "Vetor: ";
        for (int i = 0; i < n; i++) {
            cout << vetor[i] << " ";
        }
        cout << endl;

        int x = 3; // Elemento a ser buscado

        cout << "Elemento a ser buscado: " << x << endl;
        int resultado = busca_binaria_iterativa(vetor, n, x);
        cout << "Resultado esperado: " << (resultado != -1 ? "Índice " + to_string(resultado) : "Não encontrado") << endl;
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
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Item " << i << ": ";
    //     cin >> a[i];
    // }

    // system("clear");
    // cout << "Digite o item que deseja buscar no vetor:" << endl;
    // int x;
    // cin >> x;

    // system("clear");
    // cout << "A posição do item procurado é: " << busca_binaria_iterativa(a, n, x) << endl;

    testar_busca_binaria_iterativa();
    return 0;
}