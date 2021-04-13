//Capítulo 02 - Introdução ao C++, Desafio 09: Tamanho de dados!

//Solução para o desafio usando apenas C++.

/*"Tamanhos dos tipos de dados do Cyborg.
Você recebeu um emprego de programador em um supercomputador Cyborg. A fim de realizar alguns cálculos, você precisa saber quantos bytes cada tipo de dado a seguir usa: char, int, float e double. Você não tem qualquer documentação técnica, então você não pode procurar essas informações. Escreva um programa C ++ que irá determinar
a quantidade de memória usada por esses tipos e exibir as informações na tela."*/

#include <iostream>

int main()
{
    int a = {0};
    char b = 'b';
    float c = {0.0};
    double d = {0.0};

    std::cout << sizeof(a) << " bytes\n";
    std::cout << sizeof(b) << " bytes\n";
    std::cout << sizeof(c) << " bytes\n";
    std::cout << sizeof(d) << " bytes\n";
    return 0;
}

