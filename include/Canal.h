#ifndef CANAL_H
#define CANAL_H

#include <string>
#include <vector>
#include "Mensagem.h"

class Canal
{
protected:
  std::string nome;

public:
  Canal(std::string nome);
  std::string getNome();
  virtual void imprimir() = 0;
  virtual ~Canal() = default;
};

class CanalTexto : public Canal
{
private:
  std::vector<Mensagem> mensagens;

public:
  CanalTexto(std::string nome) : Canal(nome) {}
  virtual void imprimir();
};

class CanalVoz : public Canal
{
private:
  Mensagem ultimaMensagem;

public:
  CanalVoz(std::string nome) : Canal(nome) {}
  virtual void imprimir();
};

#endif