#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

void Insert_In_Tail(Node *head,int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
    }
    Node *tmp = head;
    while(tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void Print_Linked_List(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main() {
    int n =100;
    Node* head = new Node(10);
    Insert_In_Tail(head,n);
    Print_Linked_List(head);
    return 0;
}