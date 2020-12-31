#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
};

Node *head = NULL;
Node *next = NULL;

void insert(Node *current)
{
    
}

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);
    Node *limit;

    for (int i = 0; i < n; i++)
    {

        int ele;
        cin >> ele;
        Node *temp = new Node();
        temp->data = ele;
        temp->next = NULL;

        if (head == NULL)
        {

            head = temp;
            limit = head;
        }
        else
        {

            limit->next = temp;
            limit = temp;
        }
    }
    Node *start = head;

    while (start->next != NULL)
    {
        cout << start->data;
        cout << "  ";
        start = start->next;
    }

    Node *temp = head;
    Node *ahead = temp->next;

    while (temp->next != NULL && ahead->next != NULL)
    {

        if (temp->data == ahead->data)
        {
            temp->next = ahead->next;
            free(ahead);
        }

        temp = temp->next;
        ahead = ahead->next;
    }

    return 0;
}