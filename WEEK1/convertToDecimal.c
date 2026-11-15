#include <stdio.h>
#include <string.h>

int convertToDecimal(char s[]){                  //TC = O(len)//
    int len = strlen(s);                         //SC = O(1)//
    int p2 = 1;
    int num = 0;

    for(int i = len-1; i>=0; i--){
        if(s[i] == '1'){
            num = num + p2;
        }
        p2 = p2*2;
    }
    return num;
}

int main(){
    char binary[33];

    printf("Enter a binary number: ");
    scanf("%32s", binary);

    int result = convertToDecimal(binary);
    printf("%s binary in decimal is: %d\n", binary, result);

    return 0;
}