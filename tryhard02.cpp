/* undirected Graph*/

#include <bits/stdc++.h>

class Graph
{
    public:
        int N, M; // vertice and edge no.
        std::vector<std::vector<int>> adj; // adjacency list        

        Graph(int _N);
        void addEdge(int v, int w);
        const std::vector<int> &adjacent(int v) const;
        int V() const;
        int E() const;
};

//re-define methods
Graph::Graph(int N_)
   : N(N_), M(0)
{
    adj.resize(N);
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
    M += 1;
}

const std::vector<int> &Graph::adjacent(int v) const
{
    return adj[v];
}

int Graph::V() const
{
    return N;
}

int Graph::E() const
{
    return M;
}

int main()
{
    int N; std::cin >> N;
    Graph *g = new Graph(N);
    int v, w, M;
    std::cin >> M;
    for(int i = 0; i < M; i++) {
        std::cin >> v >> w;
        g->addEdge(v, w);
    }
    for(int i = 0; i < N; i++) {
        for (auto x : g->adjacent(i)) {
            std::cout << x << " ";
        }
        std::cout << "\n";
    }
    
    std::cout << std::endl;
    system("pause");
    return 0;
}