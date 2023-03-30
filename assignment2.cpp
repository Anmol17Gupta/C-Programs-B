#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter an integer 1";
    cin>>n1;
    cout<<"Enter an integer 2";
    cin>>n2;

    
    cout<<"Sum"<<n1+n2;
 //Swapping of two variables

    int temp=n1;
    n1=n2;
    n2=temp;

    cout<<"\nn1"<<n1<<"\nn2"<<n2<<endl;

}
