#include <stdio.h>
#include <stdlib.h>


int main(){

  FILE *fp;
  int cont_elementos = 0, cont_linhas = 0, cont_colunas = 0,aux=0;
  int numero;
  char ch;
  char nomeArquivo[] = "/Users/caiovf13/Desktop/UnB/eda/Projeto02/DataSet/asphalt/asphalt_01.txt";
  fp = fopen(nomeArquivo, "r");
  if (fp==NULL) {
    printf("Falha.\n");
    exit(0);
  }
  //fscanf (fp, "%d", &numero);
  //ch = getc(fp);/* read one character */
  //putchar(ch);for (i=0; i<LIN; i++){

  fscanf(fp, "%d%c", &numero, &ch);
  while (!feof(fp)) {
     if(ch == ';'){
      cont_elementos+=1;
      cont_colunas+=1;
    }
     else if(ch == '\n'){
     cont_linhas+=1;
     //cont_colunas = 0;
   }
    printf("%d ", numero ); /* print on screen */
    fscanf(fp, "%d%c", &numero, &ch);
  }
  printf("numero de linhhas = %d\nnumero de colunas: %d\nnumero de elementos: %d\n",cont_linhas,cont_colunas,cont_elementos);

fclose(fp);
  return 0;
}
