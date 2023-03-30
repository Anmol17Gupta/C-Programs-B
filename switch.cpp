#include <iostream>
using namespace std;

/*int main(){
    int day;
    cout<<"Enter day no.:";
    cin>>day;

    switch (day){

        case 1:
        cout<<"Mon"<<endl;
        break;

        case 2:
        cout<<"Tue"<<endl;
        break;

        case 3:
        cout<<"Wed"<<endl;
        break;

        case 4:
        cout<<"Thu"<<endl;
        break;
        
        case 5:
        cout<<"Fri"<<endl;
        break;

        default:
        cout<<"Default case"<<endl;
    }
}*/

int main(){

    char alp;
    cout<<"Enter a letter";
    cin>>alp;

    switch(alp){

        case "a":
        cout<<"vowel"<<endl;
        break;

        default :
        cout<<"consonant"<<endl;


    }

    return 0;
}