//Capítulo 02 - Introdução ao C++, Desafio 04: Conta de Restaurante!

//Solução para o desafio usando apenas C++ e Qt.

//"Escreva um programa que calcule o imposto e a gorjeta na conta de um restaurante para um cliente com uma taxa de refeição de $ 88,67. O imposto deve ser de 6,75% do custo da refeição; A gorjeta deve ser de 20% do total após a adição do imposto. Exibir o custo da refeição, valor do imposto, valor da gorjeta e conta total na tela. ”

#include "mainwindow.h"
#include <QString>
#include <QApplication>
#include <QLabel>
#include <iostream>
#include<QTextEdit>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    float Refeicao{ 88.67f },
            Taxa_Refeicao = Refeicao * .0675f,
            Gorjeta = (Refeicao + Taxa_Refeicao) * 0.2f,
            TotalConta = Refeicao + Taxa_Refeicao + Gorjeta;
    QLabel saida;
    saida.setText("Valor da refeição: $ "+QString::number(Refeicao)+("\nvalor do imposto: $ " +QString::number(Taxa_Refeicao))+
                  ("\nValor da refeição: $ "+ QString::number (Refeicao)+
                   ("\nValor do Imposto: $ " + QString::number(Taxa_Refeicao) +
                    ("\nValor da Gorjeta: $ " + QString::number(Gorjeta) +
                     ("\nCusto da total refeição: $ "+ QString::number(TotalConta))))));
    saida.show();
    return app.exec();
}


