class solution
{
public:
vector<string> result;
void solve(string & s,string& curr, int idx)
{
if(idx>=curr.lenght())
{
  if(current!="")result.push_back(curr);
  return;
}
  currently.push_back(s[idx]);
  solve(s,curr,idx+1);
  currently.pop_back()
  solve(s,curr,idx+1);
}
};
vector<string> AllpossibleStrings(string s)
{
  string curr="";
  solve(s,curr,o);
  return result;
}
//
