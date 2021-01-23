char* smallestString(int substrings_count, char** substrings) {
    char *temp, tmp1[3000], tmp2[3000];
    for (int i = 0; i < substrings_count-1; i++) {
        for (int j = i+1; j < substrings_count; j++) {
            
            strcpy(tmp1, substrings[i]);
            strcat(tmp1, substrings[j]);
            
            strcpy(tmp2, substrings[j]);
            strcat(tmp2, substrings[i]);
            
            if (strcmp(tmp1, tmp2) >= 0) {
                temp = substrings[i];
                substrings[i] = substrings[j];
                substrings[j] = temp;
            }
        }
    }
    static char s[300000] = ""; 
    for (int i = 0; i < substrings_count; i++) { 
        strcat(s, substrings[i]);
    } 
    return s;
}