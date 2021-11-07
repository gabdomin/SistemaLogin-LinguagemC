// BIBLIOTECAS IMPORTADAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
  // DECLARA��O DE PONTUA��O E ACENTUA��O EM PORTUGU�S
  setlocale(LC_ALL, "Portuguese");

  //DECLARA��O DE VARI�VEIS
  char Login [30];
  char Senha [30];
  char RegLogin [30];
  char RegSenha [30];
  char Nome [40];
  char Confirma [1];

  // REGISTRO DE UM USU�RIO
    printf("\n=================================");
    printf("\n====== REGISTRO DE USU�RIO ======");
    printf("\n=================================");

    printf("\n\n=================================");
    printf("\n=== PREENCHA TODOS OS CAMPOS ====");
    printf("\n=================================");

  // ENTRADA DAS INFORMA��ES DIGITADAS PELO USU�RIO
    printf("\n\nPrimeiro Nome: ");
      scanf("%s", Nome);

    printf("\n\nLogin: ");
      scanf("%s", RegLogin);

    printf("\n\nSenha: ");
      scanf("%s", RegSenha);

  //FINAL DO CADASTRO DAS INFORMA��ES
    printf("\n\n====== USU�RIO CADASTRADO ======");

    printf("\n\nAPERTE '5' PARA CONTINUAR: ");
      scanf("%s", Confirma);

  system("cls"); // LIMPAR A TELA PARA A P�GINA DE LOGIN

  // TELA DE LOGIN COM AS INFORMA��ES REGISTRADAS
    printf("\n=================================");
    printf("\n========= TELA DE LOGIN =========");
    printf("\n=================================");

    printf("\n\n=================================");
    printf("\n=== PREENCHA TODOS OS CAMPOS ====");
    printf("\n=================================");

    printf("\n\nLogin: ");
      scanf("%s", Login);

    printf("\nSenha: ");
      scanf("%s", Senha);

  // COMPARA��O DO LOGIN E SENHA DIGITADOS COM OS REGISTRADOS NO COME�O
  while((strcmp (Login, RegLogin) != 0) || (strcmp(Senha,RegSenha) != 0))
  {
  //SE FOREM DIFERENTES ELE VOLTA PARA A PARTE DE LOGIN
    printf("\n\n====== LOGIN E/OU SENHA INCORRETOS ======\n\n");

  system("pause");
  system("cls");

    printf("\n=================================");
    printf("\n========= TELA DE LOGIN =========");
    printf("\n=================================");

    printf("\n\n=================================");
    printf("\n=== PREENCHA TODOS OS CAMPOS ====");
    printf("\n=================================");

    printf("\n\n======== TENTE NOVAMENTE ========");

    printf("\n\nLogin: ");
      scanf("%s", Login);

    printf("\nSenha: ");
      scanf("%s", Senha);
  }
  // SE OS DADOS FOREM IGUAIS ELE LIMPA A TELA PARA A PR�XIMA PARTE
  system("cls");

  //MENSAGEM DE BOAS VINDAS USANDO O NOME REGISTRADO NO COME�O
    printf("======= Seja Bem-Vindo %s ========\n\n\n", Nome);

    printf("\nAPERTE '5' PARA VER O MENU PRINCIPAL: ");
      scanf("%s", Confirma);

  system("cls");

  return 0;
}
