#include <cstdio>
#include "string_funcs.h"
#include <cstdlib>

int main()
{
    FILE * inputFile = fopen("source//123.txt", "r");
    printf("%p\n", inputFile);

    char * buf = (char *)calloc(15, sizeof(char));
    printf("%s", customFgets(buf, 16, inputFile));

    return 0;
}
