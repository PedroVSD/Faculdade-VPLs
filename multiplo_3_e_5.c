#include <stdio.h>
int main(){
    int X, i, soma=0;
    scanf("%d", &X);
    for(i = 0 ; i < X; i++){
        if(i%3==0 || i%5==0){
            soma += i;
        }
    }
    printf("%d", soma);
    return 0;
}