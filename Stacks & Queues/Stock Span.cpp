
#include <stack>
int* stockSpan(int *price, int size) {
	// Write your code here
    stack<int> s;
    int *data = new int[size];
    data[0] = 1;
    s.push(0);
    for(int i=1;i<size;i++){
        while(s.size()>0){
            if(price[i]>price[s.top()]){
                s.pop();
            }
            else{
                break;
            }
        }
        if(s.size()==0){
            s.push(i);
            data[i] = i+1;
        }
        else{
            data[i] = i - s.top();
            s.push(i);
        }
    }
    return data;

}
