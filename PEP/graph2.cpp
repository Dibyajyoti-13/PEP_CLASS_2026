#include <iostream>
#include<unordered_map>
#include<map>
#include <list>

using namespace std;

int main(){
    int n;
    int e;

    cin >> n >> e;
    map<int, list<pair<int, int>>> adjList;

    for(int i = 0; i < e; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adjList[u].push_back({v, w});
        adjList[v].push_back({u, w});
    }
    cout << "Adjacency List : " << endl;

    for(auto i : adjList){
        cout << i.first << " -> ";
        for(auto j : i.second){
            cout << j.first <<"(" << j.second << ")\t" ;
        }
        cout << endl;
    }
}