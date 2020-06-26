#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

void lowerS(string &s){
    transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c){ return std::tolower(c); });//
}//Source:: https://stackoverflow.com/questions/313970/how-to-convert-stdstring-to-lower-case

string OddPali(string s){
    string answer;
    int sum=0;
    int pos=0;
    int numarray[26]= {0};
    for(unsigned int i=0;i<s.size();i++){
        if(s[i] >= 'a' && s[i]<='z'){
            pos=s[i]-'a';
            ++numarray[pos];
            if(numarray[pos] %2 ){
                sum+=1;
            }
            else{
                sum-=1;
            }
        }
    }
    if(sum<=1){
        answer="It is Palindrome";
    }
    else{
        answer="It is not a Palindrome";
    }
    return answer;
}
string EvenPali(string s){
    string answer;
    int sum=0;
    int pos=0;
    int numarray[26]= {0};
    for(unsigned int i=0;i<s.size();i++){
        if(s[i] >= 'a' && s[i]<='z'){
            pos=s[i]-'a';
            ++numarray[pos];
            if(numarray[pos] %2 ){
                sum+=1;
            }
            else{
                sum-=1;
            }
        }
    }
    if(sum !=0){
        answer="It is not Palindrome";
    }
    else{
        answer="It is a Palindrome";
    }
    return answer;
}

void PaliPerm(string s){
    string tempS= s;
    string solution;
    lowerS(tempS);

    if(s.size() % 2 ==0 ){
        solution=EvenPali(tempS);
     }
     else{
        solution=OddPali(tempS);
     }
    cout<<solution;
}//Primary function


int main(){
    string str=("TactCoaa");
    PaliPerm(str);

    return 0;
}