#include "string_funcs.h"
#include "stdio.h"
#include <cstdlib>

void putstr(const char * str)
{
    for(int i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
    }
}

char * strchr(const char * str, char symbol)
{
    for(int i = 0; str[i] != '\0'; i++) {
        if (str[i] == symbol) {
            return ((char *)str + i);
        }
    }

    return NULL;
}

unsigned int strlen(const char * str)
{
    unsigned int lenght = 0;

    while (str[lenght] != '\0') {
        lenght++;
    }

    return lenght;
}

char * strcpy(char * toHere, const char * fromHere)
{
    int copiedSymbols = 0;

    for(; fromHere[copiedSymbols] != '\0'; copiedSymbols++) {
        toHere[copiedSymbols] = fromHere[copiedSymbols];
    }

    toHere[copiedSymbols] = '\0';

    return toHere;
}

char * strncpy(char * toHere, const char * fromHere, unsigned int maxSymbols)
{
    int copiedSymbols = 0;

    for(; fromHere[copiedSymbols] != '\0' && (maxSymbols--) > 0 ; copiedSymbols++) {
        toHere[copiedSymbols] = fromHere[copiedSymbols];
    }

    toHere[copiedSymbols] = '\0';

    return toHere;
}

char * strcat(char * line, const char * lineToCopy)
{
    int currentSymbol = strlen(line);

    for(int i = 0; lineToCopy[i] != '\0'; i++) {
        line[currentSymbol++] = lineToCopy[i];
    }

    line[currentSymbol] = '\0';

    return line;
}

char * strncat(char * line, const char * lineToCopy, unsigned int maxSymbols)
{
    int currentSymbol = strlen(line);

    for(int i = 0; lineToCopy[i] != '\0' && maxSymbols-- > 0; i++) {
        line[currentSymbol++] = lineToCopy[i];
    }

    line[currentSymbol] = '\0';

    return line;
}

char * customFgets(char * str, unsigned int count, FILE * inputFile)
{
    if (str == NULL || inputFile == NULL) {
        return NULL;
    }

    count--;

    size_t currentNumOfSymbols = 0;

    while ( ( *(str + currentNumOfSymbols) = fgetc(inputFile) ) != '\n' && currentNumOfSymbols < count ) {
        currentNumOfSymbols++;
    }

    *(str + currentNumOfSymbols) = '\0';

    return str;

}

char * strdup(const char * str)
{
    int lenght = strlen(str);
    int copiedSymbols = 0;

    char * newLine = (char *)calloc(lenght + 1, sizeof(char));

    for(; str[copiedSymbols] != '\0'; copiedSymbols++) {
        newLine[copiedSymbols] = str[copiedSymbols];
    }
    newLine[copiedSymbols] = '\0';

    return newLine;
}
