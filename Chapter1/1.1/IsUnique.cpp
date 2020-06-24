#include <iostream>
#include <algorithm>
using namespace std;


bool IsUnique(string s){

    if(s.size() > 128 ) {
        return false;
    }
    if(s.size() <2 ){
        return true;
    }

    sort(s.begin(),s.end());
    for(int i =0 ; i<s.size()-1;i++){

        if(s.at(i) == s.at(i+1)){
            return false;
        }
    }
    return true;
}


int main(){
    cout<<"Test 1: "<<endl;
    string Test= "abcdefga";
    if(IsUnique(Test)){
        cout<<"String is Unique"<<endl;
    }
    else{
        cout<<"String is not Unique"<<endl;
    }
    return 0;
}