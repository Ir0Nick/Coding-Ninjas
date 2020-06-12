/*******
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

#include "Queue.h"
int main() {
    
    Queue<int> q;
    
    int choice;
    cin >> choice;
    int input;
    
    while (choice !=-1) {
        if(choice == 1) {
            cin >> input;
            q.enqueue(input);
        }
        else if(choice == 2) {
            int ans = q.dequeue();
            if(ans != 0) {
                cout << ans << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if(choice == 3) {
            int ans = q.front();
            if(ans != 0) {
                cout << ans << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if(choice == 4) {
            cout << q.getSize() << endl;
        }
        else if(choice == 5) {
            cout << q.isEmpty() << endl;
        }
        cin >> choice;
    }
    
}

*******/




template<typename T>
class Queue {
    Node<T> * head;
    Node<T> * tail;
    int size;
    
    
    public :
    
    
    Queue() {
        head = tail = NULL; 
    	size = 0;
    }
    
    void enqueue(T data) {
        Node<T> * ptr = new Node<T>(data);
        if(size==0)
        {
            	head = tail = ptr;
            
        }
        else
        	{	 tail->next = ptr;
    		   	 tail = tail->next;
            }
        size++;
    }
    
    int getSize() {
        return size;
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    T dequeue() {
        if(size==0)
            return 0;
        Node<T> * ptr = head;
        head = head->next;
        size--;
        return ptr->data;
        
    }
    
    T front()  {
        return head->data;
    }
};
