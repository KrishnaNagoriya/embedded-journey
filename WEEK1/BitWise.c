#include <stdio.h>

void convertToBinary(int n, char res[]){
    char temp[33];
    int len = 0;

    if(n == 0){
        res[0] = '0';
        res[1] = '\0';
        return;
    }

    while(n>0){
        temp[len] = (n%2) + '0';
        len++;
        n = n/2;
    }

    for(int i=0; i<len; i++){
        res[i] = temp[len-1-i];
    }
    res[len] = '\0';
}

void BitWise(int j, int n){
    1<<j ;

    if((n & (1<<j)) != 0){
        printf("The %dth bit is set\n", j);
    } else{
        printf("The %dth bit is not set\n", j);
    }
}

int main(){
    int n = 13;
    char res[33];
    int j=2;

    BitWise(j, n);
}