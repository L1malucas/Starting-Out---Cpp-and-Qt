//Capítulo 02 - Introdução ao C++, Desafio 02: Predição de Vendas!

//Solução para o desafio usando apenas c++.

/*A divisão de vendas nordestina de uma empresa, gera 58% das vendas totais. Com base nessa porcentagem, escreva um programa que vai prever quanto a divisão nordestina vai gerar se a empresa faturar 8,6 milhões neste ano.*/

#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float TaxaVendas = {.58};
    float VendasAno = {8.6};
    
    cout << "Vendas da divisão nordestina: " << (TaxaVendas * VendasAno) << " milhões.";
    return 0;
}
