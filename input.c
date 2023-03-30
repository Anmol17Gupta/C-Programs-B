#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define maxstring 20
#define maxlength 100

void main(){
    char string[maxstring][maxlength];
    int numString=0;
    int ch=1;

    //Used to input string
    while(ch){
        printf("Enter string(or write FINISH to end)");
        gets(string[numString]);
        if(strcpy(string[numString],"FINISH")==0){
            ch=2;
            break;
        }
        numString++;
    }

    //used to find capital letters
    for(int i=0;i<numString;i++){
        for(int j=0;j<strlen(string[i]);j++){
            if(string[i][j]>='A' && string[i][j]<='Z'){
                printf("%s,First capital letter%c",string[i],string[i][j]);
            }
        }
    }
}