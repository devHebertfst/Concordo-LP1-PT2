#include <iostream>
#include "Gerenciador.h"

int main()
{
  Sistema sistema;
  menu(sistema);
  for (Servidor &servidor : sistema.getAllServers())
  {
    for (Canal *canais : servidor.getCanais())
    {
      delete canais;
    }
  }
  return 0;
}