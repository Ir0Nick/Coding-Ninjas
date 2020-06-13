#include<vector>
#include<queue>
using namespace std;

void findMedian(int arr[], int n){
    
    priority_queue<int>max;
    priority_queue<int , vector<int>, greater<int>> min;
   max.push(arr[0]);
    cout<<arr[0]<<'\n';
    for(int i =1 ;i<n;i++)
    {
    		if(arr[i]>max.top())
                min.push(arr[i]);
                     
            else   
             max.push(arr[i]);
        if((i+1)%2==0)
        {
            if(min.size()>max.size())
            {
                max.push(min.top());
                min.pop();
            }
            else if(min.size()<max.size())
            {
                min.push(max.top());
                max.pop();
            }
            cout<<(min.top()+max.top())/2<<'\n';
        }else
        {
            if(min.size()>max.size())
            {
                if(min.size()-max.size()>1)
                {
                    max.push(min.top());
                    min.pop();
                }
                cout<<min.top()<<'\n';
                
            }
            else if(min.size()<max.size())
            {
                if(max.size()-min.size()>1)
                {
                      min.push(max.top());
                    	 max.pop();
                }
                cout<<max.top()<<'\n';
            }
            
        }
            
    }
       
}
