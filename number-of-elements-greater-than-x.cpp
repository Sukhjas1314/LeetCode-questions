#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);

    cout << "Enter the elements : ";
    for(int i = 0 ; i < v.size() ; i++){
        cin >> v[i];
    }
    cout << endl;

    int x;
    cout << "Enter the value of x : ";
    cin >> x;

    int count = 0;

    for(int i = 0 ; i < v.size() ; i++){
        if(v[i] >= x){
            count++;
        }
    }
    cout << "The number of elements greater than " << x << " are : " << count << endl;
    cout << endl;
    return 0;
}