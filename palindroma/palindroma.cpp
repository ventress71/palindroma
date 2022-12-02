// palindroma.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

void Palindroma(std::string palabra, int longitudDeLaPalabra = 0, int indice = 0, int indiceInverso = -1) {

    if (indiceInverso == -1) {
        indiceInverso = longitudDeLaPalabra - 1 - indice;
    }

    if (indice < longitudDeLaPalabra) {

        palabra[indice] = tolower(palabra[indice]);
        palabra[indiceInverso] = tolower(palabra[indiceInverso]);

        if (palabra[indice] == palabra[indiceInverso]) {
            indice++;
            indiceInverso--;
            Palindroma(palabra, indice, longitudDeLaPalabra, indiceInverso);
        }
        else {
            std::cout << "La palabra no es palindroma\n";
        }
    }
    else {
        std::cout << "La palabra es palindroma\n";
    }
}

int main()
{
    std::string palabra;
    bool otra;

    std::cout << "Ingrese una palabra para verificar si es palindroma\n";
    std::getline(std::cin, palabra);

    Palindroma(palabra, size(palabra));
}