//Capítulo 02 - Introdução ao C++, Desafio 01: Soma de dois números!

//Solução para o desafio usando C++ e Qt.

/*Escreva um programa que armazene duas variáveis integrais (50 e 100), armazene a soma entre elas e exiba o resultado da soma.*/

#include <QString>
#include <QApplication>
#include <QLabel>
int main (int argc, char *argv[])
{
    int Cinquenta = 50,
        Cem = 100,
        total = Cinquenta + Cem;
    
    QApplication app(argc, argv);
    QLabel label ("Resultado : " + QString::number(total));
    label.show();
    return app.exec();
}
