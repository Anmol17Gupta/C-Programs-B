#include <iostream>
using namespace std;
//RECTANGULAR PATTERN
/*int main(){
    int n,m;            //n=no. of rows & m=no. of columns
    cin>>n>>m;

    for(int i=1;i<=n;i++){          //1st loop is for rows
        for(int j=1;j<=m;j++){      //2nd loop is for columns
            cout<<"*";
        }
        cout<<endl;                //used to go in next line
    }
    return 0;
}*/

//HOLLOW RECTANGULAR PATTERN
/*int main(){
    int n,m;      //n=no. of rows & m=no. of cols
    cin>>n>>m;

    for(int i=1;i<=n;i++){       //1st loop is for rows
        for(int j=1;j<=m;j++){   //2nd loop is for cols
            if(i==1 || i==n || j==1 || j==m){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}*/

//TRIANGULAR PATTERN
/*int main(){
    int n;   //no. of rows
    cin>>n;
    for (int i=1;i<=n;i++){       //for rows
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}*/

//INVERTED TRIANGULAR PATTERN
/*int main(){
    int n;   //no. of rows
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=(n-i+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}*/

//PYRAMID TRIANGULAR PATTERN
/*int main(){
    int n;
    cin>>n; //no. of rows

    for (int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }

        cout<<endl;    
    }
    return 0;
}*/

//NUMERICAL RECTANGULAR PATTERN
int main(){
    int n;  //no. of rows
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<i;
        }
        for(int j=1;j<=(i-1);j++){
            cout<<j;
        }

        cout<<endl;
    }
    return 0;

}