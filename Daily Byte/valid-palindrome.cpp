// This question is asked by Facebook. Given a string, return whether or not it forms a palindrome ignoring case and non-alphabetical characters.
// Note: a palindrome is a sequence of characters that reads the same forwards and backwards.

// Ex: Given the following strings...

// "level", return true
// "algorithm", return false
// "A man, a plan, a canal: Panama.", return true

#include <bits/stdc++.h>
using namespace std;

string removeSpecialCharacter(string s)
{
    int j = 0;
    for (int i = 0; i < s.size(); i++) {
         
        // Store only valid characters
        if ((s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >='a' && s[i] <= 'z'))
        {
            s[j] = s[i];
            j++;
        }
    }
    return s.substr(0, j);
}

int main() 
{
    string str ;
    getline(cin , str);
    str = removeSpecialCharacter(str);
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    //https://www.geeksforgeeks.org/conversion-whole-string-uppercase-lowercase-using-stl-c/
    string rev = string(str.rbegin(),str.rend());
    if (str == rev)
    {
        cout<<"true";
    }
    else {
        cout<<"false";
    }
    return 0;
}