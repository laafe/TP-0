/*	TP #0 - Hello world
*	Ezequiel Lafferriere
*	6-4-2016
*/

#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main(){

FILE *doc; 

doc = fopen("salida.txt","w");

fprintf(doc, "Hello World!");

fclose(doc);

return 0;

}
