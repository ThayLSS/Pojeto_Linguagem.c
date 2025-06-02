#include <stdio.h>
int main() {
int aula;
int professor;
int disciplina;


printf (" \n Você gostou da aula? \n");
scanf ("%d" , &aula);
if (aula == 1 ) {
printf (" \n fico feliz!!!\n");
}
else if (aula == 0 ) {
printf(" \n entre em contato com o suporte para verificarmos a possibilidade de melhorias !!! \n");
}
printf (" \n E me diga o que achou do professor? \n");
scanf ("%d", &professor);
if ( professor == 1)
{
printf(" \n Ficamos felizes! \n ");
}
else if (professor == 0 )
{
printf (" \n entre em contato com o suporte para verificarmos a possibilidade de melhorias !!!");
printf (" \n voce recomendaria a disciplina para um colega? \n ");
scanf ("%d", &disciplina);
if ( disciplina == 1){

}
else {
    printf (" \n A instituicao fica grata pelo seu retorno, iremos continuar trabalhando para oferecer o melhor aos nossos alunos! ");
}
}
return 0;
}
