#include <iostream>
using namespace std;

int busca_binaria_iterativa(int *a, int n, int x)
{
    int begin = 0;
    int end = n - 1;

    while (begin <= end) {

        int mid = (begin + end) / 2;

        if (a[mid] == x) {
            return mid;
        }

        if (a[mid] < x) {
            begin = mid + 1;
        } else {
            end = mid;
        }
    }

    return -1;
}

// Função de teste para busca binária iterativa
void testar_busca_binaria_iterativa() {
    cout << "Testando busca binária iterativa\n\n";

    // Vetores de teste
    int vetor1[] = {1, 2, 3, 4, 5};           // Vetor em ordem crescente
    int vetor2[] = {2, 3, 5, 6, 7};           // Vetor em ordem crescente
    int vetor3[] = {-6, 1, 2, 3, 8};          // Vetor em ordem crescente

    int* vetores[] = {vetor1, vetor2, vetor3};
    int tamanhos[] = {5, 5, 5};

    for (int i = 0; i < 3; ++i) {
        int* vetor = vetores[i];
        int n = tamanhos[i];

        cout << "Vetor " << i+1 << ": ";
        for (int j = 0; j < n; ++j) {
            cout << vetor[j] << " ";
        }
        cout << endl;

        int x = 3; // Elemento a ser buscado

        cout << "Elemento a ser buscado: " << x << endl;
        int resultado = busca_binaria_iterativa(vetor, n, x);
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