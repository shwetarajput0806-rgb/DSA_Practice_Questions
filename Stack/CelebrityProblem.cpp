//Celebrity problem 

#include<iostream>
#include<vector>
#include<stack>

using namespace std;

class Solution
{
private:

    bool knows(vector<vector<int>> &M,int a,int b)
    {
        return M[a][b];
    }

public:

    int celebrity(vector<vector<int>> &M,int n)
    {
        stack<int> s;

        // Step 1
        for(int i=0;i<n;i++)
            s.push(i);

        // Step 2
        while(s.size()>1)
        {
            int a=s.top();
            s.pop();

            int b=s.top();
            s.pop();

            if(knows(M,a,b))
                s.push(b);
            else
                s.push(a);
        }

        int candidate=s.top();

        // Step 3 : Row Check

        int zeroCount=0;

        for(int i=0;i<n;i++)
        {
            if(M[candidate][i]==0)
                zeroCount++;
        }

        if(zeroCount!=n)
            return -1;

        // Step 4 : Column Check

        int oneCount=0;

        for(int i=0;i<n;i++)
        {
            if(i!=candidate && M[i][candidate]==1)
                oneCount++;
        }

        if(oneCount!=n-1)
            return -1;

        return candidate;
    }
};

int main()
{
    vector<vector<int>> M=
    {
        {0,1,0},
        {0,0,0},
        {0,1,0}
    };

    int n=3;

    Solution obj;

    int ans=obj.celebrity(M,n);

    if(ans==-1)
        cout<<"No Celebrity Found";
    else
        cout<<"Celebrity is "<<ans;

    return 0;
}
