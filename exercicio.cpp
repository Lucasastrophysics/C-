#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
/*o arquivo database.txt está disponivel para download no site do professor*/
/*protótipos das funções*/

int main(void) {
  FILE *fp;
  char *ok, file[10];
  int  i,tot;

  fp=fopen("database.txt","rt");
  if (!fp) { /*substitui fp==NULL por !fp que significa não fp para saber se fp é nulo*/
    printf("Erro na abertura do arquivo!\n");
    exit(0);
  }

  fgets(file,10,fp);
  tot=atoi(file); /*converte string(char) em número inteiro*/
  for (i=0;i<tot;i++){
    fgets(file,10,fp);
    if (!ok) break; /*iden comentário anterior*/
    printf("%2d:%s\n",i+1,file);/*%2d significa numero inteiro com 2 dígitos*/
  
  }
  printf("total de arquivos:%d\n",i);
  fclose(fp);
  return(0);
}
