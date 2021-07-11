#include <bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    getline(cin , str);
    int n = str.length();
    int count = 0 ;

    
    // remember to use ascii code in c++ for strings
    for (int i=0; i<n ; i++){
        if (str[i] >= 65 & str[i] <= 90){
            count++;
        }   
    }
    (count == n) ? cout<<"true" : cout<<"false";
    return 0;
}