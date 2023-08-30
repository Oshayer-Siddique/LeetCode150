#include<iostream>
#include<stack>
#include<string>
#include<vector>


using namespace std;

void func(vector<string> &ans,int n,int open,int close,string curr_str){
    //base case
    if(curr_str.size() == 2 * n){
        ans.push_back(curr_str);
        return;

    }
    if(open < n ){
        func(ans,n,open+1,close,curr_str + "(");

    }
    if(close < n and close < open){
        func(ans,n,open,close+1,curr_str + ")");
    }


}

void printvector(vector<string> &vec){
    for(int i =0;i < vec.size();i++){
        cout<<vec[i]<<" ";
    }
}

int main(){
    

    vector<string> ans;

    int n;
    cin >> n;

    func(ans,n,0,0,"");

    printvector(ans);



}