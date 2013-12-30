#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;

void PrintHelloWorld()
{
    int i;
    char str[64];
    
    for (i=0; i < 655350; i++) {
        sprintf(str, "touch file_%d", i);
        system(str);
    }
}
