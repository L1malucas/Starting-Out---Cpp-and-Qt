//Capítulo 02 - Introdução ao C++, Desafio 02: Predição de Vendas!

//Solução para o desafio usando C++ e Qt.

/*A divisão de vendas nordestina de uma empresa, gera 58% das vendas totais. Com base nessa porcentagem, escreva um programa que vai prever quanto a divisão nordestina vai gerar se a empresa faturar 8,6 milhões neste ano.*/

#include <QString>
#include <QLabel>
#include <Qapplication>

int main(int argc, char *argv[])
{
    float TaxaVendas = {.58};
    float VendasAno ={8.6};
    
    QApplication app(argc, argv);
    QLabel label ("Vendas da divisão nordestina: " + 
        QString::number(TaxaVendas * VendasAno) + (" milhões."));
    label.show();
    return app.exec();
}
