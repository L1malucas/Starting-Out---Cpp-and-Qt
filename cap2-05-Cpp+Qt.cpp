//Capítulo 02 - Introdução ao C++, Desafio 05: Valor Médio!

//Solução para o desafio usando apenas C++ e Qt.

//"Para obter a média da série de valores, você adiciona valores e, em seguida, divide a soma pelo número de valores. Escreva um programa que armazene os seguintes valores em cinco variáveis ​​diferentes: 28, 32, 37, 24 e 33. O resultado deve primeiro calcular a soma dessas cinco variáveis ​​e armazenar o resultado em uma variável separada chamada soma. Então, o programa deve dividir a variável de soma por 5 para obter a média. Exiba a média na tela.”

#include <QString>
#include <QLabel>
#include <QApplication>

int main(int argc, char *argv[])
{
    double V1 = {28},
           V2 = {32},
           V3 = {37},
           V4 = {24},
           V5 = {33},
           Soma = {V1 + V2 + V3 + V4 + V5};
    QApplication app(argc, argv);
    QLabel saida ("Soma das Variáveis: " + QString::number(Soma) + ("\n") +
                  ("Média das Variáveis: " + QString::number(Soma/5)));
    saida.show();
    return app.exec();
}

