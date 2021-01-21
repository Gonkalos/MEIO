#include <stdio.h>
#include <stdlib.h>


void subtrairVetores (double vetor1[169], double vetor2[169], double res[169]){
    for (int i = 0; i < 169 ; i++){
        res[i] = vetor2[i] - vetor1[i];
    }
}


void somarVetores (double vetor1[169], double vetor2[169]){
    for (int i = 0; i < 169 ; i++){
        vetor2[i] += vetor1[i];
    }
}


void multiplicaMatrizVetor (double matrix[169][169], double vetor[169] , double res[169]){
    for (int i = 0; i < 169 ; i++){
        res[i] = 0;
        for (int j = 0; j < 169 ; j++){
            res[i] += matrix[i][j] * vetor[j];
        }
    }
}


void maiorMenor (double* maior, double* menor, double res[169]){
    *maior = res[0];
    *menor = res[0];
    for (int i = 1; i < 169; i++){
        if (*maior < res[i]){
            *maior = res[i];
        }
        if (*menor > res[i]){
            *menor = res[i];
        }
    }
}


void max (double* num1, double num2){
    if (*num1 < num2) *num1 = num2;
}


void maioresElems (double q0[169],double q1[169],double q2[169],double q3[169],double q4[169],double q5[169],double q6[169],double res[169]){
    double maior;
    for(int i = 0; i < 169;i++){
        maior = q0[i];
        max(&maior,q1[i]);
        max(&maior,q2[i]);
        max(&maior,q3[i]);
        max(&maior,q4[i]);
        max(&maior,q5[i]);
        max(&maior,q6[i]);
        res[i] = maior;
    }
}


