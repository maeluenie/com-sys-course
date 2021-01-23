int priceCheck(int products_count, char** products, int productPrices_count, float* productPrices, int productSold_count, char** productSold, int soldPrice_count, float* soldPrice) {
    int count = 0;
    for(int i=0; i<productSold_count;i++){
        for(int j=0; j<products_count; j++){
            if(strcmp(productSold[i], products[j]) == 0){
                if (soldPrice[i] != productPrices[j]){
                    count++;
                }
            }
        }
    }
    return count;
}