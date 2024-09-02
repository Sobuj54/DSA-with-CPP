class MyQueue
{
public:
    stack<int> st;
    MyQueue()
    {
    }

    void push(int x)
    {
        st.push(x);
    }

    int pop()
    {
        stack<int> nSt;
        int last;
        while (!st.empty())
        {
            last = st.top();
            st.pop();
            if (st.empty())
                break;
            nSt.push(last);
        }
        while (!nSt.empty())
        {
            st.push(nSt.top());
            nSt.pop();
        }
        return last;
    }

    int peek()
    {
        stack<int> nSt;
        int last;
        while (!st.empty())
        {
            last = st.top();
            st.pop();
            nSt.push(last);
        }
        while (!nSt.empty())
        {
            st.push(nSt.top());
            nSt.pop();
        }
        return last;
    }

    bool empty()
    {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */