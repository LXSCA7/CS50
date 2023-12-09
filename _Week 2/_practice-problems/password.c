#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool temLetra_min(char pass[], int quantidade);
bool temLetra_maiusc(char pass[], int quantidade);
bool temEspaco(char pass[], int quantidade);
bool temNumero(char pass[], int quatidade);
bool temPontuacao(char pass[], int quantidade);

int main(void) {
    char senha[90];

    // pede pro usuario inserir a senha
    printf("Insira sua senha: ");
    scanf("%s", senha);

    // declarando variaveis com aplicacao das funcoes
    int quantLetras = strlen(senha);
    bool minuscula = temLetra_min(senha, quantLetras);
    bool maiuscula = temLetra_maiusc(senha, quantLetras);
    bool espaco = temEspaco(senha, quantLetras);
    bool numero = temNumero(senha, quantLetras);
    bool pontuacao = temPontuacao(senha, quantLetras);


    // define se a senha é valida ou invalida
    if ((minuscula == true) && (maiuscula == true) && (espaco == false) && (numero == true) && (pontuacao == true)) {
        printf("Your password is valid!\n");
    } else {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

/* espaco das funcoes */

// funcao pra letra MINUSCULA
bool temLetra_min(char pass[], int quantidade) {

    // loop para saber se tem letra min. na senha
    for (int cont = 0; cont < quantidade; cont++) {
        if (islower(pass[cont])) {
        return true;
        }
    }
    return false; // caso nao tenha numero na senha
}

// funcao pra letra maiucula
bool temLetra_maiusc(char pass[], int quantidade) {
    for (int cont = 0; cont < quantidade; cont++) {
        if (isupper(pass[cont])) {
        return true;
        }
    }
    return false;
}

// funcao pra verificar espacos
bool temEspaco(char pass[], int quantidade) {
    for (int cont = 0; cont < quantidade; cont++) {
        if (isblank(pass[cont])) {
            return true;
        }
    }
    return false;
}

// funcao pra verificar se tem numero
bool temNumero(char pass[], int quantidade) {
    for (int cont = 0; cont < quantidade; cont++) {
        if (isdigit(pass[cont])) {
            return true;
        }
    }
    return false;
}

// funcao pra verificar se tem pontuacao
bool temPontuacao(char pass[], int quantidade) {
    for (int cont = 0; cont < quantidade; cont++) {
        if (ispunct(pass[cont])) {
            return true;
        }
    }
    return false;
}
