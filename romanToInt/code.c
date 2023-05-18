#include <stdio.h>
#include <string.h>

int romanToInt(char *s) {
    int i, result = 0;
    int *p;
    char roman[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int integer[] = {1, 5, 10, 50, 100, 500, 1000};
    //char str[] = s;

    printf("%p\n", s);
    printf("%s\n", s);
    printf("%p\n", &s);

    return 0;

    //str = *s;
/*
    while (str[i] != '\0') {
        p = strstr(*roman, str[i]);

        result += integer[*p];

        if (i > 0) {
            if (((str[i] == 'V') | (str[i] == 'X')) & str[i - 1] == 'I')
                result -= 2;
            else if (((str[i] == 'L') | (str[i] == 'C')) & str[i - 1] == 'X')
                result -= 20;
            else if (((str[i] == 'D') | (str[i] == 'M')) & str[i - 1] == 'C')
                result -= 200;
        }

        return result;
        
        switch (s[i]) {
            case 'I':
                break;
            case 'V';
                break;
            case 'X':
                break;
            case 'L':
                break;
            case 'C':
                break;    
            case 'D':
                break;
            case 'M':
                break;
            default;
                break;
        } 
    }*/
}

int main(int argc, char * argv[]) {
    printf("%d\n", romanToInt(argv[1]));

    return 0;
}
