#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <map>
#include <queue>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main() {
    // làm sao để stringstream capture được các con số và in ra 
    // string a = "10b,20c.30,40";
    // stringstream s(a);
    // int b;
    // char c;
    // for (int i = 0; i < 10; i++){
    //     if (s >> b) cout << b << " ";
    //     else  {
    //         s.clear();
    //         s >> c;
    //     }
    // }
    cout << "Skibidi";
    return 0;
}










































// class Graph{
//     private:
//         int V;
//         int N;
//         vector<vector<int>> adj;
//         vector<vector<int>> distance;
//         vector<bool> marked;
//         vector<int> d;
//     public:
//         Graph(int vertices){
//             V = vertices;
//             adj.assign(vertices, {});
//             distance.assign(vertices, vector<int> (vertices, 0));
//             marked.assign(vertices, false);
//             d.assign(vertices, INT_MAX);
//         }
//         void nhapCanh(){
//             int n;
//             cin >> n;
//             N = n;
//             for (int i = 0; i < N; i++){
//                 int a, b, c;
//                 cin >> a >> b >> c;
//                 distance[a][b] = c;
//                 distance[b][a] = c;
//                 adj[a].push_back(b);
//                 adj[b].push_back(a);
//             }
//         }
//         void Dijkstra(int s){
//             priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
//             Q.push({0, s});
//             d[s] = 0;
//             while(!Q.empty()){
//                 pair<int, int> top = Q.top();
//                 int dinh = top.second, trongSo = top.first;
//                 Q.pop();
//                 if (trongSo > d[dinh]) continue;
//                 for (int x: adj[dinh]){
//                     if (!marked[x]){
//                         if (d[x] > d[dinh] + distance[dinh][x])
//                             d[x] = d[dinh] + distance[dinh][x];
//                     }
//                 }
//                 marked[dinh] = true;
//             }
//         }
// }





// struct Edge{
//     int u, v;
//     int w;
//     Edge(int a, int b, int c) :u(a), v(b), w(c){}
// };
// class Graph{
//     private:
//         int V, E;
//         int size = 0;
//         vector<int> parent;
//         vector<int> d;
//         vector<bool> used;
//         vector<Edge> MST;
//         vector<vector<pair<int, int>>> adj;
//     public:
//         Graph(int vertices){
//             V = vertices;
//             parent.assign(V, 0);
//             d.assign(V, INT_MAX);
//             used.assign(V, false);
//             adj.assign(V, {});
//         }
//         void nhapCanh(){
//             cin >> E;
//             for (int i = 0; i < E; i++){
//                 int dinh1, dinh2, trongSo;
//                 cin >> dinh1 >> dinh2 >> trongSo;
//                 adj[dinh1].push_back({dinh2, trongSo});
//                 adj[dinh2].push_back({dinh1, trongSo});
//             }
//         }
//         void Prim(int start){
//             priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
//             Q.push({0, start});
//             d[start] = 0;
//             while (!Q.empty()){
//                 pair<int, int> top = Q.top();
//                 Q.pop();
//                 int dinh1 = top.second, trongSo = top.first;
//                 if (used[dinh1]) continue;
//                 size += trongSo;
//                 used[dinh1] = true;
//                 if (start != dinh1){
//                     MST.push_back(Edge(dinh1, parent[dinh1], trongSo));
//                 }
//                 for (auto it: adj[dinh1]){
//                     int dinh = it.first, weight = it.second;
//                     if (!used[dinh] && weight < d[dinh]){
//                         parent[dinh] = dinh1;
//                         d[dinh] = weight;
//                         Q.push({weight, dinh});
//                     }
//                 }
//             }
//         }























// bool DFS7(int s, int t, vector<int>& path, vector<bool>& visited){
//     visited[s] = true;
//     path.push_back(s);
//     if (s == t) return true;
//     for (int c: adj[s]){
//         if (distance[s][c].second - distance[s][c].first > 0 && !visited[c]){
//             if (DFS7(c, t, path, visited)){
//                 return true;
//             }
//         }
//     }
//     return false;
//     path.pop_back();
// }
//     int Ford_Fulkerson(int s, int t){
//         int maxFlow = 0;
//         while (true){
//             vector<bool> visited (V, false);
//             vector<int> path (0);
//             if (DFS7(s, t, path, visited)){
//                 int min = 9999;
//                 for (int i = 0; i < path.size() - 1; i++){
//                     if (distance[path[i]][path[i + 1]].second -  distance[path[i]][path[i + 1]].first < min){
//                         min = distance[path[i]][path[i + 1]].second -  distance[path[i]][path[i + 1]].first;
//                     }
//                 }
//                 for (int i = 0; i < path.size() - 1; i++){
//                     distance[path[i]][path[i + 1]].first += min;
//                     distance[path[i + 1]][path[i]].first -= min;
//                 }
//                 maxFlow += min;
//             }
//             else break;
//         }
//         return maxFlow;
//     }
// int main(){
//     return 0;
// }