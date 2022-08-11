#include "Graph.h"

GraphHash::GraphHash()
{
    nodes[0].value = "me";
    nodes[1].value = "Alice";
    nodes[2].value = "Bob";
    nodes[3].value = "Claire";
    nodes[4].value = "Anuj";
    nodes[5].value = "Peggy";
    nodes[6].value = "Jonny";
    nodes[7].value = "Thom";

    nodes[0].pNext = new Edge(1);
    nodes[0].pNext->pNext = new Edge(2);
    nodes[0].pNext->pNext->pNext = new Edge(3);
    nodes[1].pNext = new Edge(5);
    nodes[2].pNext = new Edge(4);
    nodes[2].pNext->pNext = new Edge(5);
    nodes[3].pNext = new Edge(6);
    nodes[3].pNext->pNext = new Edge(7);
}