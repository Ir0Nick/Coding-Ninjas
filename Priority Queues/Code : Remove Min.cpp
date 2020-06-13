#include <vector>

/*******************
 * Main function -
*
int main() {
    PriorityQueue pq;
    int choice;
    cin >> choice;
    while(choice != -1) {
        switch(choice) {
            case 1 : // insert
                int element;
                cin >> element;
                pq.insert(element);
                break;
            case 2 : // getMin
                cout << pq.getMin() << endl;
                break;
            case 3 : // removeMin
                cout << pq.removeMin() << endl;
                break;
            case 4 : // size
                cout << pq.getSize() << endl;
                break;
            case 5 : // isEmpty
                if(pq.isEmpty()) {
                    cout << "true" << endl;
                }
                else {
                    cout << "false" << endl;
                }
            default :
                return 0;
        }
        cin >> choice;
    }
}
**************************/


class PriorityQueue {
    vector<int> pq;
    
    public :
    
    PriorityQueue() {
        
    }
    
    bool isEmpty() {
        return pq.size() == 0;
    }
    
    // Return the size of priorityQueue - no of elements present
    int getSize() {
        return pq.size();
    }
    
    int getMin() {
        if(isEmpty()) {
            return 0;		// Priority Queue is empty
        }
        return pq[0];
    }
    
    void insert(int element) {
        pq.push_back(element);
        
        int childIndex = pq.size() - 1;
        
        while(childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;
            
            if(pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            else {
                break;
            }
            childIndex = parentIndex;
        }
        
    }
    
    int removeMin() {
        int temp = pq[0];
        pq[0] = pq[pq.size()-1];
        pq.pop_back();
        int limit = pq.size() -1;
        int rci=2,lci=1,pi=0;
        
        while(pi<=limit)
        {
            lci = 2*pi +1;
    	    rci = lci+1;
            
            if(lci<limit)
            {
                int min = (pq[lci]<pq[rci])?lci:rci;
                if(pq[pi]>pq[min])
                {
                    int m = pq[pi];
                    pq[pi]=pq[min];
                    pq[min]=m;
                }
                else
                {
                    break;
                }
               pi = min;
                
            }
            else if(lci==limit && pq[lci] < pq[pi])
            {
                 int m = pq[pi];
                    pq[pi]=pq[lci];
                    pq[lci]=m;
                pi = lci;
            }
            else break;
             
        }
        return temp;    
        
    }
    
    
};
