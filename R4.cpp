class solution{
vector<string> result;
void solve(int i,int j,vector<vector<int> &m, int n, string & temp)
{
  if(i<0||i>n||j<0||i>n||m[i][j]==0) return;
  if(i==n-1&&j==n-1) result.push_back(temp);return ;
  m[i][j]=0;

  temp.push_back(L);
  solve(i,j-1,m,n,temp);
  temp.pop_back;
  
  temp.push_back(R);
  solve(i,j+1,m,n,temp);
  temp.pop_back;
  
  temp.push_back(U);
  solve(i-1,j,m,n,temp);
  temp.pop_back;
  
  temp.push_back(D);
  solve(i+1,j,m,n,temp);
  temp.pop_back;
  
  m[i][j]=1;
}
public:
vector<string> findpath(vector<vector<int> &m, int n)
{
  string temp ="";
  solve(0,0,m,n,temp);
  return result;
}
};
