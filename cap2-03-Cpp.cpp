//Capítulo 02 - Introdução ao C++, Desafio 03: Impostos de Vendas!

//Solução para o desafio usando apenas C++.

//Escreva um programa que calcule o imposto total sobre vendas em uma compra de $95. Suponha que o imposto estadual sobre vendas seja de 4% e o imposto sobre vendas nacional seja de 2%.

#include <iostream>
int main()
{
    int ValorVenda = {95};
    float ImpEstado = {.04f},
          ImpPais = {.02f};
    std::cout << "Valor do imposto estadual: $" << (ValorVenda * ImpEstado) << " reais.\n";
    std::cout << "Valor do imposto nacional: $" << (ValorVenda * ImpPais) << " reais.\n";
    return 0;
}
