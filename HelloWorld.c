#include <stdio.h>

int main(){
    int n=2,m=10,flag=0;
    
    
    for(int j=n;j<m;j++){
        for(int i=2;i<=j/2;i++){
            if(j%i==0){
            flag=1;
            break;}
        }
        if(flag==0){
            printf("%d",j);
        }
    }
}