//#include<algorithm.h>
#include<iostream>
//#include<vector.h>
#include<conio.h>
//using namespace std;

void main()
{

int N, x, y, vector, pair;
int make_pair(int,int);
int sort(int,int);

//clrscr();

while(cin>>N)
{
vector<pair<int,int>>v & pair<int && int>v;

for(int i=0;i<N;i++)
{
cin>>x>>y;

v.push_back(make_pair((y>x) ? x:2000000001-y, make_pair(x,y)));
}

long long ret=0,cap=0;
sort(v.begin(), v.end());

for(i=0; i<v.size(); i++)
{
if(cap<v[i].second.first)
{
ret+=v[i].second.first-cap;
cap=v[i].second.first;
}

cap += v[i].second.second - v[i].second.first;
}

cout<<ret<<cap<<endl;
}
getch();
}
