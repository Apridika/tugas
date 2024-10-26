#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char kata[20];
    int i, n;   
    cout << "check kata\n";
    cout << "input kata :";
    cin >> kata;
    n = strlen(kata);
    for(i=0; i<n; i++){
        if(kata[i]!=kata[n-i-1])
        {
            i=n;
            cout << "hasil : false";
        }
        else
        {
            i=n;
            cout << "hasil : true";
        }
    }
    return 0;
}