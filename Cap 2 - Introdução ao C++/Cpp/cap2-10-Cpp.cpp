//Cap�tulo 02 - Introdu��o ao C++, Desafio 10: Kilometros por Litro!

//Solu��o para o desafio usando apenas C++.

/*Milhas por gal�o
Um carro tem capacidade para 15 gal�es de gasolina e pode viajar 375 milhas antes de reabastecer. Escreva um
programa que calcula o n�mero de milhas por gal�o que o carro pega. Mostra o resultado
na tela.
Dica: use a f�rmula a seguir para calcular milhas por gal�o (MPG):
MPG
 = Milhares Acionados / Gal�es de G�s Usados
*/

#include <iostream>

int main ()
    {
    int Carro= 15, Viagem = 375, Km;

    Km = Viagem / Carro;
    std::cout << "Dist�ncia por litro de gasolina: " << Km;
    return 0;
    }
