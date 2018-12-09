// layanne roberta silva oliveira  matricula: 11811ETE012
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14159265355
#define r 1

typedef struct {
  float x, y;
}Ponto;

int main(){
   int n, i;
   Ponto *xy;
   scanf("%i", &n);getchar();
   xy= (Ponto *) malloc(n*sizeof(Ponto)); //heap memory
   printf("%i resultado \" ",n);
   for(i=0; i<n; i++){
     xy->x= r*cos(i*2*pi/(n));
     xy->y= r*sin(i*2*pi/n);
     printf("(%.3f, %.3f) ", xy->x, xy->y);
   }
   printf("\" ");
   free(xy);
   return 0;
