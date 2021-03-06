//biblioteca com as funções necessárias para o trabalho

struct resultado{

        float** calculo;
        float** rotulo;       
};

typedef struct resultado Resultado;

float euclidiana(float *dadoTeste, float *dadoTreino, int colTeste);

float minkowsky(float *dadoTeste, float *dadoTreino, int colteste, float *r, int posicaoLeitura);

float chebyshev(float *dadoTeste, float *dadoTreino, int colTeste);

Resultado calculaKNN(float **dadoTeste, float **dadoTreino, int colteste, float *r, int x, int linTeste, int linTreino, char *tipo, int posi, Resultado resultadoCalculo);

void ordena(float *vetor, int posicaoInicio, int posicaoFim, float *rotulo);

int* rotulador(Resultado resultado, int *k, int *rotulos, int linTeste, int linTreino, int posi);

float numeroDeRotulos(Resultado resultado, int linTeste, int linTreino);

void comparador (float **testeCSV, int *rotulos, int linTeste, int colTeste, float *acuracia, int **confusao, int z);

void criaArquivo(char *predicao, float *acuracia, int **confusao, int *rotulos, int posi, int z, int linTeste);


