/*
  Srijan Singh
  Minimum Spanning Tree 
  Kruskal's MST
  1 October 2021
*/

#include<iostream>
#include<vector>
#include<algorithm>

using std::sort;
using std::vector;
using std::cout;

struct Edge{
    int node;
    int neighbour;
    int weight;
};

bool sort_weight(Edge e1, Edge e2)
{
    return e1.weight<e2.weight;
}

bool cyclic(vector<int> src,vector<int> dst, int destination)
{
    for(int i=0; i<src.size(); i++)
    {
        if(src[i] == destination or dst[i] == destination)
        {
            return true;
        }
    }
    return false;
}

void kruskal(Edge *graph, int length)
{
    vector<int> src;
    vector<int> dst;
    
    //Step 1: Sort on weight
    sort(graph, graph+length, sort_weight);
    
    //Step 2: Choose next minimum weight which doesn't make cycle
    for(int i=0; i<length; i++)
    {
        auto node = graph[i];
        int source = node.node;
        int destination = node.neighbour;
        
        if(!cyclic(src, dst, destination))
        {
            src.push_back(source);
            dst.push_back(destination);
        }
    }
    
    //Step 3: Print MST
    int size = src.size();
    cout<<"\nMst Size: "<<size<<"\n";
    for(int i=0; i<size; i++)
    {
        cout<<"Source: "<<src[i]<<" Destinaion: "<<dst[i]<<"\n";
    }
}

int main()
{    
    /*
        (0)       (3)
           \4   /3    \3
        4|  (2)   -4  (5)
           /2   \2    /3
        (1)        (4)
    */
    vector<int> source = {
        0, 0, 1, 1, 2, 2, 2, 2, 2, 3, 3, 5, 5, 5, 4, 4
    };
    vector<int> destination = {
        1, 2, 0, 2, 0, 1, 3, 5, 4, 2, 5, 3, 2, 4, 5, 2
    };
    vector<int> weight = {
        4, 4, 4, 2, 4, 2, 3, 4, 2, 3, 3, 3, 4, 3, 3, 2
    };

    int length = source.size();

    Edge graph[length];

    for(int i=0; i<length; i++)
    {
        graph[i].node = source[i];
        graph[i].neighbour = destination[i];
        graph[i].weight = weight[i];
    }

    kruskal(graph,length);

    return 0;   
}
