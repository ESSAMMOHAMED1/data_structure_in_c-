#include <bits/stdc++.h>

using namespace std;
//   A linked list is a linear data structure,
//   in which the elements are not stored at contiguous memory locations.
//   The elements in a linked list are linked using pointers
//====================================================================================
//- types of linked list

// 1- Single-linked list
//    - Each node has data and a reference to the next node.
//    - It's unidirectional.
//====================================================================================

// set structure of Single-linked list
// +-------+    +-------+    +-------+    +-------+
// | data  | -> | data  | -> | data  | -> | data  |
// +-------+    +-------+    +-------+    +-------+
// | next  |    | next  |    | next  |    | NULL  |
// +-------+    +-------+    +-------+    +-------+

struct Node
{
    string name; // set data
    int number;  // set data
    Node *next;  // set pointer to linke nodes
};

Node *H = NULL; // set main pointer  Head
Node *T = NULL; // set main pointer  Tail
Node *C = NULL; // set main pointer  Current

//==================================================================================

// add new node to head of list
void Add_Head(string A, int B)
{
    C = new Node;  // creat new node
    C->name = A;   // set data of node
    C->number = B; // set data of node
    // check if list is impety
    if (H == NULL && T == NULL)
    {
        H = C;             // set head = current
        T = C;             // set tail = current
        C->next = NULL; //  set pointer next = null
    }
    else
    {
        C -> next = H; // set current of next = head
        H = C;       // set current = head
    }
}

//==========================================================================================

// add new node to tail

void Add_Tail(string A, int B)
{
    C = new Node;      // creat new node
    C->name = A;       // set data of node
    C->number = B;     // set data of node
    C->next = NULL; //  set pointer next = null >> case it's a tail (:
    // check if list is impety
    if (H == NULL && T == NULL)
    {
        H = C; // set head = current
        T = C; // set tail = current
    }
    else
    {
        T->next = C; // pointer tail of next -> current
        T = C;       // set tail = current
    }
}

//==============================================================================================
// Delete Head node

void Erase_Head()
{
    C = H;       // set current = head
    H = H->next; // set head =>> head of next
    delete C;    // delete current
}
//==============================================================================================

// delete Tail node

void Erase_Tail()
{
    C = H; // set current = head

    while (C->next != T) // Cheak If
    {                    // Current of next
        C = C->next;     // Equal
    }                    // Tail
   
    delete T; // Delete tail

    T = C; //set tail = current 

    C->next = NULL; // set pointer => null 
}

//=====================================================================================
// print linked list 

void Print_Nodes(){
C = H;
while (C!=NULL)
{
    cout<<"Name : "<<C->name<<","<<"ID : "<<C->number<<endl;
    C = C->next;
}

}








int main()
{
Add_Head("ahmed",1);
Add_Head("essam",2);
Add_Head("mohmaed",3);
Add_Head("gnaa",4);
Print_Nodes();
}