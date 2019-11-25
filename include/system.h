/**
* @file system.h
* @brief Classe responsável por controlar todo o programa
* @author Júlio Cesar Fernandes Maia Filho e Letícia Moura Pinheiro
* @since 07/11/2019
* @date 25/11/2019
*/

#ifndef SYSTEM_H
#define SYSTEM_H

#include "petFera.h"

/**
* @brief Classe responsável por controlar todo o programa
* @details Nesta classe, o usuário pode controlar todo o programa PetFera, através das opções de menu
*/

class System {
public:
	System(); /**< Construtor padrão*/
    ~System(); /**< Destrutor padrão*/

	//lerArquivo();
	//escreverArquivo();

   void menuInicial();

   void menuCadastrar();
   void menuCadastrarA(); //Menu de cadastro de animais
   void menuConsultar();
   void menuRemover();
   void menuEditar();
};

#endif