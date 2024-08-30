#include <cstdio>
#include "string_funcs.h"

int main()
{
    const char * a = "daf";
    char buf[8] = {'a', 'b', 'c', '\0'};
    printf("%s", strdup(a));

    return 0;
}
