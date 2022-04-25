#include <stdio.h>

void fu(char* p, int x){
    printf("p is \"%s\" and x is %d\n", p, x);
}

int main(){
    char* a = "Hello",* b = "World!";
    printf("%s %s\n", a,b);
    fu("lidl", 11);
    fu("trackmania", 2020);
}