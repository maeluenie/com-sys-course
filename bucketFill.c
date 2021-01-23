void floodFill(int height, int width, int x, int y, char color, char **picture){
    if( x < 0 || y < 0 || x > width || y > height || picture[y][x] != color){
        return;
    }
    else {
        //marked visited with 'f'
        picture[y][x] = 'f';
        floodFill(height, width, x-1, y, color, picture);
        floodFill(height, width, x, y-1, color, picture);
        floodFill(height, width, x+1, y, color, picture);
        floodFill(height, width, x, y+1, color, picture);
        return;   
    }
}

int strokesRequired(int picture_count, char** picture) {
    int width = strlen(*picture);
    int filled = 0;
    for(int i=0; i<picture_count; i++){
        for(int j=0; j< width; j++){
            if(picture[i][j] != 'f'){
                floodFill(picture_count-1, width-1, j, i, picture[i][j], picture);
                filled++;
            }
        }
    }
    return filled;
}