#include<bits/stdc++.h>

using namespace std;




int main(){
    string s, output;
    getline(cin, s);
    for(int i = 0; i < s.length();i++){
        if(isalnum(s[i])){
            output += s[i];
            
            
        }
        



    }


    for(int i = 0;i < output.length();i++){
        output[i] = tolower(output[i]);
    }


    //cout<<output<<endl;

    int res = 1;


    int n = output.length();
    int mid = n / 2;
    for(int i = 0;i < mid;i++){
        if(output[i] != output[n-i-1]){
            res = -1;
            break;

        }
    }

    if(res == 1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    
}