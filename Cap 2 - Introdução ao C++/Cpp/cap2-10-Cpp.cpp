//Capítulo 02 - Introdução ao C++, Desafio 10: Kilometros por Litro!

//Solução para o desafio usando apenas C++.

/*Milhas por galão
Um carro tem capacidade para 15 galões de gasolina e pode viajar 375 milhas antes de reabastecer. Escreva um
programa que calcula o número de milhas por galão que o carro pega. Mostra o resultado
na tela.
Dica: use a fórmula a seguir para calcular milhas por galão (MPG):
MPG
 = Milhares Acionados / Galões de Gás Usados
*/

#include <iostream>

int main ()
    {
    int Carro= 15, Viagem = 375, Km;

    Km = Viagem / Carro;
    std::cout << "Distância por litro de gasolina: " << Km;
    return 0;
    }
