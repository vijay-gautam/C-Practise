#include <bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    getline(cin , str);
    int n = str.length();
    int cou1 = 0 ;
    int cou2 = 0; 
    

    // remember to use ascii code in c++ for strings
    for (int i=0;i<n ; i++){
        if (  str[i] == 76 || str[i] == 108) {
            cou1++;
        }
        else if(str[i] == 82 || str[i] == 114)
        {
            cou1--;
        }
        else if(str[i] == 85 || str[i] == 117)
        {
            cou2++;
        }
        else if(str[i] == 68 || str[i] == 100)
        {
            cou2--;
        }
        else {
            cout << "Some unexpected actions present !!";
            return 0;
        }
    }
    if (cou1 == 0 & cou2 == 0) {
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }
    return 0;
}