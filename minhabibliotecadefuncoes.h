#ifndef MINHABIBLIOTECADEFUNCOES_H
#define MINHABIBLIOTECADEFUNCOES_H

#include <iostream>
using namespace std;

void limpa_tela();
void imprime_espaco (int TAM);
void menu ();
void desenha_retangulo(char X, char Y, int L, int C);
void caixa_com_texto_centralizado (string S, int N, char C, char Laterais);
double volume_esfera (double R);
int fatorial (int Num);
int fibonacci (int Termo);
int numero_regular(int Number);
unsigned long int combinacoes (int N, int P);
int palindromo (string T);
string converte_para_minusculas (string M);
string converte_para_maiusculas (string M);
void linha (char C, int N);
void ordenar_tres_numeros (int &X, int &Y, int &Z);
int tamanho_string (char P[]);
int compara_string (char X[], char Y[]);
int *converte_string_para_int (char A[], int *TAM);
char *remove_espacos_em_branco_inicio_e_fim (char P[]);
char **quebrar_string (char* A, char separador, int *QtdSubstr);
int buscar_na_string (char P[], char Q[]);
char *soma_numeros_gigantes (char P[], char Q[]);
void imprime_soma_numeros_gigantes (char A[], char B[], char C[]);
int *cria_vetor_int(int T);
void ler_vet_int (int *X, int qtd);
void maior_e_menor_do_vetor (int Vet[], int *Menor, int *Maior, int Tam);
void imprime_matriz (int l, int c, int **Matriz);
void deleta_matriz_int (int l, int **Matriz);
int **soma_matriz (int **A, int **B, int l, int c);
void ler_matriz (int l, int c, int **Matriz);
int **cria_matriz (int l, int c);
void mensagem_de_despedida();
void deleta_matriz_char (int l, char **Matriz);
void organiza_texto (string S, int N, char Laterais);

#endif // MINHABIBLIOTECADEFUNCOES_H
