#include <iostream>
using namespace std;
int main () {
  int i, j;
  int n;
  cin>>n;
  cout<<"*";

  for(i=1;i<=(n+1)/2 - 2;i++)
      cout<<" ";

  for(i=1;i<=(n+1)/2;i++)
      cout<<"*";

  cout<<endl;

    for(i=1;i<=(n+1)/2 - 2;i++) {
        cout << "*";
        for (j=1;j<=(n+1)/2 - 2;j++)
        cout<<" ";
        cout<<"*";
        cout<<endl;
    }

    for(i=1;i<=n;i++)
        cout<<"*";
    cout<<endl;

    for(i=1;i<=(n+1)/2 - 2;i++) {
        for(j=1;j<=(n+1)/2 - 1;j++)
        cout<<" ";
        cout<<"*";
        for(j=1;j<=(n+1)/2 - 2;j++)
        cout<<" ";
        cout<<"*";
        cout<<endl;
    }

    for(i=1;i<=(n+1)/2;i++)
        cout<<"*";

    for(i=1;i<=(n+1)/2 - 2;i++)
        cout<<" ";

    cout<<"*";
    return 0;
}
