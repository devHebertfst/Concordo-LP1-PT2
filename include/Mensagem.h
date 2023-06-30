#ifndef MENSAGEM_H
#define MENSAGEM_H

#include <iostream>
#include <string>

class Mensagem
{
private:
  std::string dataHora;
  int enviadaPor;
  std::string conteudo;

public:
  Mensagem();
  Mensagem(std::string dataHora, int enviadaPor, std::string conteudo);
  std::string getDataHora() const;
  int getEnviadaPor() const;
  std::string getConteudo() const;
};

#endif