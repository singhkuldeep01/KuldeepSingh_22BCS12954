#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define MOD 1000000007
#define INF 1e18
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
int power(int b , int p , int m){if(p == 0) return 1;if(p == 1) return b;int res = power(b, p/2, m);if(p % 2 == 0) return (res * res) % m;else return (((res * res) % m) * b) % m;}

class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class LinkedList{
    node *head;
    public:
    LinkedList(){
        head = NULL;
    }
    void insertAtHead(int data){
        node *new_node = new node(data);
        if(head == NULL) head = new_node;
        else {
            new_node->next = head;
            head = new_node;
        }
    }
    void removeFromHead(){
        if(head == NULL){
            cout<<"\nUnder flow";
        }else{
            node *temp = head;
            head = head->next;
            delete(temp);
        }
    }
    void display(){
        node *temp = head;
        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    void reverse(){
        node *prev = NULL , *curr = head , *next = NULL;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
};

void solve() {
    LinkedList ll;
    ll.insertAtHead(1);
    ll.insertAtHead(2);
    ll.insertAtHead(3);
    ll.display();
    cout<<endl;
    ll.reverse();
    ll.display();
    ll.removeFromHead();
    // ll.removeFromHead();
    // ll.removeFromHead();
    // ll.removeFromHead();
    cout<<endl;
    ll.display();

}

int32_t main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif */
    fast_io;
    int t = 1;
    //cin>>t;
    while(t--) solve();
    return 0;
}