#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <locale.h>

int main(){

        //Foram adicionas al�m das bibliotecas convencionais algumais demais para calculos e outra para aceitar o idiomar porutgues na aplica��o
        setlocale(LC_ALL, "Portuguese");


        //Tipagem das v�riaveis

        int opr;
        float resultado, LOGARTIMO,LOGARTIMANDO,BASE;

        resultado = 0;
        LOGARTIMANDO = 0;
        LOGARTIMO = 0;
        BASE = 0;
        opr = 0;


         //SWITCH/CASE para direcionar a entrada de dados e calculos, est� dentro de um la�o,DO/WHILE,
         //enquanto o usu�rio desejar � retornado a op��o dos c�lculos

        do{
            printf(" Digite 1 para calcular a Base\n Digite 2 para calcular o Logaritmo\n Digite 3 para calcular o Logartimando \n Digite 4 para sair \n");
            scanf("%d",&opr);

            printf("\n");



         switch(opr){
         case 1:


             //CALCULA A RAIZ DO LOGARTIMANDO,O INDICE SER� O VALOR DO LOGARTIMO

             printf(" Digite o valor para o logartmando: \n ");
             scanf("%f",&LOGARTIMANDO);

             printf(" Digite o valor para o logartmo: \n ");
             scanf("%f",&LOGARTIMO);

             if( LOGARTIMO != 0){


                   resultado = pow(LOGARTIMANDO, 1.0/LOGARTIMO);

                    printf("Resultado da base � %.2f \n",resultado);
                    printf("");
             }else{

                   printf(" A base � igual a 1 pois o logartimo � 0 \n");
                   printf("");

             }
        break;


         case 2:

             //Calculo do Logartimo, base 10 ou outra base

             printf(" Digite o valor para a base: \n ");
             scanf("%f",&BASE);

             printf(" Digite o valor para o logartimando: \n ");
             scanf("%f",&LOGARTIMANDO);

             if( BASE <=0 ){

                printf("N�o atende as condi��es de exist�ncia pois a base � igual a zero \n");
             }else{
                 if (BASE == 10){

                    resultado = log10(LOGARTIMANDO);
                    printf(" O resultado � %.2f \n", resultado);



                 }else{

                    resultado = log10(LOGARTIMANDO)/log10(BASE);
                    printf(" O resultado � %.2f \n", resultado);

                 }


             }

             break;

         case 3:

             //Calculo do Logaritmando

            printf(" Digite o valor para a base: \n ");
            scanf("%f",&BASE);

            printf(" Digite o valor para o logartimo: \n ");
            scanf("%f",&LOGARTIMO);

            if(BASE <=0){
            printf("N�o atende as condi��es de exist�ncia pois a base � igual ou menor a zero \n");

            }else{

            resultado = pow(BASE,LOGARTIMO);
            printf(" O resultado do logaritmando � %.2f \n", resultado);

            }

            break;

            case 4:
            exit(0);
            break;



            default:
            printf("Digite um valor v�lido \n");


            printf("Digite 1 para continuar ou qualquer tecla para sair \n");
            scanf("%d",&opr);

            if(opr != 1)
            {exit(0);}

            break;

        }

        }while(opr = 1);

        getch();

        return 0;


}


