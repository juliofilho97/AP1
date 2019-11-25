#include "system.h"
#include "cadastro.h"

void System::menuInicial() {
	//ler arquivos

  int alternativa = -1;
  do {
      std::cout  << "\n\n"
         << " +++++++++++++ MENU INICIAL++++++++++++++++ \n"
         << "\n\n"
         << " Escolha uma das seguintes alternativas abaixo: \n"
         << " Digite '1' para: CADASTRAR Dados do Banco\n"
         << " Digite '2' para: CONSULTAR Dados do Banco\n"
         << " Digite '3' para: REMOVER Dados do Banco\n"
         << " Digite '4' para: EDITAR Dados do Banco \n"
         << " Digite '0' para: SAIR do Programa\n"
         << " \n ++++++++++++++++++++++++++++++++++++++++++++++ \n"
         << std::endl;

      std::cout << " Alternativa escolhida: ";
      std::cin >> alternativa;
      std::cin.ignore();

      switch(alternativa) {
        case 1 :
          menuCadastrar(); // Menu Inicial >> Cadastrar
          break;
        case 2 :
          menuConsultar(); // Menu Inicial >> Consultar
          break;
        case 3 :
          menuRemover(); // Menu Inicial >> Remover
          break;
        case 4 :
          menuEditar(); // Menu Inicial >> Editar
          break;
        case 0 : // Salva em arquivo CSV e sai do menu.
        	//Escreve nos arquivos e sai do menu
          break;
        default:
          std::cout << "\n\nAlternativa inválida! Tente outra vez.\n\n";
      }
  } while (alternativa != 0);
}

void System::menuCadastrar() {
	std::string funcao;

  int alternativa = -1;
  do {
      std::cout  << "\n\n"
         << " +++++++++++++ MENU CADASTRAR ++++++++++++++++ \n"
         << "\n\n"
         << " Escolha uma das seguintes alternativas abaixo: \n"
         << " Digite '1' para: Animal\n"
         << " Digite '2' para: Funcionário\n"
         << " Digite '0' para: SAIR do Programa\n"
         << " \n ++++++++++++++++++++++++++++++++++++++++++++++ \n"
         << std::endl;

      std::cout << " Alternativa escolhida: ";
      std::cin >> alternativa;
      std::cin.ignore();

      switch(alternativa) {
        case 1 :
          menuCadastrarA(); // Menu Inicial >> Cadastrar >> Animal
          break;
        case 2 :
          std::cout << "Informe a função do funcionário: " << std::endl;
          std::cin >> funcao;
          cadastrar_funcionario(funcao); // Menu Inicial >> Cadastrar >> Funcionário
          break;
        case 0 : // Salva em arquivo CSV e sai do menu.
        	//Escreve nos arquivos e sai do menu
          break;
        default:
          std::cout << "\n\nAlternativa inválida! Tente outra vez.\n\n";
      }
  } while (alternativa != 0);
}

void System::menuCadastrarA() {
	std::string classe;
	std::string tipo;

  int alternativa = -1;
  do {
      std::cout  << "\n\n"
         << " +++++++++++++ MENU CADASTRAR ANIMAIS ++++++++++++++++ \n"
         << "\n\n"
         << " Escolha uma das seguintes alternativas abaixo: \n"
         << " Digite '1' para: Anfíbio\n"
         << " Digite '2' para: Mamífero\n"
         << " Digite '3' para: Réptil\n"
         << " Digite '4' para: Ave\n"
         << " Digite '0' para: SAIR do Programa\n"
         << " \n ++++++++++++++++++++++++++++++++++++++++++++++ \n"
         << std::endl;

      std::cout << " Alternativa escolhida: ";
      std::cin >> alternativa;
      std::cin.ignore();

      switch(alternativa) {
        case 1 :
          std::cout << "Informe a classe: " << std::endl;
          std::cin >> classe;

          std::cout << "Informe o tipo: " << std::endl;
          std::cin >> tipo;

          cadastrar_anfibio(classe, tipo);
          break;

        case 2 :
          std::cout << "Informe a classe: " << std::endl;
          std::cin >> classe;

          std::cout << "Informe o tipo: " << std::endl;
          std::cin >> tipo;

          cadastrar_mamifero(classe, tipo);
          break;

          case 3 :
          std::cout << "Informe a classe: " << std::endl;
          std::cin >> classe;

          std::cout << "Informe o tipo: " << std::endl;
          std::cin >> tipo;

          cadastrar_reptil(classe, tipo);
          break;

          case 4 :
          std::cout << "Informe a classe: " << std::endl;
          std::cin >> classe;

          std::cout << "Informe o tipo: " << std::endl;
          std::cin >> tipo;

          cadastrar_ave(classe, tipo);
          break;

        case 0 : // Salva em arquivo CSV e sai do menu.
        //Escreve nos arquivos e sai do menu
          break;
        default:
          std::cout << "\n\nAlternativa inválida! Tente outra vez.\n\n";
      }
  } while (alternativa != 0);
}

