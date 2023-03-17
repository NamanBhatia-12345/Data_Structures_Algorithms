#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};
 
Node* newNode(int data, Node *nextNode)
{
    Node* node = new Node();
    node->data = data; 
    node->next = nextNode;
    return node;
}

Node* constructList(vector<int> &keys, int n)
{
    Node *head = NULL, *node = NULL;
    for (int i = n - 1; i >= 0; i--){
        node = newNode(keys[i], node);
        head = node;
    }
    return head;
}
void printList(Node* head)
{
    Node* ptr = head;
    while (ptr != NULL){
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    printf("NULL");
}
Node *reverse(Node *head){
    if(head == NULL)
      return head;
    Node *curr = head, *prev = NULL, *n = head->next;
    while(curr != NULL){
        curr->next = prev;
        prev = curr;
        curr = n;
        if(n != NULL)
          n = n->next;
    }  
    return prev;
}

Node *update_linked_list(Node *root){
    vector<int> mp;
    Node *temp = root;
    while(temp != NULL){
        mp.push_back(temp->data);
        temp = temp->next;
    }
    Node *res = reverse(root);
    int j = 0;
    Node *ans = res;
    while(j < mp.size() and res != NULL){
        res->data = (res->data + mp[j]);
        res = res->next;
        j++;
    }
    int len = 0;
    Node *x = ans, *slow = ans, *fast = ans;
    while(x != NULL){
        len++;
        x = x->next;
    }
    if(len % 2 != 0){
        while(fast != NULL and fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->data = (slow->data / 2); 
    }
    return ans;
} 
int main()
{
    int n;
    cin >> n;
    vector<int> keys(n);
    for(int i=0;i<n;i++)
      cin >> keys[i];
    Node* head = constructList(keys, n);
    Node *result = update_linked_list(head);
    printList(result);
    return 0;
}