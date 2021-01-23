int entryTime(char* s, char* keypad) {
    printf("%d", (int) strlen(s));
    int totaltime =0;
    int *current = calloc(strlen(s), sizeof(int));
    for(int i=0; i<strlen(s); i++){
        for(int j=0;j<strlen(keypad);j++){
            if(s[i] == keypad[j]){
                current[i] = j;
            }
        }
    }
    for(int i=0; i<strlen(s)-1;i++){
        int row = current[i]/3;
        int column = current[i]%3;
        int nextrow = current[i+1]/3;
        int nextcolumn = current[i+1]%3;
        int diffrow = abs(row - nextrow);
        int diffcolumn = abs(column - nextcolumn);
        if(diffrow>diffcolumn){
            totaltime += diffrow;
        }
        else {
            totaltime += diffcolumn;
        }
    }
    return totaltime;   
}