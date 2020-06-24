#include <iostream>
#include <string>

using namespace std;

void URLify(string s)
{
    string space="%20";
    string replaced="";
    int flip=0;
    for(int i =0;i< s.size();i++){
        if(s.at(i) == ' ' && flip == 0){
            flip=1;
            replaced+=space;
        }
        else if(s.at(i) != ' '){
            flip=0;
            replaced+=s.at(i);
        }
    }
    cout<<replaced<<endl;
}

int main()
{
    string UrlString= "";
    cout<<"Please Enter String: "<<endl;
    getline(cin,UrlString);
    URLify(UrlString);


    return 0;
}