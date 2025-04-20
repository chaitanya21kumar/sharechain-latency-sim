#include "ShareGraph.hpp"

void ShareGraph::addShare(int shareId, int parentId) {
    adj[parentId].push_back(shareId);
}

int ShareGraph::classifyShare(int shareId) {
    return adj.count(shareId) ? 1 : 0;
}
