#include <iostream>
using namespace std;

bool verificar_ordem_crescente(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i + 1])
        {
            return false;
        }
    }
    return true;
}

// Função de teste
void testar_verificar_ordem_crescente()
{
    cout << "Testando verificar_ordem_crescente\n\n";

    // Vetor em ordem crescente
    int vetor1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(vetor1) / sizeof(vetor1[0]);
    cout << "Vetor 1: ";
    for (int i = 0; i < n1; i++)
    {
        cout << vetor1[i] << " ";
    }
    cout << endl;
    cout << "Está em ordem crescente? ";
    cout << (verificar_ordem_crescente(vetor1, n1) ? "Sim" : "Não") << endl;
    cout << endl;

    // Vetor em ordem decrescente
    int vetor2[] = {5, 4, 3, 2, 1};
    int n2 = sizeof(vetor2) / sizeof(vetor2[0]);
    cout << "Vetor 2: ";
    for (int i = 0; i < n2; i++)
    {
        cout << vetor2[i] << " ";
    }
    cout << endl;
    cout << "Está em ordem crescente? ";
    cout << (verificar_ordem_crescente(vetor2, n2) ? "Sim" : "Não") << endl;
    cout << endl;

    // Vetor com elementos repetidos
    int vetor3[] = {1, 2, 3, 3, 3, 4, 5, 5};
    int n3 = sizeof(vetor3) / sizeof(vetor3[0]);
    cout << "Vetor 3: ";
    for (int i = 0; i < n3; i++)
    {
        cout << vetor3[i] << " ";
    }
    cout << endl;
    cout << "Está em ordem crescente? ";
    cout << (verificar_ordem_crescente(vetor3, n3) ? "Sim" : "Não") << endl;
    cout << endl;

    // Vetor com elemento fora de ordem
    int vetor4[] = {10, 20, 30, 40, 25};
    int n4 = sizeof(vetor4) / sizeof(vetor4[0]);
    cout << "Vetor 4: ";
    for (int i = 0; i < n4; i++)
    {
        cout << vetor4[i] << " ";
    }
    cout << endl;
    cout << "Está em ordem crescente? ";
    cout << (verificar_ordem_crescente(vetor4, n4) ? "Sim" : "Não") << endl;
    cout << endl;

    // Vetor com todos os elementos iguais
    int vetor5[] = {5, 5, 5, 5, 5};
    int n5 = sizeof(vetor5) / sizeof(vetor5[0]);
    cout << "Vetor 5: ";
    for (int i = 0; i < n5; i++)
    {
        cout << vetor5[i] << " ";
    }
    cout << endl;
    cout << "Está em ordem crescente? ";
    cout << (verificar_ordem_crescente(vetor5, n5) ? "Sim" : "Não") << endl;
    cout << endl;
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
    // cout << "Resultado: " << (verificar_ordem_crescente(a, n) ? "true" : "false") << endl;

    testar_verificar_ordem_crescente();
    return 0;
}