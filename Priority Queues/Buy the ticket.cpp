#include<queue>
int buyTicket (int *arr, int n, int k){
  priority_queue<int> pq;
    int mp = arr[k],z=0;
    for(int i= 0;i<n;i++)
    {
        if(i!=k&&mp == arr[i])
        z++;
        pq.push(arr[i]);
        
    }
    int time=0;
    while(pq.size()!=0)
    {
        if(pq.top()==mp)
        {
            if(z==0)
                return ++time;
            else z--;
        }
        pq.pop();
        time++;
    }
    return time;
    
}
