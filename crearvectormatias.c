#include <stdio.h>

int main(){

int n;
FILE *vector=NULL;
FILE *documenton=NULL;
vector=fopen("vector.txt","r");
documenton=fopen("archivo2.txt","w");

int cont=1;
while(!feof(vector))
{
fscanf(vector, "%d", &n);
if (n%5==0)
{
    fprintf(archivo2,"%d es multiplo de 5 \n", n);
     }else {
        fprintf(archivo2, "%d \n", n);
         }
 }
 fclose(vector);
 fclose(archivo2);

 return 0;

  }
