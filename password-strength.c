#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char password[100];
    int length, hasUpper=0, hasLower=0, hasDigit=0, hasSpecial=0;
    printf("Enter your password: ");
    scanf("%s", password);
    length = strlen(password);

    for(int i=0; i<length; i++){
        if(password[i]>='A' && password[i]<='Z') hasUpper = 1;
        else if(password[i]>='a' && password[i]<='z') hasLower = 1;
        else if(password[i]>='0' && password[i]<='9') hasDigit = 1;
        else hasSpecial = 1;
    }

    if(length >= 8 && hasUpper && hasLower && hasDigit && hasSpecial){
        printf("Strong Password\n");
    } else {
        printf("Weak Password\n");
    }
    return 0;   
}