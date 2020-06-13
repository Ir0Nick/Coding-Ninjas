#include<vector>
#include<queue>
vector<int> kSmallest(int *input, int n, int k) {
	priority_queue<int> pq;
    for(int i=0;i<k;i++)
    {
        pq.push(input[i]);
    }
    for(int i = k;i<n;i++)
    {
        if(input[i]<pq.top())
        {
            pq.pop();
            pq.push(input[i]);
        }
    }
    vector<int> v;
    while(!(pq.empty()))
    {v.push_back(pq.top());
     pq.pop();
    }
    return v;

}
