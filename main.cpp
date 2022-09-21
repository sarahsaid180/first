#include <iostream>

using namespace std;

int main()
{
   int x[6]={5,10,120,3,30,7};

int size = sizeof(x)/sizeof(x[0]);

int max=x[0],max2 = x[0];

    for(int i =0 ;i<size-1;i++){
      if(x[i]>max)
       max=x[i];
    }
for(int i =0 ;i<size-1;i++){
    if(x[i]>max2 )
      if(x[i]==max)
        continue;
      else
        max2=x[i];
}
    cout<<max<<" "<<max2<<endl;
    cout<<max+max2<<endl;


    return 0;
}

