//Capítulo 02 - Introdução ao C++, Desafio 07: Compra Total!

//Solução para o desafio usando C++ e Qt.

/*"Compra Total
Um cliente em uma loja está comprando cinco itens. Os preços dos cinco itens são os seguintes:
Preço do item 1 = $ 15,95
Preço do item 2 = $ 24,95
Preço do item 3 = $ 6,95
Preço do item 4 = $ 12,95
Preço do item 5 = $ 3,95
Escreva um programa que mantenha os preços dos cinco itens em cinco variáveis. Exibir cada
preço do item, o subtotal da venda, o valor do imposto sobre vendas e o total. Assuma o
o imposto sobre vendas é de 7%."*/

#include <QApplication>
#include <QString>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    float Imposto = {0},
          Item1 = {15.95},
          Item2 = {24.95},
          Item3 = {6.95},
          Item4 = {12.95},
          Item5 = {3.95},
          Sub = {0};
    QLabel saida ("Valor Item1: R$ " + QString::number(Item1) +
                  "\nValor Item2: R$ " + QString::number(Item2) +
                  "\nvalor Item3: R$ " + QString::number(Item3) +
                  "\nValor Item4: R$ " + QString::number (Item4) + 
                  "\nValor Item5: R$ " + QString::number (Item5) + 
                  "\nSubtotal da Venda: R$ " + QString::number (Sub = (Item1 + Item2 + Item3 + Item4 + Item5)) + 
                  "\nImposto sobre a venda: R$ " + QString::number(Imposto = Sub * 0.7) +
                  "\nValor total da compra: R$ " + QString::number (Sub + Imposto));          
    saida.show();
    return app.exec;
}
