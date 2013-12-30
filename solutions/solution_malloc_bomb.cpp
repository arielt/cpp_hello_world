#include <stdlib.h>
#include <iostream>
using namespace std;

void PrintHelloWorld()
{
    void * x;

    while(1) {
        x = malloc(1000000);
        cout << "Allocated another chunk of memory" << x << endl;
    }
}

