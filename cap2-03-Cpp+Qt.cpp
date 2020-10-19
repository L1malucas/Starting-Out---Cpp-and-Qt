//Capítulo 02 - Introdução ao C++, Desafio 03: Impostos de Vendas!

//Solução para o desafio usando C++ e Qt.

//Escreva um programa que calcule o imposto total sobre vendas em uma compra de $95. Suponha que o imposto estadual sobre vendas seja de 4% e o imposto sobre vendas nacional seja de 2%.

#include <QString>
#include <QLabel>
#include <QApplication>

int main(int argc, char *argv[])
{
    int ValorVenda = {95};
    float ImpEstado = {.04f},
          ImpPais = {.02f};

QApplication app(argc, argv);
  
QLabel Cout ("Valor do imposto estadual: $" + QString::number(ValorVenda * ImpEstado) + (" reais.\n") +                ("Valor do imposto nacional: $" + QString::number(ValorVenda * ImpPais) + (" reais.")));
    Cout.show();
    return app.exec();
}
