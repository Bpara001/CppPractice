#include <iostream>

using namespace std;
string Compression(string s){
    string str,temp;
    int counter=1;
    if(s.size()<2)
        return s;
    for(unsigned i=0;i<s.size()-1;i++){
        if(s.at(i) == s.at(i+1)){
            counter +=1;
        }
        else{
            temp=to_string(counter);
            counter=1;
            str+=s.at(i)+temp ;

        }

    }
    str+=s.at(s.size()-1) +to_string(counter);
    if(str.size() > s.size())
    {
        return s;
    }
    return str;


}
int main(){
    string str,finale;
    cout<< "Enter a String:"<<endl;
    getline(cin,str);
    finale=Compression(str);
    cout<<finale;


    return 0;
}