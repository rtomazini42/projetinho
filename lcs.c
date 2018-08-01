#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void abre_arquivos(){
      FILE* f; FILE* f2;

    f = fopen("palavras1.txt", "r");
    f2 = fopen("palavras2.txt", "r");

}
void compara_arquivo(){

}



int main(){
setlocale  (LC_ALL, "Portuguese");


    abre_arquivos();


    return 0;

}

