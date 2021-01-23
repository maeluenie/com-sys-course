int countDuplicate(int numbers_count, int* numbers) {
    int i,j,count,temp = 0;
    for (int i = 0; i < numbers_count; i++) {     
        for (int j = i+1; j < numbers_count; j++) {     
           if(numbers[i] > numbers[j]) {    
               temp = numbers[i];    
               numbers[i] = numbers[j];    
               numbers[j] = temp;    
           }     
        }     
    }
    printf("%d", * numbers); 
    for(i=0; i<numbers_count; i++){
        for(j=i+1; j<numbers_count; j++){
            if(numbers[i] == numbers[j]){
                if(numbers[i] != temp){
                    temp = numbers[j];
                    numbers[j] =0;
                    count++;
                }
            }
        }
    }
    return count;
}