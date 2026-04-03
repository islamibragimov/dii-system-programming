#include <stdio.h>

typedef struct {
    int value;
} Counter;

/*
struct Counter{
    int value;
}
*/
void increment(Counter *self){
    self->value += 1;
}

int main(){
    Counter c;
    c.value=0;

    increment(&c);
    printf("%d\n", c.value);
}