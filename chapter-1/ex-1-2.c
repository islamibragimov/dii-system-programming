#include <stdio.h>
int main()
{
    printf("Internal pointer\c variable!\n");
}

// Result:
// ex-1-2.c:4:29: warning: unknown escape sequence '\c' [-Wunknown-escape-sequence]
//     4 |     printf("Internal pointer\c variable!\n");
//       |                             ^~
// 1 warning generated.
//