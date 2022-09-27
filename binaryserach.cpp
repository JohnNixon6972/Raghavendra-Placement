// Code Written by : John Nixon
// Date: 27:09:2022  Time: 12:26:52
// Copyrights are applicable
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long int>
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     std::ios::sync_with_stdio(false);
//     ll n,key;
//     cin>>n;
//     ll num;
//     vll arr;

//     for (ll i = 0;i<n;i++){
//         cin>>num;
//         arr.push_back(num);
//     }

//     cin>>key;

//     bool isPresent = false;
//     for (ll i = 0;i<n;i++){
//         if(arr[i] == key){
//             isPresent = true;
//             break;
//         }
//     }
//     if(isPresent){
//         cout<<"True";
//     }else{
//         cout<<"False";
//     }
// }

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    std::ios::sync_with_stdio(false);

    ll n,key;
    cin>>n;
    ll num;
    vll arr;

    for (ll i = 0;i<n;i++){
        cin>>num;
        arr.push_back(num);
    }

    cin>>key;

    bool isPresent = false;

    ll left,right;
    left = 0;
    right = n-1;
    ll mid;
    while(left <= right){
        mid = (left + right) /2;
        if (arr[mid] == key){
            isPresent = true;
            break;
        }

        if(key > arr[mid]){
            left =  mid+1;
        }else if (key < arr[mid]){
            right = mid-1;
        }
    }
    if(isPresent){
        cout<<"True";
    }else{
        cout<<"False";
    }

    return 0;
}