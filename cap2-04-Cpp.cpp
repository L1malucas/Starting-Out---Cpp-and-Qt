//Capítulo 02 - Introdução ao C++, Desafio 04: Conta de Restaurante!

//Solução para o desafio usando apenas C++.

//"Escreva um programa que calcule o imposto e a gorjeta na conta de um restaurante para um cliente com uma taxa de refeição de $ 88,67. O imposto deve ser de 6,75% do custo da refeição; A gorjeta deve ser de 20% do total após a adição do imposto. Exibir o custo da refeição, valor do imposto, valor da gorjeta e conta total na tela. ”

#include <iostream>
#include <locale.h>
#include <iomanip>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float Refeicao{ 88.67f },
        Taxa_Refeicao = Refeicao * .0675f,
        Gorjeta = (Refeicao + Taxa_Refeicao) * 0.2f,
        TotalConta = Refeicao + Taxa_Refeicao + Gorjeta;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Valor da refeição: $" << Refeicao<<"\n";
    std::cout << "Valor do Imposto: $" << Taxa_Refeicao << "\n";
    std::cout << "Valor da Gorjeta: $" << Gorjeta << "\n";
    std::cout << "Custo da total refeição: $" << TotalConta << "\n";
    
    return 0;
}
