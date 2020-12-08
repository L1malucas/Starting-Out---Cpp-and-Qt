//Capítulo 02 - Introdução ao C++, Desafio 08: Nota Fiscal!

//Solução para o desafio usando apenas C++.

/*"Compra Total
Um cliente em uma loja está comprando cinco itens. Os preços dos cinco itens são os seguintes:
Preço do item 1 = $ 15,95
Preço do item 2 = $ 24,95
Preço do item 3 = $ 6,95
Preço do item 4 = $ 12,95
Preço do item 5 = $ 3,95
Escreva um programa que mantenha os preços dos cinco itens em cinco variáveis. Exibir preço de cada item, o subtotal da venda, o valor do imposto sobre vendas e o total. Assuma o imposto sobre vendas de 7%."*/

#include <iostream>
#include <vector>
#include <iomanip>
int main()
{ float Item[5] = {15.95, 24.95, 6.95, 12.95, 3.95}, Imposto, Sub;
    std::cout << std::fixed << std::setprecision(2);
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Valor do item: R$ " << Item[i] << "\n";
        std::cout << "Subtotal da Venda: R$ " << (Sub = Sub + Item[i]) << "\n";
        std::cout << "---------------------------------\n";
    }
    std::cout << "Valor do Imposto " << (Imposto = Sub * 0.07) << "\n";
    std::cout << "Valor total da compra " << Sub + Imposto;
    return 0;
}
