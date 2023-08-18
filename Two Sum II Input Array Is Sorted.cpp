#include<bits/stdc++.h>
using namespace std;

int main(){

    int n , sum;
    cin >> n >> sum;

    vector<int> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());

    //cout << arr[0] << arr[n-1]<<endl;

    int low = 0, high = n-1;

    while(low < high) {
        if(arr[low] + arr[high] < sum){
            low++;
        }
        else if(arr[low] + arr[high] > sum){
            high--;
        }
        else if(arr[low] + arr[high] == sum){
            cout << arr[low] << " " << arr[high] <<endl;
            low++;
            high--;

        }
        else{
            cout <<"No output"<<endl;
        }
    }





}