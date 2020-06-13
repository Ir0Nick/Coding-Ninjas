
/***************
 * Following is the main function that er are using internally
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
            case 2 : // getMax
                cout << pq.getMax() << endl;
                break;
            case 3 : // removeMax
                cout << pq.removeMax() << endl;
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
*******************/
#include<vector>
#include<climits>
class PriorityQueue {
  vector<int> pq;
    public:
    int getSize()
    {
        return pq.size();
    }
    
    bool isEmpty()
    {
        return pq.size()==0;
    }
    
    void insert(int k)
    {
        pq.push_back(k);
        int ci = pq.size() -1;
       int pi;
        while(ci>0)
        {  pi = (ci -1 )/2;
            if(pq[pi]<pq[ci])
            {
                int temp = pq[pi];
                pq[pi] = pq[ci];
                pq[ci] = temp;
            }else{
                break;
            }
          ci = pi;
        }
    }
    
    int getMax()
    {
        return pq[0];
    }
    
    int removeMax()
    {
        if(pq.size()==0)
            return INT_MIN;
        int t = pq[0];
        pq[0] = pq[pq.size()-1];
        pq.pop_back();
        int pi = 0;
        int lci = 1, rci =2;
        int limit = pq.size() - 1;
        while(pi<=limit)
        {
            lci = 2*pi +1;
            rci = lci + 1;
            if(lci<limit && rci<=limit)
            {
                int max = (pq[lci] > pq[rci])? lci:rci ;
                if(pq[max] > pq[pi])
                {
                    int temp = pq[pi];
                    pq[pi] = pq[max];
                    pq[max] = temp;
                }
                else break;
                pi = max;
            }
            else if(lci == limit)
            {
                if(pq[lci]> pq[pi])
                {
                    int temp = pq[pi];
                    pq[pi] = pq[lci];
                    pq[lci] = temp;
                }
                else break;
                pi = lci;
            }
            else break;
        }
     		return t;        
            
    }
    
    
};
