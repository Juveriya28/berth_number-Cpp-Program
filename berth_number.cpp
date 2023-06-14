#include <iostream>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cout<<"Enter No of test cases:";
    cin>>t;
    while(t>0)
    {
      int bn,x=0;
      cout<<"Enter berth number:";
      cin>>bn;
       x=bn%8;
        
    if(x==1) 
        cout<<bn+3<<"LB"<<endl;
    else if(x==2) 
        cout<<bn+3<<"MB"<<endl;
    else if(x==3) 
        cout<<bn+3<<"UB"<<endl;
    else if(x==4) 
        cout<<bn-3<<"LB"<<endl;
    else if(x==5) 
        cout<<bn-3<<"MB"<<endl;
    else if(x==6) 
        cout<<bn-3<<"UB"<<endl;
    else if(x==7) 
        cout<<bn+1<<"SU"<<endl;
    else  
        cout<<bn-1<<"SL"<<endl;
     
      t--;
    }
    return 0;
  }