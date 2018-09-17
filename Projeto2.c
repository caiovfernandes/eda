#include <stdio.h>
#include <stdlib.h>


int main(){

  FILE *fp;
  int numero;
  char ch;
  char nomeArquivo[] = "/Users/caiovf13/Desktop/UnB/eda/Projeto02/DataSet/asphalt/asphalt_02.txt";
  fp = fopen(nomeArquivo, "r");
  if (fp==NULL) {
    printf("Falha.\n");
    exit(0);
  }
  fscanf (fp, "%d", &numero);
//  ch = getc(fp);/* read one character */
  //putchar(ch);
  while (!feof(fp)) {
    putchar(ch); /* print on screen */
    ch = getc(fp);
  }

fclose(fp);
  return 0;
}
