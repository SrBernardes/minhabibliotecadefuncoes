#include "minhabibliotecadefuncoes.h"

void imprime_espaco (int TAM)
{
    for (int i=0; i<TAM; i++)
    {
        cout << " ";
    }
}

void menu ()
{
    caixa_com_texto_centralizado ("MENU DAS FUNÇÕES", 120, '_', '*');
    cout << endl;
    cout << "(01) Desenha retângulo";
    imprime_espaco(55);
    cout << "(11) Ordenar três números" << endl;
    cout << "(02) Volume esfera";
    imprime_espaco(59);
    cout << "(12) Tamanho string" << endl;
    cout << "(03) Fatorial";
    imprime_espaco(64);
    cout << "(13) Compara string" << endl;
    cout << "(04) Fibonacci";
    imprime_espaco(63);
    cout << "(14) Converte string para int" << endl;
    cout << "(05) Número regular";
    imprime_espaco(58);
    cout << "(15) Remove espaços em branco início e fim" << endl;
    cout << "(06) Combinações";
    imprime_espaco(61);
    cout << "(16) Quebrar string" << endl;
    cout << "(07) Palíndromo";
    imprime_espaco(62);
    cout << "(17) Buscar na string" << endl;
    cout << "(08) Converte para minúsculas";
    imprime_espaco(48);
    cout << "(18) Soma números gigantes" << endl;
    cout << "(09) Converte para maiúsculas";
    imprime_espaco(48);
    cout << "(19) Maior e menor do vetor" << endl;
    cout << "(10) Centralizar texto";
    imprime_espaco(55);
    cout << "(20) Soma matriz" << endl;
    linha('_', 120);
}

void desenha_retangulo(char X, char Y, int L, int C)
{
    for (int i=0; i<L; i++)
    {
        for(int j=0; j<C; j++)
        {
            if (i==0 || i==L-1 || j==0 || j==C-1)
            {
                cout << X;
            }
            else
            {
                cout << Y;
            }
        }
        cout << endl;
    }
}

void organiza_texto (string S, int N, char Laterais)
{
    int TAM = S.size();

    int P = (N-TAM-2)/2;

    cout << Laterais;

    if (TAM>N-2)
    {
        for (int i=0; i<N-2; i++)
        {
            cout << S[i];
        }
    }

    else if ((N%2!=0 && TAM%2==0) || (N%2==0 && TAM%2!=0))
    {
        imprime_espaco(P);
        cout << S;
        imprime_espaco(P+1);
    }

    else
    {
        imprime_espaco(P);
        cout << S;
        imprime_espaco(P);
    }

    cout << Laterais << endl;
}

void caixa_com_texto_centralizado (string S, int N, char C, char Laterais)
{
    linha (C, N);
    organiza_texto (S, N, Laterais);
    linha (C, N);
}

double volume_esfera (double R)
{
    return (4.0 * 3.14 * R * R * R)/3.0;
}

int fatorial (int Num)
{
    int F=Num;
    if (Num==0)
    {
        return 1;
    }
    for (int i=Num; i>1; i--)
    {
        F*=i-1;
    }
    return F;
}

int fibonacci (int Termo)
{
    int F[Termo];

    F[0]=0;
    F[1]=1;

    for (int i=2; i<=Termo; i++)
    {
        F[i] = F[i-1] + F[i-2];
    }

    return F[Termo-1];
}

