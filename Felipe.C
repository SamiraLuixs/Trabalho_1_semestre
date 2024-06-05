#include <stdio.h>

float deposito (float saldo) {
  float valor;
  printf("\nDigite o valor do deposito: ");
  scanf("%f", &valor);
  if (valor < 0) { 
    printf ("Valor inválido\n");
  return saldo;
  }
  else{
  printf("Depósito efetuado com sucesso!\n");
  return saldo + valor;
  }
   }
float saque(float saldo) {
  float valor;
  printf("\nDigite o valor do saque: ");
  scanf("%f", &valor);
  if (valor < 0){ 
    printf ("Valor inválido\n");
  } 
  else if (saldo - valor < 0) { 
      printf ("Saldo insuficiente, tente novamente mais tarde\n");
    return saldo;
  }
  else{
    printf("Saque efetuado com sucesso!\n");
    return saldo - valor;
  }
}
int main(void) {
    float saldo = 0;
    int senha, escolha, galinha = 1;
  
    while (1) 
    {printf("Digite a senha: ");
      scanf("%d", &senha);
       if (senha == 1234) { 
         printf ("Bem vindo ao banco\n");
         break;
       }
      else {
        printf("Senha incorreta. Tente novamente.\n");
      } 
     
      }
        while (1) {  
          printf ("\nDigite 1 para deposito, 2 para saque ou 3 para encerrar: ");
          scanf("%d", &escolha);
          if (escolha == 1){saldo = deposito(saldo);}
          
          else if (escolha == 2){saldo = saque(saldo);}
          
          else if (escolha == 3) {break;}
            
             else {
              printf("Número inválido, digite novamente\n");}
       }
  
    printf("(1) Sim \n(2) Não \nGostaria de avaliar nosso sistema? ");
  scanf("%d", &escolha);
  if (escolha == 1) {
    printf("Insira uma nota de 0 a 10: ");
      scanf("%d", &escolha);
    while (galinha < 2){
      if (escolha >= 0 && escolha <= 10){ 
        if (escolha<=5) printf("Poxa, vamos procurar melhorar\n");
        else printf("Obrigado pela avaliação\n");
        galinha++;
      }
      else {
        printf("\nTente novamente um valor de 0 a 10\n");
        printf("Insira uma nota de 0 a 10: ");
        scanf("%d", &escolha);     
      }
  }
}
  if (escolha == 2) {
    printf("Agradecemos a preferência!");
  }
    return 0;
     } 