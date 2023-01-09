int length(char pwd1[], char pwd2[]) {
    size_t len1 = strlen(pwd1), len2 = strlen(pwd2);
    return len1 < 6 || len1 > 16 || len2 < 6 || len2 > 16;
}

int compare(char pwd1[], char pwd2[]) {
    return strcmp(pwd1, pwd2) != 0;
}

int content(char pwd1[]) {
    char c;
    int i = 0;
    _Bool upper = 1, lower = 1, digit = 1;
    while((c = pwd1[i]) != '\0')
    {
        if(isupper(c)) upper = 0;
        else if(islower(c)) lower = 0;
        else if(isdigit(c)) digit = 0;
        ++i;
    }
    return upper || lower || digit;
}