int numero_regular(int Number)
{
    int i=2;

    while (Number%i==0)
    {
        Number/=i;
    }
    i++;
    while (Number%i==0)
    {
        Number/=i;
    }
    i+=2;
    while (Number%i==0)
    {
        Number/=i;
    }
    if (Number==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

unsigned long int combinacoes (int N, int P)
{
    unsigned long int C;

    C = fatorial(N)/(fatorial(P) * fatorial(N-P));

    return C;
}

int palindromo (string T)
{
    int TAM = T.size(), V;

    for (int i=0, j=TAM-1; i<TAM-1; i++, j--)
    {
        if (T[i]==T[j])
        {
            V=1;
        }
        else
        {
            V=0;
        }
    }
    return V;
}

string converte_para_minusculas (string M)
{
    int TAM = M.size();

    for (int i=0; i<TAM; i++)
    {
        if (M[i]>=65 && M[i]<=90)
        {
            M[i]+=32;
        }
    }
    return M;
}

string converte_para_maiusculas (string M)
{
    int TAM = M.size();

    for (int i=0; i<TAM; i++)
    {
        if (M[i]>=97 && M[i]<=122)
        {
            M[i]-=32;
        }
    }
    return M;
}

void linha (char C, int N)
{
    for(int i=0; i<N; i++)
    {
        cout << C;
    }
    cout << endl;
}

void ordenar_tres_numeros (int &X, int &Y, int &Z)
{
    int N[3], AUX;
    N[0] = X;
    N[1] = Y;
    N[2] = Z;

    for (int j=0; j<2; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            if (N[i] > N[i + 1])
            {
                AUX = N[i];
                N[i] = N[i + 1];
                N[i + 1] = AUX;
            }
        }
    }
    X=N[0];
    Y=N[1];
    Z=N[2];
}

int tamanho_string (char P[])
{
    int i;
    for(i=0; P[i]!='\0'; i++);
    return i;
}

int compara_string (char X[], char Y[])
{
    int i;
    for (i=0; X[i] == Y[i] && (X[i] != '\0' || Y[i] != '\0'); i++);

    if (X[i] == '\0' && Y[i] == '\0')
    {
        return 0;
    }
    else if (X[i] < Y[i])
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

int *converte_string_para_int (char A[], int *TAM)
{
    *TAM = tamanho_string(A);
    int *C = new int [*TAM];

    for (int i=0; i<*TAM; i++)
    {
        C[i] = A[i]-'0';
    }
    return C;
}

char* remove_espacos_em_branco_inicio_e_fim (char P[])
{
    int i = tamanho_string(P);

    if (P[0]!=' ' && P[i-1]!=' ')
    {
        return P;
    }

    if (P[0]==' ' && P[i-1]==' ')
    {
        char *C = new char[i-1];
        for (int j=0; j<i-2; j++)
        {
            C[j] = P[j+1];
        }
        C[i-2]='\0';
        return C;
    }

    else
    {
        char *C = new char[i];
        for (int j=0; j<i-1; j++)
        {
            if (P[0]!=' ' && P[i-1]==' ')
            {
                C[j] = P[j];
            }
            else if (P[0]==' ' && P[i-1]!=' ')
            {
                C[j] = P[j+1];
            }
        }
        C[i-1]='\0';
        return C;
    }
}

char** quebrar_string (char* A, char separador, int *QtdSubstr)
{
    int TAM, p=0;

    for (TAM=0; A[TAM]!='\0'; TAM++)
    {
        if (A[TAM]==separador)
        {
            p++;
        }
    }

    int TamVetor[p+1], l;

    for (int i=0, k=0, j; i<TAM && k!=p; k++, i++)
    {
        j=0;
        while (A[i]!=separador)
        {
            j++;
            i++;
        }
        TamVetor[k]=j;
        l=i;
    }
    TamVetor[p] = TAM - l - 1;

    int QtdString = p+1, Somador=0;

    char** P = new char*[QtdString];

    for (int i=0; i<QtdString; i++)
    {
        char* S = new char[TamVetor[i]+1];
        int j;
        for (j=0; j<TamVetor[i]; j++)
        {
            S[j] = A[Somador+j];
        }
        Somador += TamVetor[i]+1;


        S[TamVetor[i]] = '\0';

        P[i] = S;
    }

    *QtdSubstr = QtdString;

    return P;
}

int buscar_na_string (char P[], char Q[])
{
    int i = tamanho_string(P), j = tamanho_string(Q);
    if (j>i)
    {
        return -1;
    }
    for (int k=0; k<i; k++)
    {
        int m=0;
        for (int l=0, n=k; l<j; l++, n++)
        {
            if (P[n]==Q[l])
            {
                m++;
            }
        }
        if (m==j)
        {
            return k;
        }
    }
    return -1;
}

int maior (int A, int B)
{
    int Maior;
    if (A>B)
        Maior = A;
    else
        Maior = B;
    return Maior;
}

char* soma_numeros_gigantes (char P[], char Q[])
{
    int i = tamanho_string(P), j = tamanho_string(Q), k, AC=0, Maior = maior(i,j);
    char N;
    char *Soma = new char[Maior+2];
    Soma[Maior+1] = '\0';

    for (k=Maior, i=i-1, j=j-1; i>=0 || j>=0; k--, i--, j--)
    {
        if (i<0 && j>=0)
        {
            N = Q[j] + AC;
        }
        else if (j<0 && i>=0)
        {
            N = P[i] + AC;
        }
        else
        {
            N = P[i] + Q[j] + AC - '0';
        }
        AC=0;
        if (N>'9')
        {
            N-=10;
            AC=1;
        }
        Soma[k]=N;
    }

    if (AC==1)
    {
        Soma[0]='1';
    }
    else
    {
        for (int x=0; x<Maior+1; x++)
        {
            Soma[x]=Soma[x+1];
        }
    }

    return Soma;
}

void imprime_soma_numeros_gigantes (char A[], char B[], char C[])
{
    int TA= tamanho_string(A), TB = tamanho_string(B);
    if (TA>TB)
    {
        cout << "\n  " << A << "\n+ ";
        imprime_espaco(TA-TB);
        cout << B << "\n  ";
    }
    else if (TB>TA)
    {
        cout << "\n  " << B << "\n+ ";
        imprime_espaco(TB-TA);
        cout << A << "\n  ";
    }
    else
    {
        cout << "\n  " << A << "\n+ " << B << "\n  ";
    }

    for (int i=0; i<maior(TA,TB); i++)
    {
        cout << "_";
    }
    cout << endl;
    if (tamanho_string(C)>maior(TA,TB))
    {
        cout << " ";
    }
    else
    {
        cout << "  ";
    }
    cout << C << endl;
}

int *cria_vetor_int(int T)
{
    int *P = new int[T];
    return P;
}

void ler_vet_int (int *X, int qtd)
{
    for (int i=0; i<qtd; i++)
    {
        cin >> X[i];
    }
}

void maior_e_menor_do_vetor (int Vet[], int *Menor, int *Maior, int Tam)
{
    int X=2000000000, Y=-2000000000;
    for (int i=0; i<Tam; i++)
    {
        if (Vet[i]<X)
        {
            X = Vet[i];
            *Menor=i;
        }
        if (Vet[i]>Y)
        {
            Y = Vet[i];
            *Maior=i;
        }
    }
}

int **cria_matriz (int l, int c)
{
    int **Matriz = new int *[l];
    for (int i=0; i<l; i++)
    {
        Matriz[i] = new int [c];
    }

    return Matriz;
}

void ler_matriz (int l, int c, int **Matriz)
{
    for (int i=0; i<l; i++)
    {
        for (int j=0; j<c; j++)
        {
            cin >> Matriz[i][j];
        }
    }
}

int **soma_matriz (int **A, int **B, int l, int c)
{
    int **Soma = cria_matriz (l, c);
    for (int i=0; i<l; i++)
    {
        for (int j=0; j<c; j++)
        {
            Soma[i][j] = A[i][j] + B[i][j];
        }
    }
    return Soma;
}

void deleta_matriz_int (int l, int **Matriz)
{
    for (int i=0; i<l; i++)
    {
        delete Matriz[i];
    }
    delete Matriz;
}

void deleta_matriz_char (int l, char **Matriz)
{
    for (int i=0; i<l; i++)
    {
        delete Matriz[i];
    }
    delete Matriz;
}

void imprime_matriz (int l, int c, int **Matriz)
{
    for (int i=0; i<l; i++)
    {
        cout << "|";
        for (int j=0; j<c; j++)
        {
            cout << Matriz[i][j] << "|";
        }
        cout << endl;
    }
}

void mensagem_de_despedida()
{
    imprime_espaco(20);
    linha('x', 80);
    imprime_espaco(20);
    organiza_texto("MUITO OBRIGADO POR TESTAR AS FUNÇÕES!!!", 80, 'x');
    imprime_espaco(20);
    organiza_texto("Aluno: Samuel Bernardes de Souza", 80, 'x');
    imprime_espaco(20);
    organiza_texto ("Matrícula: 20192002800346", 80, 'x');
    imprime_espaco(20);
    organiza_texto ("FIM.", 80, 'x');
    imprime_espaco(20);
    linha('x', 80);
}

void limpa_tela()
{
    #ifdef __linux__
        system("cls");
    #else
        system("cls");
    #endif
}
