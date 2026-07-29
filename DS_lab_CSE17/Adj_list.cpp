#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>AdjList[7];
    int v,e;
    cout<<"Enter the number of vertices:";
    cin>>v;
    cout<<"Enter the number of edges:";
    cin>>e;
for(int i=1; i<=e; i++)
{
    cout<<"Enter the end points of edge "<<i;
    int a,b;
    cin>>a>>b;
    AdjList[a].push_back(b);
    AdjList[b].push_back(a); //for undirected graph
}
    cout<<"The adjacency List is as follows:\n";
    for(int i=0; i<v; i++)
    {
        cout<<i<<"->";
        for(int j=0; j<AdjList[i].size(); j++)
        {
            cout<<AdjList[i][j]<<" ";
        }
        cout<<"\n";
    }
}
