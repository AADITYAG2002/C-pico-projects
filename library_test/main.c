#include <stdio.h>
#include <stdlib.h>

#include "Lib/lib.h"

int main(int argc, char **argv){
    printf("main function \n");
    func1(NUM_1);
    func1(NUM_2);
    func2(addr);
    return EXIT_SUCCESS;
}