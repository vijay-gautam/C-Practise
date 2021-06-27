/*
This question is asked by Google. Given a string, reverse all of its characters and return the resulting string.

Ex: Given the following strings...

“Cat”, return “taC”
“The Daily Byte”, return "etyB yliaD ehT”
“civic”, return “civic”
*/

#include  <bits/stdc++.h>
using namespace std ;


void str_reverse(string& str){
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main() {
    string str ;
    getline(cin , str);
    // str_reverse(str); //own function
    reverse(str.begin() , str.end()); //inbuilt function
    cout<<str;
    return 0;
}