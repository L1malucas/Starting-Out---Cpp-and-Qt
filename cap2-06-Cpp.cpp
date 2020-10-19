//Capítulo 02 - Introdução ao C++, Desafio 06: Pagamento Anual!

//Solução para o desafio usando apenas C++.

/*"Pagamento Anual
Suponha que um funcionário seja pago a cada duas semanas e ganhe 2.200 por período de pagamento. Em um ano, o funcionário recebe 26 vezes. Escreva um programa que defina as seguintes variáveis:
PayAmount -> Esta variável conterá o valor da remuneração que o funcionário recebe em cada período de pagamento. Inicialize a variável com 2200.0.
PayPeriods -> Esta variável manterá o número de períodos de pagamento em um ano. Inicialize a variável com 26.
Pagamento Anual -> Esta variável deterá o total da remuneração anual do funcionário, que será calculada.
O programa deve calcular o pagamento anual total do funcionário multiplicando o valor do pagamento do funcionário pelo número de períodos de pagamento em um ano e armazenar o resultado na variável Pagamento Anual. Exiba o pagamento anual total na tela."*/

#include <iostream>
#include <locale.h>
int main()
{
        setlocale(LC_ALL, "Portuguese");
    int Valor = {2200},
        Periodo = {26},
        Anual = {Periodo * Valor};
    std::cout << "Pagamento por período trabalhado: R$" << Valor;
    std::cout << "\nTotal de períodos trabalhados em um ano: " << Periodo;
    std::cout << "\nTotal recebido: R$" << Anual;
    return 0;
}
