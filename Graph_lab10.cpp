#include <iostream>
#include<list>
using namespace std;

struct Node{
    int label;
    list<int> neighbors;

};

struct Graph{
    //graph will have an array of type "node" with length specified by n
    int n=9;
    Node * nodes = new Node[n];

    void intializenodes(){
        //iterate through the nodes and assign labels
        for(int i=0;i<n;i++){
            nodes[i].label=i;
        }
    }

    void addedge(int u, int v){
        //select node u and push v into u's neighbour
        nodes[u].neighbors.push_back(v);
        //select node v and push u into v's neighbour
        nodes[v].neighbors.push_back(u);
    }

    void print(){
        //lets iterate through each node and print its neighbours
for (int i = 0; i < n; i++) {
            cout << "Node " << nodes[i].label << " -> ";
            for (int neighbor : nodes[i].neighbors) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
    };


int main() {
    Graph * g = new Graph;
    g->intializenodes();
    //add edges for the graphs here.
    g->addedge(1, 2);
    g->addedge(1, 3);
    g->addedge(1, 4);
    g->addedge(1, 5);
    g->addedge(2, 3);
    g->addedge(2, 6);
    g->addedge(4, 6);
    g->addedge(4, 7);
    g->addedge(4, 8);
    g->addedge(5, 6);
    g->addedge(5, 7);
    g->addedge(5, 8);
    //print the graph adjaceny list
    g->print();
}