#include <iostream>
using namespace std;
#include <vector>

int main(){

    vector <int> v;
    int k=3;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    k=k%v.size();

    reverse(v.begin(),v.end());        //Reversing the vector
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());

    for(int a:v){
        cout<<a<<" ";
    }
    cout<<endl;

    return 0;

}