#include <iostream>
#include <cmath>
using namespace std;

int main()
{  //ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
  //int T;
// cin>>T;
int n ;
 int A[100];
 cin>>n;
 for(int i=0;i<n;i++){
    cin>>A[i];
 }
 for(int t=0;t<2;t++)
  {
       int k =2 ;


  //for(int i=0;i<n;i++)
  //  cin>>A[i];

  int count = 0;
  int l = 1<<n ;
   for(int i=1;i<l-1;i++)
   {int sum=0 ;
       for(int j=0 ; j<n ;j++) //this is for printing on a single line
        if( 1<<j & i ) //if this satisfies for all j then all A will be printed
         sum=sum+A[j] ; // i is compared in its binary form

        if(sum%k==0)
            count++;
   }
   cout<<count<<endl;
  }

    return 0;
}
