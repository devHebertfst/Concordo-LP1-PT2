#include "Canal.h"

Canal::Canal(std::string nome)
{
    this->nome = nome;
}

std::string Canal::getNome()
{
    return nome;
}

void CanalTexto::imprimir()
{
    std::cout << getNome() << std::endl;
}

void CanalVoz::imprimir()
{
    std::cout << getNome() << std::endl;
}