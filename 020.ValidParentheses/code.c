bool isValid(char * s) {
    if ((strlen(s) < 2) || (strlen(s) > 10000)) 
        return false;
    
    char ch, top;
    char stack[10000] = {};
    int topIndex = -1;

    for (int i = 0; i < strlen(s); i++) {
        ch = s[i];

        switch (ch) {
            case '(':
            case '[':
            case '{':
                topIndex++;
                stack[topIndex] = ch; //push
                break;
            case ')':
                if (topIndex < 0)
                    return false;
                top = stack[topIndex]; //pop
                topIndex--;

                if (top != '(')
                    return false;
                break;
            case ']':
                if (topIndex < 0)
                    return false;
                top = stack[topIndex]; //pop
                topIndex--;

                if (top != '[')
                    return false;
                break;
            case '}':
                if (topIndex < 0)
                    return false;
                top = stack[topIndex]; //pop
                topIndex--;
                
                if (top != '{')
                    return false;
                break;
            default:
                return false;
        }
    } 

    if (topIndex < 0)
        return true;
    else
        return false;
}

int main(int argc, char *argv[]) {
    printf("%d\n", isValid(argv[1]));
    return 0;
}
