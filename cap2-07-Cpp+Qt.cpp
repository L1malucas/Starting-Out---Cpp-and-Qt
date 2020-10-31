//Capítulo 02 - Introdução ao C++, Desafio 07: Nível do Oceano!

//Solução para o desafio usando Qt e C++.

/*"Assumindo que o nível dos oceanos está subindo atualmente em cerca de 1.5 milímetros por ano, escreva um programa que exiba: 1) O número de milímetros acima do nível atual que o nível do oceano estará em 5 anos;
2) O número de milímetros acima do nível atual que o nível do oceano estará em 7 anos;
3) O número de milímetros acima do nível atual que o nível do oceano estará em 10 anos."*/

#include <QString>
#include <QLabel>
#include <QApplication>

int main(int argc, char *argv[])
{
    float NivelMar = {1.5};
    QApplication app(argc, argv);
    QLabel saida ("O nivel do oceano estará em 5 anos: " + QString::number(NivelMar * 5)+ " milímetros mais alto."+
                  "O nivel do oceano estará em 7 anos: " + QString::number(NivelMar * 7)+ " milímetros mais alto."+
                  "O nivel do oceano estará em 10 anos: " + QString::number(NivelMar * 10)+ " milímetros mais alto."+));
    saida.show();
    return app.exec();
}