int main(){

    double pedidos1[13] = { 0.0468, 0.1572, 0.2220, 0.2340, 0.1656, 0.0956, 0.0452, 0.0192, 0.0104, 0.0032, 0.0008, 0.0000, 0.0000 };

    double entregas1[13] = { 0.0456, 0.1428, 0.2112, 0.2192, 0.1756, 0.1060, 0.0568, 0.0256, 0.0116, 0.0024, 0.0012, 0.0012, 0.0008 };

    double pedidos2[13] = { 0.1056, 0.2276, 0.2560, 0.2128, 0.1176, 0.0584, 0.0164, 0.0036, 0.0012, 0.0008, 0.0000, 0.0000, 0.0000 };

    double entregas2[13] = { 0.0380, 0.0764, 0.1012, 0.1284, 0.1376, 0.1348, 0.1048, 0.0804, 0.0692, 0.0584, 0.0412, 0.0224, 0.0072 };

    double filial1[13][13];
    double filial2[13][13];

    double contribuicoes1[13][13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                      4.716, 4.716, 4.716, 4.716, 4.716, 4.716, 4.716, 4.716, 4.716, 4.716, 4.716, 4.716, 4.716,
                                      18.036, 18.036, 18.036, 18.036, 18.036, 18.036, 18.036, 18.036, 18.036, 18.036, 18.036, 18.036, 18.036,
                                      39.096, 39.096, 39.096, 39.096, 39.096, 39.096, 39.096, 39.096, 39.096, 39.096, 39.096, 39.096, 39.096,
                                      58.968, 58.968, 58.968, 58.968, 58.968, 58.968, 58.968, 58.968, 58.968, 58.968, 58.968, 58.968, 58.968,
                                      73.308, 73.308, 73.308, 73.308, 73.308, 73.308, 73.308, 73.308, 73.308, 73.308, 73.308, 73.308, 73.308,
                                      81.444, 81.444, 81.444, 81.444, 81.444, 81.444, 81.444, 81.444, 81.444, 81.444, 81.444, 81.444, 81.444,
                                      85.476, 85.476, 85.476, 85.476, 85.476, 85.476, 85.476, 85.476, 85.476, 85.476, 85.476, 85.476, 85.476,
                                      87.972, 87.972, 87.972, 87.972, 87.972, 87.972, 87.972, 87.972, 87.972, 87.972, 87.972, 87.972, 87.972,
                                      88.836, 88.836, 88.836, 88.836, 88.836, 88.836, 88.836, 88.836, 88.836, 88.836, 88.836, 88.836, 88.836,
                                      89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076,
                                      89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076,
                                      89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076, 89.076 };

    double contribuicoes2[13][13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                      6.828, 6.828, 6.828, 6.828, 6.828, 6.828, 6.828, 6.828, 6.828, 6.828, 6.828, 6.828, 6.828,
                                      22.188, 22.188, 22.188, 22.188, 22.188, 22.188, 22.188, 22.188, 22.188, 22.188, 22.188, 22.188, 22.188,
                                      41.34, 41.34, 41.34, 41.34, 41.34, 41.34, 41.34, 41.34, 41.34, 41.34, 41.34, 41.34, 41.34,
                                      55.452, 55.452, 55.452, 55.452, 55.452, 55.452, 55.452, 55.452, 55.452, 55.452, 55.452, 55.452, 55.452,
                                      64.212, 64.212, 64.212, 64.212, 64.212, 64.212, 64.212, 64.212, 64.212, 54.212, 54.212, 54.212, 54.212,
                                      67.164, 67.164, 67.164, 67.164, 67.164, 67.164, 67.164, 67.164, 67.164, 67.164, 67.164, 67.164, 67.164,
                                      67.92, 67.92, 67.92, 67.92, 67.92, 67.92, 67.92, 67.92, 67.92, 67.92, 67.92, 67.92, 67.92,
                                      68.208, 68.208, 68.208, 68.208, 68.208, 68.208, 68.208, 68.208, 68.208, 68.208, 68.208, 68.208, 68.208,
                                      68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424,
                                      68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424,
                                      68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424,
                                      68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424, 68.424 };

    double contribuicoes[169][169];

    int x = 0, y = 0;

    for (int i1 = 0 ; i1 < 13; i1++){
        for (int i2 = 0; i2 < 13; i2++){
            y = 0;
            for (int f1 = 0; f1 < 13; f1++){
                for (int f2 = 0; f2 < 13; f2++){
                    contribuicoes[x][y] = contribuicoes1[i1][f1] + contribuicoes2[i2][f2];
                    if (f1 > 8) contribuicoes[x][y] -= 10;
                    if (f2 > 8) contribuicoes[x][y] -= 10;
                    //printf("%lf\n", contribuicoes[x][y]);
                    y++;
                }
            }
            x++;
        }
    }  
                                 

    // Preencher Matrix

    double soma1;
    double soma2;

    for (int i = 0; i < 13; i++){

        for (int j = 0; j < 13; j++){

            //printf("------------------------------------------- %d -> %d\n", i, j);

            soma1 = 0;
            soma2 = 0;

            if (i == 12){
                    
                for (int k = 0; k < 13; k++){
                    soma1 += entregas1[k] * pedidos1[j];
                    soma2 += entregas2[k] * pedidos2[j];
                    //printf("entregar %d - pedir %d\n", k, j);
                }
            }

            else {

                int dif = j - i;
            
                if (dif > 0){

                    if (j == 12){

                        for (int k = 12 - i; k < 12; k++){
                            for (int l = 0; l < i; l++){
                                if (k - l >= 12 - i){
                                    soma1 += entregas1[k] * pedidos1[l];
                                    soma2 += entregas2[k] * pedidos2[l];
                                    //printf("entregar %d - pedir %d\n", k, l);
                                }
                            }
                        }

                        for (int k = 0; k < 13; k++){
                            soma1 += entregas1[12] * pedidos1[k];
                            soma2 += entregas2[12] * pedidos2[k];
                            //printf("entregar %d - pedir %d\n", 12, k);
                        }
                    }
                    else {

                        for (int k = 0; k < i; k++){
                            soma1 += pedidos1[k] * entregas1[dif];
                            soma2 += pedidos2[k] * entregas2[dif];
                            //printf("entregar %d - pedir %d\n", dif, k);
                            dif++;
                        }

                        for (int k = i; k < 13; k++){
                            soma1 += pedidos1[k] * entregas1[j];
                            soma2 += pedidos2[k] * entregas2[j];
                            //printf("entregar %d - pedir %d\n", j, k);
                        }
                    }
                }

                else if (dif < 0){

                    dif = 0 - dif;
                    int x = 0;

                    for (int k = dif; k < 13; k++){

                        if (k > i){ 
                            soma1 += entregas1[j] * pedidos1[k];
                            soma2 += entregas2[j] * pedidos2[k];
                            //printf("entregar %d - pedir %d\n", j, k);
                        }
                        else {
                            soma1 += entregas1[x] * pedidos1[k];
                            soma2 += entregas2[x] * pedidos2[k];
                            //printf("entregar %d - pedir %d\n", x, k);                                
                            x ++;
                        }
                    }
                }

                else if (dif == 0){

                    for (int k = 0; k < 13; k++){

                        if (k > j){
                            soma1 += entregas1[j] * pedidos1[k];
                            soma2 += entregas2[j] * pedidos2[k];
                            //printf("entregar %d - pedir %d\n", j, k);
                        }

                        else {
                            soma1 += entregas1[k] * pedidos1[k];
                            soma2 += entregas2[k] * pedidos2[k];
                            //printf("entregar %d - pedir %d\n", k, k);
                        }
                    }   
                }

                else printf("ERRO\n");
            }

            filial1[i][j] = soma1;
            filial2[i][j] = soma2;

        }
    }

    // Preencher matriz 169x169 : (0,1) -> (1,2) = prob(0->1) * prob(1->2)

    /*double matrix[13][13][13][13];

    for (int i = 0; i < 13; i++){
        for (int j = 0; j < 13; j++){
            for (int k = 0; k < 13; k++){
                for (int l = 0; l < 13; l++){
                    matrix[i][j][k][l] = filial1[i][k] * filial2[j][l];
                    //printf("%.10lf\n", matrix[i][j][k][l]);
                }
            }
        }
    }*/

    // ------------------------------------------------ Transferir 0 carros ------------------------------------------------ \\

    double result;

    double matrix[169][169];

    int i = 0, j=0;
    
    for(int i1 = 0 ; i1<13;i1++ ){
        for(int i2 = 0; i2<13 ;i2++){
            j=0;
            for(int f1 = 0; f1<13 ;f1++){
                for(int f2 = 0; f2 < 13 ; f2++){
                    matrix[i][j] = filial1[i1][f1]*filial2[i2][f2];
                    j++;
                }
            }
            i++;
        }
    }

    double q0[169];

    for (int i = 0; i < 169; i++){
        result = 0;
        for (int j = 0; j < 169; j++){
            result += matrix[i][j] * contribuicoes[i][j];
        }
        q0[i] = result;
        //printf("%.10lf\n", q0[i]);
    }

    // ----------------------------------- Transferir 1 carro da filial 1 para a filial 2 ----------------------------------- \\
    
    // (i1,i2) -> (f1,f2) = p1(i1,f1+1) * p2(i2,f2-1)
    double matrix1[169][169];

    i = 0, j = 0;

    for (int i1 = 0 ; i1<13;i1++ ){
        for(int i2 = 0; i2<13 ;i2++){
            j = 0;
            for(int f1 = 0; f1<13 ;f1++){
                for(int f2 = 0; f2 < 13 ; f2++){
                    if (f2 != 0 && f1 != 12) matrix1[i][j] = filial1[i1][f1+1]*filial2[i2][f2-1];
                    else matrix1[i][j] = 0;
                    j++;
                }
            }
            i++;
        }
    }

    double contribuicoes10[169][169];

    i = 0, j =0;

    for (int i1 = 0 ; i1 < 13; i1++){
        for (int i2 = 0; i2 < 13; i2++){
            j = 0;
            for (int f1 = 0; f1 < 13; f1++){
                for (int f2 = 0; f2 < 13; f2++){
                    if (f2 != 0 && f1 != 12){ 
                        contribuicoes10[i][j] = contribuicoes1[i1][f1+1] + contribuicoes2[i2][f2-1]-7;
                        if (f1 > 8) contribuicoes10[i][j] -= 10;
                        if (f2 > 8) contribuicoes10[i][j] -= 10;
                    }
                    else contribuicoes10[i][j] = 0;
                    j++;
                }
            }
            i++;
        }
    }  

    double q1[169];

    for (int i = 0; i < 169; i++){
        result = 0;
        for (int j = 0; j < 169; j++){
            result += matrix1[i][j] * contribuicoes10[i][j];
        }
        q1[i] = result;
        //printf("%.10lf\n", q1[i]);
    }

    // ----------------------------------- Transferir 1 carro da filial 2 para a filial 1 ----------------------------------- \\

    // (i1,i2) -> (f1,f2) = p1(i1,f1-1) * p2(i2,f2+1)
    double matrix2[169][169];

    i = 0, j = 0;
    for (int i1 = 0 ; i1<13;i1++ ){
        for(int i2 = 0; i2<13 ;i2++){
            j = 0;
            for(int f1 = 0; f1<13 ;f1++){
                for(int f2 = 0; f2 < 13 ; f2++){
                    if (f1 != 0 && f2 != 12) matrix2[i][j] = filial1[i1][f1-1]*filial2[i2][f2+1];
                    else matrix2[i][j] = 0;
                    j++;
                }
            }
            i++;
        }
    }

    double contribuicoes01[169][169];

    i = 0, j = 0;
    for (int i1 = 0 ; i1 < 13; i1++){
        for (int i2 = 0; i2 < 13; i2++){
            j = 0;
            for (int f1 = 0; f1 < 13; f1++){
                for (int f2 = 0; f2 < 13; f2++){
                    if (f1 != 0 && f2 != 12){ 
                        contribuicoes01[i][j] = contribuicoes1[i1][f1-1] + contribuicoes2[i2][f2+1]-7;
                        if (f1 > 8) contribuicoes01[i][j] -= 10;
                        if (f2 > 8) contribuicoes01[i][j] -= 10;
                    }
                    else contribuicoes01[i][j] = 0;
                    j++;
                }
            }
            i++;
        }
    }  

    double q2[169];

    for (int i = 0; i < 169; i++){
        result = 0;
        for (int j = 0; j < 169; j++){
            result += matrix2[i][j] * contribuicoes01[i][j];
        }
        q2[i] = result;
        //printf("%.10lf\n", q2[i]);
    }

    // ----------------------------------- Transferir 2 carro da filial 1 para a filial 2 ----------------------------------- \\

    // (i1,i2) -> (f1,f2) = p1(i1,f1+2) * p2(i2,f2-2)
    double matrix3[169][169];

    i = 0, j = 0;

    for (int i1 = 0 ; i1<13;i1++ ){
        for(int i2 = 0; i2<13 ;i2++){
            j = 0;
            for(int f1 = 0; f1<13 ;f1++){
                for(int f2 = 0; f2 < 13 ; f2++){
                    if (f1 <= 10 && f2 >= 2) matrix3[i][j] = filial1[i1][f1+2]*filial2[i2][f2-2];
                    else matrix3[i][j] = 0;
                    j++;
                }
            }
            i++;
        }
    }

    double contribuicoes20[169][169];

    i = 0, j = 0;

    for (int i1 = 0 ; i1 < 13; i1++){
        for (int i2 = 0; i2 < 13; i2++){
            j = 0;
            for (int f1 = 0; f1 < 13; f1++){
                for (int f2 = 0; f2 < 13; f2++){
                    if (f1 <= 10 && f2 >= 2){ 
                        contribuicoes20[i][j] = contribuicoes1[i1][f1+2] + contribuicoes2[i2][f2-2]-14;
                        if (f1 > 8) contribuicoes20[i][j] -= 10;
                        if (f2 > 8) contribuicoes20[i][j] -= 10;
                    }
                    else contribuicoes20[i][j] = 0;
                    j++;
                }
            }
            i++;    
        }
    }  

    double q3[169];

    for (int i = 0; i < 169; i++){
        result = 0;
        for (int j = 0; j < 169; j++){
            result += matrix3[i][j] * contribuicoes20[i][j];
        }
        q3[i] = result;
        //printf("%.10lf\n", q3[i]);
    }

    // ----------------------------------- Transferir 2 carro da filial 2 para a filial 1 ----------------------------------- \\

    // (i1,i2) -> (f1,f2) = p1(i1,f1+2) * p2(i2,f2-2)
    double matrix4[169][169];

    i = 0, j = 0;

    for (int i1 = 0 ; i1<13;i1++ ){
        for(int i2 = 0; i2<13 ;i2++){
            j = 0;
            for(int f1 = 0; f1<13 ;f1++){
                for(int f2 = 0; f2 < 13 ; f2++){
                    if (f2 <= 10 && f1 >= 2) matrix4[i][j] = filial1[i1][f1-2]*filial2[i2][f2+2];
                    else matrix4[i][j] = 0;
                    j++;
                }
            }
            i++;
        }
    }

    double contribuicoes02[169][169];

    i = 0, j = 0;

    for (int i1 = 0 ; i1 < 13; i1++){
        for (int i2 = 0; i2 < 13; i2++){
            j = 0;
            for (int f1 = 0; f1 < 13; f1++){
                for (int f2 = 0; f2 < 13; f2++){
                    if (f2 <= 10 && f1 >= 2){ 
                        contribuicoes02[i][j] = contribuicoes1[i1][f1-2] + contribuicoes2[i2][f2+2]-14;
                        if (f1 > 8) contribuicoes02[i][j] -= 10;
                        if (f2 > 8) contribuicoes02[i][j] -= 10;
                    }
                    else contribuicoes02[i][j] = 0;
                    j++;
                }
            }
            i++;
        }
    }  

    double q4[169];

    for (int i = 0; i < 169; i++){
        result = 0;
        for (int j = 0; j < 169; j++){
            result += matrix4[i][j] * contribuicoes02[i][j];
        }
        q4[i] = result;
        //printf("%.10lf\n", q4[i]);
    }

    // ----------------------------------- Transferir 3 carros da filial 1 para a filial 2 ----------------------------------- \\

    // (i1,i2) -> (f1,f2) = p1(i1,f1+3) * p2(i2,f2-3)
    double matrix5[169][169];

    i = 0, j = 0;
    for (int i1 = 0 ; i1<13;i1++ ){
        for(int i2 = 0; i2<13 ;i2++){
            j = 0;
            for(int f1 = 0; f1<13 ;f1++){
                for(int f2 = 0; f2 < 13 ; f2++){
                    if (f1 <= 9 && f2 >= 3) matrix5[i][j] = filial1[i1][f1+3]*filial2[i2][f2-3];
                    else matrix5[i][j] = 0;
                    j++;
                }
            }
            i++;
        }
    }

    double contribuicoes30[169][169];

    i = 0, j = 0;

    for (int i1 = 0 ; i1 < 13; i1++){
        for (int i2 = 0; i2 < 13; i2++){
            j = 0;
            for (int f1 = 0; f1 < 13; f1++){
                for (int f2 = 0; f2 < 13; f2++){
                    if (f1 <= 9 && f2 >= 3){ 
                        contribuicoes30[i][j] = contribuicoes1[i1][f1+3] + contribuicoes2[i2][f2-3]-27;
                        if (f1 > 8) contribuicoes30[i][j] -= 10;
                        if (f2 > 8) contribuicoes30[i][j] -= 10;
                    }
                    else contribuicoes30[i][j] = 0;
                    j++;
                }
            }
            i++;
        }
    }  

    double q5[169];

    for (int i = 0; i < 169; i++){
        result = 0;
        for (int j = 0; j < 169; j++){
            result += matrix5[i][j] * contribuicoes30[i][j];
        }
        q5[i] = result;
        //printf("%.10lf\n", q5[i]);
    }

    // ----------------------------------- Transferir 3 carros da filial 2 para a filial 1 ----------------------------------- \\

    // (i1,i2) -> (f1,f2) = p1(i1,f1-3) * p2(i2,f2+3)
    double matrix6[169][169];

    i = 0, j = 0;

    for (int i1 = 0 ; i1<13;i1++ ){
        for(int i2 = 0; i2<13 ;i2++){
            j = 0;
            for(int f1 = 0; f1<13 ;f1++){
                for(int f2 = 0; f2 < 13 ; f2++){
                    if (f2 <= 9 && f1 >= 3) matrix6[i][j] = filial1[i1][f1-3]*filial2[i2][f2+3];
                    else matrix6[i][j] = 0;
                    j++;
                }
            }
            i++;
        }
    }


    double contribuicoes03[169][169];

    i = 0, j = 0;

    for (int i1 = 0 ; i1 < 13; i1++){
        for (int i2 = 0; i2 < 13; i2++){
            j = 0;
            for (int f1 = 0; f1 < 13; f1++){
                for (int f2 = 0; f2 < 13; f2++){
                    if (f2 <= 9 && f1 >= 3){ 
                        contribuicoes03[i][j] = contribuicoes1[i1][f1-3] + contribuicoes2[i2][f2+3]-27;
                        if (f1 > 8) contribuicoes03[i][j] -= 10;
                        if (f2 > 8) contribuicoes03[i][j] -= 10;
                    }
                    else contribuicoes03[i][j] = 0;
                    j++;
                }
            }
            i++;
        }
    }  

    double q6[169];

    for (int i = 0; i < 169; i++){
        result = 0;
        for (int j = 0; j < 169; j++){
            result += matrix6[i][j] * contribuicoes03[i][j];
        }
        q6[i] = result;
        //printf("%.10lf\n", q6[i]);
    }


    // ------------------------------------------------------- Iterações ------------------------------------------------------- \\

    // Primeira Iteração

    double f0[169];
    double fxA[169];

    for(int i = 0 ; i < 169 ; i++){
        f0[i] = 0;
    }
    maioresElems(q0,q1,q2,q3,q4,q5,q6,fxA);

    double maior, menor;
    maiorMenor(&maior,&menor,fxA);
    printf("%lf %lf\n", maior,menor);


    for (int i = 0 ; i < 10000; i++){

        double fx[169];
        double aux0[169], aux1[169], aux2[169], aux3[169], aux4[169], aux5[169], aux6[169];
        double dx[169]; 
        multiplicaMatrizVetor(matrix,fxA,aux0);
        multiplicaMatrizVetor(matrix1,fxA,aux1);
        multiplicaMatrizVetor(matrix2,fxA,aux2);
        multiplicaMatrizVetor(matrix3,fxA,aux3);
        multiplicaMatrizVetor(matrix4,fxA,aux4);
        multiplicaMatrizVetor(matrix5,fxA,aux5);
        multiplicaMatrizVetor(matrix6,fxA,aux6);
        somarVetores(q0,aux0);
        somarVetores(q1,aux1);
        somarVetores(q2,aux2);
        somarVetores(q3,aux3);
        somarVetores(q4,aux4);
        somarVetores(q5,aux5);
        somarVetores(q6,aux6);
        
        maioresElems(aux0,aux1,aux2,aux3,aux4,aux5,aux6,fx);
        subtrairVetores(fxA,fx,dx);
        maiorMenor(&maior,&menor,dx);

        for(int j = 0; j < 169 ; j++){
            fxA[j] = fx[j];
        }
        printf("%lf %lf\n", maior,menor);
        if(maior-menor <= 0.0008){
            printf("\n\n%d\n",i+2);
            break;
        }
    }

    return 0;
}
