/*class Solution{
    vector<string>result;
    bool isvalid(string& curr)
    {
        int count=0;
        stack<string>st;
        for(char& ch:curr)
        {
            if(count==-1)return false;
            if(ch=='(')count+=1;
            else count-=1;
        }
        if(count==0)return true;
        return false;

    }
    void solve(string& curr, int n)
    {
        if(curr.length()==2*n)
        {
            if(isvalid(curr))
            result.push_back(curr);
            return;
        }
        curr.push_back('(');
        solve(curr,n);
        curr.pop_back();
        curr.push_back(')');
        solve(curr,n);
        curr.pop_back();
    }

public:
    vector<string> generateParenthesis(int n)
    {
        string curr;
        solve(curr,n);
        return result;
    }
};*/
//-----------------------------------------------
//better apparaoch
class Solution{
    vector<string>result;
    void solve(string& curr, int n,int open,int close)
    {
        if(curr.length()==2*n)
        {
            result.push_back(curr);
            return;
        }
        if(open<n)
        {
        curr.push_back('(');
        solve(curr,n,open+1,close);
        curr.pop_back();
        }
        if(close<open)
        {
        curr.push_back(')');
        solve(curr,n,open,close+1);
        curr.pop_back();
        }
    }

public:
    vector<string> generateParenthesis(int n)
    {
        string curr;
        int open=0,close=0;
        solve(curr,n,open,close);
        return result;
    }
};
