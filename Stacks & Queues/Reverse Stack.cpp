#include <stack>

void reverseStack(stack<int> &input, stack<int> &extra) {
while(!input.empty())
{
    extra.push(input.top());
    input.pop();
}
    input = extra;
}
