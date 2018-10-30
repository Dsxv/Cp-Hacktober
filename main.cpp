#include <iostream>

using namespace std;

int main()
{  int t ;  cin>>t;
  for(int i=0;i<t;i++)
  { int L , R, count=0 ;
      cin>>L>>R;
      for(int k=L;k<=R;k++)
        if(k%10==2||k%10==3||k%10==9)
        count++;
      cout<<count<<endl;

  }

    return 0;
}