void System::menuConsultar() {
	int id;
  int alternativa = -1;
  do {
      std::cout  << "\n\n"
         << " +++++++++++++ MENU CONSULTAR ++++++++++++++++ \n"
         << "\n\n"
         << " Escolha uma das seguintes alternativas abaixo: \n"
         << " Digite '1' para: Animal\n"
         << " Digite '2' para: Animal pelo id do funcionário\n"
         << " Digite '3' para: Funcionário\n"
         << " Digite '4' para: Quantidade de animais\n"
         << " Digite '5' para: Quantidade de funcionários\n"
         << " Digite '0' para: SAIR do Programa\n"
         << " \n ++++++++++++++++++++++++++++++++++++++++++++++ \n"
         << std::endl;

      std::cout << " Alternativa escolhida: ";
      std::cin >> alternativa;
      std::cin.ignore();

      switch(alternativa) {
        case 1 :
          std::cout << "Informe o id: " << std::endl;
          std::cin >> id;
          consultar_animais(id);
          break;

        case 2 :
          std::cout << "Informe o id do funcionário: " << std::endl;
          std::cin >> id;
          consultarAnimaisFuncionarios(id);
          break;

        case 3 :
          std::cout << "Informe o id: " << std::endl;
          std::cin >> id;
          consultar_funcionarios(id);
          break;

        case 4 :
          quantidade_animais_cadastrados();
          break;

        case 5 :
          quantidade_funcionarios_cadastrados();
          break;

        case 0 : // Salva em arquivo CSV e sai do menu.
        	//Escreve nos arquivos e sai do menu
          break;
        default:
          std::cout << "\n\nAlternativa inválida! Tente outra vez.\n\n";
      }
  } while (alternativa != 0);
}

void System::menuRemover() {
	int id;

  int alternativa = -1;
  do {
      std::cout  << "\n\n"
         << " +++++++++++++ MENU REMOVER ++++++++++++++++ \n"
         << "\n\n"
         << " Escolha uma das seguintes alternativas abaixo: \n"
         << " Digite '1' para: Animal\n"
         << " Digite '2' para: Funcionário\n"
         << " Digite '0' para: SAIR do Programa\n"
         << " \n ++++++++++++++++++++++++++++++++++++++++++++++ \n"
         << std::endl;

      std::cout << " Alternativa escolhida: ";
      std::cin >> alternativa;
      std::cin.ignore();

      switch(alternativa) {
        case 1 :
          std::cout << "Informe o id: " << std::endl;
          std::cin >> id;
          remover_animal(id);
          break;

        case 2 :
          std::cout << "Informe o id: " << std::endl;
          std::cin >> id;
          remover_funcionario(id);
          break;

        case 0 : // Salva em arquivo CSV e sai do menu.
        	//Escreve nos arquivos e sai do menu
          break;
        default:
          std::cout << "\n\nAlternativa inválida! Tente outra vez.\n\n";
      }
  } while (alternativa != 0);
}

void System::menuEditar() {
	int id;

  int alternativa = -1;
  do {
      std::cout  << "\n\n"
         << " +++++++++++++ MENU EDITAR ++++++++++++++++ \n"
         << "\n\n"
         << " Escolha uma das seguintes alternativas abaixo: \n"
         << " Digite '1' para: Animal\n"
         << " Digite '2' para: Funcionário\n"
         << " Digite '0' para: SAIR do Programa\n"
         << " \n ++++++++++++++++++++++++++++++++++++++++++++++ \n"
         << std::endl;

      std::cout << " Alternativa escolhida: ";
      std::cin >> alternativa;
      std::cin.ignore();

      switch(alternativa) {
        case 1 :
          std::cout << "Informe o id: " << std::endl;
          std::cin >> id;
          alterar_dados_animais(id);
          break;

        case 2 :
          std::cout << "Informe o id: " << std::endl;
          std::cin >> id;
          alterar_dados_funcionarios(id);
          break;

        case 0 : // Salva em arquivo CSV e sai do menu.
        	//Escreve nos arquivos e sai do menu
          break;
        default:
          std::cout << "\n\nAlternativa inválida! Tente outra vez.\n\n";
      }
  } while (alternativa != 0);
}