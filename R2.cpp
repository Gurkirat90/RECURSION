#include<iostream>
using namespace std;
class solution
{
public:
long long toh(int n , int from, int to ,int aux)
{
  if(n==1)
  {
    cout<< "move disk"<<n<<"from rot"<<from<<"to rod"<<to<<"using"<<aux<<endl;
    return 1;
  }
  int count=toh(n-1,from, aux,to);
  count=+1;
  count+=toh(n-1,aux,to,from);
  return count;
}
};
