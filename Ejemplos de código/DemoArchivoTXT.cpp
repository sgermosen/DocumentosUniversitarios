//============================================================================
// Name        : DemoArchivoTXT.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;


void addFila(FILE* f, string nombre, int edad, double altura)
{
   fprintf(f,"%s\t\t%d\t%lf\n",nombre.c_str(),edad,altura);
}

int main()
{
   FILE* f = fopen("DEMO.txt","w");

   addFila(f,"Pablo",46,1.66);
   addFila(f,"Juan",35,1.80);
   addFila(f,"Alberto",28,1.67);
   addFila(f,"Carlos",53,1.75);

   fclose(f);
   return 0;
}
