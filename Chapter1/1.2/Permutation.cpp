#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


bool Permutation(string s1, string s2){
    if(s1.size() != s2.size() || s1.size()==0 || s2.size() ==0){
        return false;
    }
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
    sort(s2.begin(),s2.end());
    cout<<s2<<endl;
    return (s1.compare(s2) ==0);
}

int main(){
string s1,s2;
cout<<"Please Enter 2 strings to see if its a Permutation"<<endl;
cout<<"Please Enter First String: "<<endl;
cin>>s1;
cout<<"Please Enter Second String: "<<endl;
cin>>s2;

if(Permutation(s1,s2)){
    cout<<"String is a Permutation"<<endl;
}
else{
    cout<<"Strings are different"<<endl;
}


    return 0;
}
