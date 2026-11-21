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

    int countSetBits(int n){
        int cnt = 0;
        while(n > 1){
            if(n % 2 == 1){
                cnt+=1 ;
            }
            n = n/2;
        }   
            if(n == 1){
            cnt+=1;
        }
        return cnt;
    }



int main(){
    int n = 13;
    char res[33];
    int cnt;
    
    cnt = countSetBits(n);
    printf("Number of set bits in %d is %d\n", n, cnt);
}

