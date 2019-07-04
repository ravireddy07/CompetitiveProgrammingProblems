#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int count = 0;
void numofpaths(int r, int c, int row, int col) {
  if(r==row-1 && c==col-1) {
    count++;
    return;
  }
  if(r<row && c<col) {
    numofpaths(r, c + 1, row, col);
    numofpaths(r + 1, c, row, col);
    numofpaths(r + 1, c + 1, row, col);
  }
}

void solver(int r,int c,int row,int col,char ans[],int i) {
  if(r==row-1 && c==col-1) {
    ans[i]=’\0’;
    cout<<ans<<" ";
    return;
  }
  if(r<row && c<col) {
    ans[i]=‘V’;
    solver(r,c+1,row,col,ans,i+1);
    ans[i]=‘H’;
    solver(r+1,c,row,col,ans,i+1);
    ans[i]=‘D’;
    solver(r+1,c+1,row,col,ans,i+1);
  }
}


int main(int argc, char const *argv[]) {
  int n,m;
  cin>>n>>m;
  char ans[200];
  numofpaths(0,0,n,m);
  cout<<count<<endl;
  solver(0,0,n,m,ans,0);
  return 0;
}
