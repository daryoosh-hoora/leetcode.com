int lengthOfLastWord(char * s) {
    //Simulate strtok()
    int l = 0;
    int k = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != ' ') {
            l++;
            k = l;
        } else {
            l = 0;
        }
    }
    return k;
}
