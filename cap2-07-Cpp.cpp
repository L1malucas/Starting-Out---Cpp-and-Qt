//Capítulo 02 - Introdução ao C++, Desafio 07: Nível do Oceano!

//Solução para o desafio usando apenas C++.

/*"Assumindo que o nível dos oceanos está subindo atualmente em cerca de 1.5 milímetros por ano, escreva um programa que exiba: 1) O número de milímetros acima do nível atual que o nível do oceano estará em 5 anos;
2) O número de milímetros acima do nível atual que o nível do oceano estará em 7 anos;
3) O número de milímetros acima do nível atual que o nível do oceano estará em 10 anos."*/

#include <iostream>
int main()
{
    float NivelMar = {1.5};
    std::cout << "O nivel do oceano estará em 5 anos: " << (NivelMar* 5) << " milímetros mais alto.";
    std::cout << "\nO nivel do oceano estará em 7 anos: " << (NivelMar * 7) << " milimetros mais alto.";
       std::cout << "\nO nivel do oceano estará em 10 anos: " << (NivelMar * 10) << " milimetros mais alto.";
    return 0;
}
