#ifndef LIB_H_
#define LIB_H_

extern const int NUM_1;
extern const int NUM_2;
extern int addr;

void func1(int val);
void static inline func2(char val){
    printf("static func 2 : %c \n", val);
}

#endif