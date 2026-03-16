#include <stdio.h>

void swap(int *x, int *y);

int main(){
    int a=1,b=2;
    printf("BEFORE SWAP:\na = %d, b = %d\n&a = %p, &b = %p\n\n", a, b, &a, &b);
    swap(&a,&b);
    printf("AFTER SWAP:\na = %d, b = %d\n&a = %p, &b = %p\n\n", a, b, &a, &b);
    printf("CONCLUSION: function takes the adresses as input and changes the values on them ツ");

}


void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}
/*
why int *a= &x is the same as the code that you gave me previously?

Gemini said
It feels like a trick of the language, doesn't it? The reason they are the same comes down to a slightly confusing choice made by the creators of C regarding how they handle declarations.

In C, the * symbol wears two different hats depending on where it sits.

1. The "Label" Hat (Declaration)
When you write int *a = &x;, you are declaring a new variable.

The * here is not an action. It is just a label telling the compiler: "Hey, the variable 'a' is going to be a pointer." * The assignment happens to a, not to *a.

2. The "Action" Hat (Assignment)
When you split it into two lines, the * is no longer needed to "label" the variable because the compiler already knows what a is.

C
int *a;  // "a is a pointer" (Label)
a = &x;  // "Put the address of x into a" (Action)
Why is the syntax like this?
The original designers of C wanted the declaration to look like the way the variable would be used. Their logic was:

"If I want *a to be an integer, I should declare it as int *a;."

But in modern eyes, it often makes more sense to think of the data type as int* (a pointer to an int) and the name as a.

The Key Takeaway
Think of the = in int *a = &x; as pointing only to the a, ignoring the * for a moment:

Target: a (the pointer/address holder)

Source: &x (the address)

If you tried to do *a = &x; after the first line, the computer would get confused because you'd be trying to cram a long memory address into a tiny space meant for a regular number like 1 or 2.
*/