

/*******
 Following Node class and main already created internally. You can directly use that.
 
#include<iostream>
using namespace std;


template <typename T>
class Node {
    public :
    T data;
    Node<T> *next;
    
    Node(T data) {
        this -> data = data;
        next = NULL;
    }
};

#include "Stack.h"
    int main() {
        
        Stack<int> st;
        
        int choice;
        cin >> choice;
        int input;
        
        while (choice !=-1) {
            if(choice == 1) {
                cin >> input;
                st.push(input);
            }
            else if(choice == 2) {
                int ans = st.pop();
                if(ans != 0) {
                    cout << ans << endl;
                }
                else {
                    cout << "-1" << endl;
                }
            }
            else if(choice == 3) {
                int ans = st.top();
                if(ans != 0) {
                    cout << ans << endl;
                }
                else {
                    cout << "-1" << endl;
                }
            }
            else if(choice == 4) {
                cout << st.getSize() << endl;
            }
            else if(choice == 5) {
                cout << st.isEmpty() << endl;
            }
            cin >> choice;
        }
    
    } 
***********/

template <typename T>
class Stack {
    Node<T> *head;
    int size;		// number of elements prsent in stack
    
    public :
    
    Stack() {
        head = NULL;
        size = 0;
    }
    
    int getSize() {
        return size;
    }
    
    bool isEmpty() {
        return (size==0);
    }
    
    void push(T element) {
        Node<T> *ptr = new Node<T>(element);
        ptr->data = element;
        ptr->next = head;
        head = ptr;
        size++;
    }
    
    T pop() {
        if(size==0)
        return 0;
        Node<T> * ptr= head;
        head = head->next;
        size--;
        return ptr->data;
        
    }
    
    T top() {
        if(head==NULL)
            return 0;
       return head->data;
        
    }
    
};
