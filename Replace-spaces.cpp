#include<iostream>
using namespace std;
string replaceSpaces(string &str){
    string temp = "";
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}
int main(){
    string headline;
    cout << "Enter the headline : ";
    getline(cin,headline);

    cout << "The Headline without any space : " << replaceSpaces(headline) << endl;

    cout << endl;
    return 0;
}