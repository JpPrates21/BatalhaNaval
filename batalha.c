#include <stdio.h>

int main(){

//declaração das matrizes 10x10
int jog1[10][10] = {0};
int jog2[10][10] = {0};

//declaração das variaveis de repetição
int j, i;

//declaração de variaveis de posicionamento dos navios
int quantnavios  = 0; //quantidade de navios
int tamanho = 0; //tamanho dos navios
char p = 'p'; //posição dos navios
int x = 0; //cordenadas x
int y = 0; //cordenadas y
do
{
    scanf("%d", &quantnavios); //pega a quantidade de navios
} while (quantnavios < 1 || quantnavios > 20);//navios devem ser no minimo 1 e no maximo 20(caso seja falso, pede novamente para inserir a quantidade de navios)


//pede as cordenadas dos navios e insere na matriz
for(i=0; i < quantnavios; i++){
        do
        {
        scanf("%d %c %d %d", &tamanho, &p, &x, &y);//pede o tamanho, posição, cordenadas x e y
        } while (!(tamanho >= 1 && tamanho <= 5));//navios devem possuir no minimo tamanho 1 e no maximo 5 (caso seja falso pede para inserir novamente)
        
            for(j=0;tamanho > j;j++){//imprime as matrizes
                if (p == 'v')//imprime os navios verticais
    {
                jog1[(x+j) % 10][y] = 1;  
    }
                if (p == 'h')//imprime os navios horizontais 
    {
                jog1[x][(y+j) % 10] = 1;            
    }
}
}

do
{
    scanf("%d", &quantnavios); 
} while (quantnavios < 1 || quantnavios > 20);

for(i=0; i < quantnavios; i++){
    do
        {
        scanf("%d %c %d %d", &tamanho, &p, &x, &y);
        } while (!(tamanho >= 1 && tamanho <= 5));

            for(j=0;tamanho > j;j++){
                if (p == 'v')
    {
                jog2[(x+j) % 10][y] = 1;  
    }
                if (p == 'h')
    {
                jog2[x][(y+j) % 10] = 1;            
    }
}
}

int quantataques;//quantidade de ataques
int vez = 1;//vez de cada jogador
char ataj1[6];//ataques jogador 1   
char ataj2[6];//ataques jogador 2
int cordx = 0;//baixa eixo x
int cordy = 0;//baixa eixo y
int contadorj1 = 0;//contador de acertos jogador 1 
int contadorj2 = 0;//contador de acertos jogador 2
int contaespj1 = 0;//contador de especiais usados pelo jogador 1
int contaespj2 = 0;//contador de especiais usados pelo jogador 2

do
{
    scanf("%d", &quantataques);//pede a quantidade de ataques
} while (quantataques <= 0 || quantataques > 200 || quantataques % 2 != 0);//quantidade de ataques devem ser par maiores que 0 e no maximo 200(caso seja falso pede para inserir novamente)



//faz todo o processo de ataque
for (i = 0; i < quantataques; i++) {
        //vez jogador 1
        if (vez == 1) {
            getchar();
            scanf("%6[^\n]s", ataj1); //solicita os ataques
            
            //ataque normal
            if (ataj1[0] == 'n') {
                cordx = ataj1[2] - '0';
                cordy = ataj1[4] - '0';
                if (jog2[cordx][cordy] == 1) {
                    jog2[cordx][cordy] = 0;
                    contadorj1++;//aumenta o contador de acertos
                }
                else{
                    contaespj1 = 0;//reseta o contador de acertos em caso de erro
                }
            }

            //ataque especial
            if (ataj1[0] == 'e') {
                if (contadorj1 >= 2 && contaespj1 <= 5) {
                    //ataque especial vertical
                    if (ataj1[2] == 'v')
                    {
                        int especial = ataj1[4] - '0';
                    for (j = 0; j < 10; j++) {
                        jog2[j][especial] = 0;
                    }
                    contadorj1 = 0; // reseta o contador
                    contaespj1++; // aumenta o contador de especiais usados pelo jogador 1
                }
                    //ataque especial horizontal
                if (ataj1[2] == 'h')
                    {
                        int especial = ataj1[4] - '0';
                    for (j = 0; j < 10; j++) {
                        jog2[especial][j] = 0;
                    }
                    contadorj1 = 0; // reseta o contador   
                    contaespj1++; // aumenta o contador de especiais usados pelo jogador 1
                }
            }       
                    else {
                    contadorj1 = 0; // pula a vez e reseta o contador(em caso de uso indevido)
                }
            }
            vez = 2;//vez jogador 2(mesma logica do jogador 1)
        } else {
            getchar();
            scanf("%6[^\n]s", ataj2);

            if (ataj2[0] == 'n') {
                cordx = ataj2[2] - '0';
                cordy = ataj2[4] - '0';
                if (jog1[cordx][cordy] == 1) {
                    jog1[cordx][cordy] = 0;
                    contadorj2++;
                }
                else{
                    contaespj2 = 0;
                }
            }

            if (ataj2[0] == 'e') {
                if (contadorj2 >= 2) {
                    if (ataj2[2] == 'v'){
                        int especial = ataj2[4] - '0';
                    for (j = 0; j < 10; j++) {
                        jog1[j][especial] = 0;
                    }
                    contadorj2 = 0;
                    contaespj2++;
                    }
                    if (ataj2[2] == 'h')
                    {
                        int especial = ataj2[4] - '0';
                    for (j = 0; j < 10; j++) {
                        jog1[especial][j] = 0;
                    }
                    contadorj2 = 0;
                    contaespj2++;
                    }    
                } 
                else {
                    contadorj2 = 0;
                }
            }

            vez = 1;
        }
    }

//imprime a matriz na tela
printf ("   |" );
for ( int j = 0; j < 10; j ++) {
printf (" %d " , j );
}
printf ("\n " );
printf ("--+" );
for ( int j = 0; j < 10 -3; j ++) {
printf ("----");
}
printf("--");
printf("\n");
for ( int i = 0; i < 10; ++ i) {
printf (" %d |" , i );
for ( int j = 0; j < 10; ++ j) {
printf (" %d " , jog1[i][j]);
}
printf("\n");
}
printf("\n");
printf ("   |" );
for ( int j = 0; j < 10; j ++) {
printf (" %d " , j );
 }
printf ("\n " );
printf ("--+" );
for ( int j = 0; j < 10 -3; j ++) {
printf ("----");
}
printf("--");
printf("\n");
for ( int i = 0; i < 10; ++ i) {
printf (" %d |" , i );
for ( int j = 0; j < 10; ++ j) {
printf (" %d " , jog2[i][j]);
}
printf("\n");
}
printf("\n");

int naviosJ1 = 0; //quantidade de navios restantes do jogador 1
int naviosJ2 = 0; //quantidade de navios restantes do jogador 2

    // Contar os navios restantes para cada jogador
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (jog1[i][j] == 1) {
                naviosJ1++;
            }
            if (jog2[i][j] == 1) {
                naviosJ2++;
            }
        }
    }

    //vitoria do jogador 1
    if (naviosJ1 > naviosJ2 && naviosJ2 == 0) {
        printf("1");
    //vitoria do jogador 2
    } else if (naviosJ2 > naviosJ1 && naviosJ1 == 0) {
        printf("2");
    //empate em caso de ambos os jogadores possuirem navios
    } else if (naviosJ1 > 0 && naviosJ2 > 0) {
        printf("0");
    //empate em caso de ambos os jogadores não possuirem navios
    } else {
        printf("0");
    }
    return 0;
}