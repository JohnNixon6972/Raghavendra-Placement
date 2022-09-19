// Code Written by : John Nixon
// Date: 19:09:2022  Time: 19:10:21
// Copyrights are applicable
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long int>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    std::ios::sync_with_stdio(false);

    // Normal Variable 
    int a = 10;
    // Poniter Variable
    int *ptr;
    ptr = &a;
    // To see the Address of variable "a"
    cout<<"Address a :: "<<ptr<<endl;
    // To see the value inside variable "a"
    cout<<*ptr<<endl;

    int **ptr2;
    ptr2 = &ptr;
    cout<<"Address of ptr :: "<<ptr2<<endl;

    // *ptr += 20;
    **ptr2 += 30;
    cout<<a;

}