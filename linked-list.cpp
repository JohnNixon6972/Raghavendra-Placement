// Code Written by : John Nixon
// Date: 19:09:2022  Time: 19:28:45
// Copyrights are applicable
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long int>

struct Node{
    int data;
    Node *link;
};
 
Node* getNewNode(int data){
    Node* node = new Node;
    node->data = data;
    node->link = NULL;
    return node;
}

void insertNode(Node **head,int data){
    Node *newNode = getNewNode(data);
    Node* ptr;
    if(*head == NULL){
        *head = newNode;
    }

    else{
        ptr = *head;

        while(ptr->link != NULL){
            ptr = ptr->link;
        }
        ptr->link = newNode;
    }
}

Node* createLinkedList(int arr[],int n){
    Node *head = NULL;
    for (int i = 0;i<n;i++){
        insertNode(&head,arr[i]);
    }
    return head;
}

void printLinkedList(Node *head){
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->link;
    }
    cout<<"NULL";
}


void printReverse(Node *head){
    if(head == NULL){
        return;
    }
    else{
        printReverse(head->link);
        cout<<head->data<<"->";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    std::ios::sync_with_stdio(false);

    int n =10;
    int num;
    int arr[n];

    for (int i = 0;i<n;i++){
        cin>>num;
        arr[i] = num;
    }
    
    Node *head =  createLinkedList(arr,n);
    printLinkedList(head);
    cout<<endl;
    printReverse(head);
    cout<<endl;
}