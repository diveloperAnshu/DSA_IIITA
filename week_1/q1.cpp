#include<bits/stdc++.h>
using namespace std;

int largest(vector<int>&arr) {
    int largest=INT_MIN;
    for(int i=0;i<arr.size();i++) {
        if(arr[i]>largest) {
            largest=arr[i];
        }
    }
    return largest;
}

int main() {
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++) {
        int tmp;
        cin>>tmp;
        arr.push_back(tmp);
    }
    int ans=largest(arr);
    cout<<ans<<endl;
}