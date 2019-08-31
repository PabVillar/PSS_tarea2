#include <stdio.h>
#include <stdlib.h>

#include "t2.h"


int calzar(Nodo *a, Nodo **ppat){
    Nodo *p = *ppat;
    //Casos base
    if (p == NULL){
        p = a;
        *ppat = p;
        return 1;
    }
    else if (a == NULL)
    {
        return 0;
    }
    else if (p -> x != a -> x)
    {
        return 0;
    }
    else{
        if (calzar(a -> izq, &p -> izq))
        {
            p -> izq = a -> izq;
            return calzar(a -> der, &p -> der);
        }
        else if (calzar(a -> der, &p -> der))
        {
            p -> der = a -> der;
            return 1;
        }     
  }
  return 0;
}