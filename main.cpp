#include <iostream>
#include "minhabibliotecadefuncoes.h"
#include <locale.h>

using namespace std;

int main ()
{
    setlocale(LC_ALL,"portuguese");

    int N;
    menu();
    imprime_espaco(39);
    cout << "Escolha o número da função para testar: ";
    cin >> N;

    while (N!=0)
    {
        limpa_tela();

        if(N==1)
        {
            caixa_com_texto_centralizado ("01. Desenha Retângulo", 120, '*', '*');
            char Contorno, Preenche;
            int L, C;
            cout << "Digite o caractere de contorno: ";
            cin >> Contorno;
            cout << "Digite o caractere de preenchimento: ";
            cin >> Preenche;
            cout << "Digite a quantidade de linhas: ";
            cin >> L;
            cout << "Digite a quantidade de colunas: ";
            cin >> C;

            desenha_retangulo(Contorno, Preenche, L, C);
        }

        else if (N==2)
        {
           caixa_com_texto_centralizado ("02. Volume Esfera", 120, '*', '*');
           double R;
           cout << "Digite o raio da esfera:\n";
           cin >> R;
           cout << "Volume da esfera = " << volume_esfera(R) << endl;
        }

        else if (N==3)
        {
           caixa_com_texto_centralizado ("03. Fatorial", 120, '*', '*');
           int Num;

           cout << "Digite um número inteiro: ";
           cin >> Num;

           cout << "Fatorial de " << Num << " = " << fatorial (Num) << endl;
        }

        else if (N==4)
        {
           caixa_com_texto_centralizado ("04. Fibonacci", 120, '*', '*');
           int Termo;
           cout << "Digite um termo da série de Fibonacci: ";
           cin >> Termo;

           cout << "Valor do " << Termo << "º termo de Fibonacci = " << fibonacci(Termo) << endl;
        }

        else if (N==5)
        {
           caixa_com_texto_centralizado ("05. Número Regular", 120, '*', '*');
           int Number;

           cout << "Digite um número inteiro: ";
           cin >> Number;

           if (numero_regular(Number)==1)
           {
               cout << "O número " << Number << " é regular.\n";
           }
           else
           {
               cout << "O número " << Number << " não é regular.\n";
           }
        }

        else if (N==6)
        {
           caixa_com_texto_centralizado ("06. Combinações", 120, '*', '*');
           int N, P;
           cout << "Digite o valor de N: ";
           cin >> N;

           cout << "Digite o valor de P: ";
           cin >> P;

           cout << "Combinação = " << combinacoes(N,P) << endl;
        }

        else if (N==7)
        {
           caixa_com_texto_centralizado ("07. Palíndromo", 120, '*', '*');
           string T;

           cin.ignore();
           cout << "Digite um texto: ";
           getline (cin, T);

           if (palindromo(T)==1)
           {
               cout << "O texto é palíndromo.\n";
           }
           else
           {
               cout << "O texto não é palíndromo.\n";
           }
        }

        else if (N==8)
        {
           caixa_com_texto_centralizado ("08. Converte para minúsculas", 120, '*', '*');

           string Maiuscula;

           cin.ignore();
           cout << "Digite um texto: ";
           getline (cin, Maiuscula);

           cout << "Texto com letras minúsculas: ";
           cout << converte_para_minusculas (Maiuscula) << endl;
        }

        else if (N==9)
        {
           caixa_com_texto_centralizado ("09. Converte para maiúsculas", 120, '*', '*');

           string Minuscula;

           cin.ignore();
           cout << "Digite um texto: ";
           getline (cin, Minuscula);

           cout << "Texto com letras maiúsculas: ";
           cout << converte_para_maiusculas(Minuscula) << endl;
        }

        else if (N==10)
        {
           caixa_com_texto_centralizado ("10. Centralizar texto", 120, '*', '*');

           string S;
           unsigned int N;
           char C;

           cin.ignore();
           cout << "Digite um texto: ";
           getline(cin, S);
           cout << "Digite um número inteiro, que represente o tamanho da caixa de texto: ";
           cin >> N;
           cout << "Digite o caractere que será o contorno da caixa de texto: ";
           cin >> C;
           cout << endl;
           caixa_com_texto_centralizado(S, N, C, C);
        }

        else if (N==11)
        {
           caixa_com_texto_centralizado ("11. Ordenar três números", 120, '*', '*');

           int A, B, C;

           cout << "Digite três números inteiros: ";
           cin >> A >> B >> C;

           ordenar_tres_numeros(A, B, C);

           cout << "Valores ordenados:\n";
           cout << A << endl << B << endl << C << endl;
        }

        else if (N==12)
        {
           caixa_com_texto_centralizado ("12. Tamanho string", 120, '*', '*');

           char Q[100];

           cin.ignore();
           cout << "Digite um texto: ";
           cin.getline (Q, 100);

           cout << "\nQuantidade de caracteres do texto: " << tamanho_string (Q) << endl;
        }

        else if (N==13)
        {
           caixa_com_texto_centralizado ("13. Compara string", 120, '*', '*');

           char A[100], B[100];

           cin.ignore();
           cout << "Digite a primeira string: ";
           cin.getline (A, 100);

           cout << "Agora, digite a segunda string: ";
           cin.getline (B, 100);

           if (compara_string(A, B)==-1)
           {
               cout << "A primeira string é lexicograficamente anterior à segunda.\n";
           }
           else if (compara_string(A, B)==0)
           {
               cout << "As duas strings são iguais.\n";
           }
           else
           {
               cout << "A primeira string é lexicograficamente posterior à segunda.\n";
           }
        }

        else if (N==14)
        {
           caixa_com_texto_centralizado ("14. Converte string para int", 120, '*', '*');
           int t;
           char X[100];

           cin.ignore();
           cout << "Digite um número inteiro positivo: ";
           scanf("%s", X);

           int *C = converte_string_para_int(X, &t);

           cout << "Número na forma de inteiro: ";
           for (int i=0; i<t; i++)
           {
               cout << C[i];
           }
           cout << endl;
           delete C;
        }

        else if (N==15)
        {
           caixa_com_texto_centralizado ("15. Remove espaços em branco início e fim", 120, '*', '*');

           char X[300];
           cin.ignore();
           cout << "Digite um texto:\n";
           cin.getline(X, 300);

           char *C = remove_espacos_em_branco_inicio_e_fim(X);

           cout << "Texto sem espaço no começo e no final:\n" << C << endl;
           delete C;
        }

        else if (N==16)
        {
           caixa_com_texto_centralizado ("16. Quebrar string", 120, '*', '*');

           char X[500], separador;

           cin.ignore();
           cout << "String: ";
           cin.getline(X,500);

           cout << "Caractere: ";
           cin >> separador;

           int Qtd,i;
           char** P = quebrar_string (X, separador, &Qtd);

           cout << "Vetor de strings resultante: ";
           for (i=0; i<Qtd-1; i++)
           {
               cout << P[i] << ", ";
           }
           cout << P[i] << endl;

           cout << "Quantidade de substrings: " << Qtd << endl;
           deleta_matriz_char(Qtd, P);
        }

        else if (N==17)
        {
           caixa_com_texto_centralizado ("17. Buscar na string", 120, '*', '*');

           char X[100], Y[100];
           cin.ignore();
           cout << "String: ";
           cin.getline(X,100);

           cout << "Texto para buscar dentro da string: ";
           cin.getline(Y,100);

           if (buscar_na_string(X,Y) == -1)
           {
               cout << "A string " << Y << " não foi encontrada na string " << X << "\n";
           }
           else
           {
            cout << "\nPosição da ocorrência: ";
            cout << buscar_na_string(X, Y) << endl;
           }
        }

        else if (N==18)
        {
           caixa_com_texto_centralizado ("18. Soma números gigantes", 120, '*', '*');

           char X[100], Y[100];
           cin.ignore();
           cout << "Digite um número inteiro positivo, representando a 1ª parcela da soma:\n";
           scanf("%s", X);

           cout << "Digite um número inteiro positivo, representando a 2ª parcela da soma:\n";
           scanf("%s", Y);
           char *C = soma_numeros_gigantes(X, Y);

           cout << "\nRESULTADO DA SOMA:";
           imprime_soma_numeros_gigantes(X, Y, C);

           delete C;
        }

        else if (N==19)
        {
           caixa_com_texto_centralizado ("19. Maior e menor do vetor", 120, '*', '*');

           int Tamanho, Menor=0, Maior=0;
           cout << "Digite o tamanho do Vetor:\n";
           cin >> Tamanho;
           int *C = cria_vetor_int(Tamanho);

           cout << "Digite os elementos do Vetor:\n";
           ler_vet_int(C, Tamanho);

           maior_e_menor_do_vetor(C, &Menor, &Maior, Tamanho);
           if (Maior == Menor)
           {
                cout << "Todos elementos do vetor possuem o mesmo valor, ou seja, todos posssuem valor " << C[0] << ".\n";
           }
           else
           {
                cout << "Índice do Menor: " << Menor << endl;
                cout << "Índice do Maior: " << Maior << endl;
           }
           delete C;
        }

        else if (N==20)
        {
           caixa_com_texto_centralizado ("20. Soma matriz", 120, '*', '*');

           int l, c;
           cout << "PARA SOMAR DUAS MATRIZES, É NECESSÁRIO QUE TENHAM A MESMA ORDEM, OU SEJA, MESMA QUANTIDADE DE LINHAS E COLUNAS.\n";
           cout << "\nSendo assim, digite a quantidade de linhas das matrizes A e B:\n";
           cin >> l;
           cout << "\nDigite a quantidade de colunas das matrizes A e B:\n";
           cin >> c;

           while (l==0  || c==0)
           {
               limpa_tela();
               caixa_com_texto_centralizado ("20. Soma matriz", 120, '*', '*');
               cout << "Não existe matriz de linha ou coluna igual a ZERO;\n";
               cout << "\nDigite novamente a quantidade de linhas das matrizes A e B:\n";
               cin >> l;
               cout << "\nDigite novamente a quantidade de colunas das matrizes A e B:\n";
               cin >> c;
           }

           int **A = cria_matriz (l, c);
           int **B = cria_matriz (l, c);
           cout << "\nDigite os elementos da Matriz A:\n";
           ler_matriz(l, c, A);
           cout << "\nDigite os elementos da Matriz B:\n";
           ler_matriz(l, c, B);

           int **C = soma_matriz (A, B, l, c);
           cout << "\nElementos da Matriz SOMA:\n";
           imprime_matriz(l, c, C);

           deleta_matriz_int(l, A);
           deleta_matriz_int(l, B);
           deleta_matriz_int(l, C);
        }

        cout << endl;
        menu();

        cout << endl;
        imprime_espaco(20);
        linha ('"', 80);
        imprime_espaco(20);
        organiza_texto ("Digite 0 para encerrar o programa", 80, '"');
        imprime_espaco(20);
        organiza_texto ("ou", 80, '"');
        imprime_espaco(20);
        linha ('"', 80);
        imprime_espaco(39);
        cout << "Escolha o número da função para testar: ";
        cin >> N;
    }

    cout << endl;
    mensagem_de_despedida();

    return 0;
}

