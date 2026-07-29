#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    int N, E;
    cout << "Enter no of vertices: ";
    cin >> N;
    cout << "Enter no of edges: ";
    cin >> E;

    vector<int> AdjList[N];

    for(int i = 1; i <= E; i++){
        cout << "Enter end points of Edge " << i << ": ";
        int a, b;
        cin >> a >> b;

        if(a < 0 || a >= N || b < 0 || b >= N){
            cout << "Invalid vertex! Enter between 0 and " << N-1 << endl;
            i--;
            continue;
        }

        AdjList[a].push_back(b);
        AdjList[b].push_back(a);
    }

    cout << "\nAdjacency List:\n";
    for(int i = 0; i < N; i++)
    {
        cout << i << ": ";
        for(int j = 0; j < AdjList[i].size(); j++){
            cout << AdjList[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nBFS order: ";
    vector<int> status(N, 0);
    queue<int> Q;

    status[0] = 1;
    Q.push(0);

    while(!Q.empty()){
        int x = Q.front();
        Q.pop();
        cout << x << " ";

        for(int y : AdjList[x]){
            if(status[y] == 0){
                status[y] = 1;
                Q.push(y);
            }
        }
    }

    return 0;
}
