#include <stdio.h>
#include <stdlib.h>

int main(void){
    /*
    //1. Faça um Programa que peça dois números e imprima o maior deles
        int n1, n2;

        printf("Insira dois numeros: ");
        scanf("%i" "%i", &n1, &n2);

        if(n1 > n2){
            printf("%i", n1);
        }
        else printf("%i", n2);
    

    //2. Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo
        int n1;

        printf("Insira um numero: ");
        scanf("%i", &n1);

        if(n1 > 0){
            printf("positivo");
        }
        else printf("negativo");
    

    //3. Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.
        char letra;

        printf("Insira uma letra: ");
        scanf("%c", &letra);

        switch (letra)
        {
        case 'F':
            printf("%c - Feminino", letra);
            break;

        case 'M':
            printf("%c - Masculino", letra);
            break;
        
        default:
            printf("Sexo Invalido");
            break;
        }
    

    //4. Faça um Programa que verifique se uma letra digitada é vogal ou consoante
        char letra;

        printf("Insira uma letra: ");
        scanf("%c", &letra);

        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        {
            printf("vogal");
        }
        else printf("consoante");
    

    //5. Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar: 
        //A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
        //A mensagem "Reprovado", se a média for menor do que sete;
        //A mensagem "Aprovado com Distinção", se a média for igual a dez. 

        int nota1, nota2;
        float media;

        printf("Insira as duas notas parciais: ");
        scanf("%i" "%i", &nota1, &nota2);

        media = (nota1 + nota2) / 2.0;

        if(media >= 7.0){
            if(media == 10.0){
                printf("Aprovado com Distincao");
            }
            else printf("Aprovado");
        }
        else printf("Reprovado");
    

    //6.Faça um Programa que leia três números e mostre o maior deles.
        int n1, n2, n3;

        printf("Insira tres numeros: ");
        scanf("%i" "%i" "%i", &n1, &n2, &n3);

        if (n1 > n2)
        {
            if(n1 > n3){
                //n1 é maior
                printf("%i", n1);
            }
        }
        else if(n2 > n3){
            //n2 é maior
            printf("%i", n2);
        }
        else if(n3 > n1){
            //n3 é maior
            printf("%i", n3);
        }
    */

    //7. Faça um Programa que leia três números e mostre o maior e o menor deles  
        int n1, n2, n3, maior, menor;

        printf("Insira tres numeros: ");
        scanf("%i" "%i" "%i", &n1, &n2, &n3);

        if (n1 > n2){
            if(n1 > n3){
                //n1 é maior
                maior = n1;

                if(n2 > n3){
                    menor = n3;
                }
                else menor = n2;
            }
        }
        else if(n2 > n3){
            //n2 é maior
            maior = n2;

            if(n1 > n3){
                menor = n3;
            }
            else menor = n1;
        }
        else if(n3 > n1){
            //n3 é maior
            maior = n3;
            menor = n1;
        }

        printf("maior = %i || menor = %i", maior, menor);

    return 0;
}