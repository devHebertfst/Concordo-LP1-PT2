#include "Sistema.h"

/**
 * @brief Menu inicial
 *
 * @param sistema
 */
void menu(Sistema &sistema);
/**
 * @brief Criação de usuário
 *
 * @param sistema
 * @param entrada
 */
void criarUsuario(Sistema &sistema, std::string entrada);
/**
 * @brief Login de usuário
 *
 * @param sistema
 * @param entrada
 */
void loginUsuario(Sistema &sistema, std::string entrada);
/**
 * @brief Menu com usuário conectado
 *
 * @param sistema
 */
void menuLogado(Sistema &sistema);
/**
 * @brief Criação de servidores
 *
 * @param sistema
 * @param entrada
 */
void criarServidor(Sistema &sistema, std::string entrada);
/**
 * @brief Mudar a descrição do servidor
 *
 * @param sistema
 * @param entrada
 */
void descServidor(Sistema &sistema, std::string entrada);
/**
 * @brief Remover servidor
 *
 * @param sistema
 * @param entrada
 */
void removerServidor(Sistema &sistema, std::string entrada);
/**
 * @brief Mudar o codigo de convite do servidor
 *
 * @param sistema
 * @param entrada
 */
void setServerCode(Sistema &sistema, std::string entrada);
/**
 * @brief Entrar no servidor
 *
 * @param sistema
 * @param entrada
 */
void entrarServidor(Sistema &sistema, std::string entrada);
/**
 * @brief Menu do servidor
 *
 * @param sistema
 */
void criarCanais(Sistema &sistema, std::string entrada);
void servidor(Sistema &sistema);
void imprimirCanal(Sistema &sistema);
void entrarCanal(Sistema &sistema, std::string entrada);
void canal(Sistema &sistema);
void criarMensagem(Sistema &sistema, std::string entrada);
void enviarMensagem(Sistema &sistema, Mensagem mensagem);