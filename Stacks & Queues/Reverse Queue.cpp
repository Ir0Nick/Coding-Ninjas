#include <queue>

void reverseQueue(queue<int> &q) {
int size = q.size();
    int * arr = new int[size];int i=0;
    while(!(q.empty()))
    {
        arr[i++]=q.front();
        q.pop();
    }
    for(int j= size-1;j>=0;j--)
        q.push(arr[j]);

}
