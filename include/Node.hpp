#pragma once
#include "LatencyChannel.hpp"
#include "ShareGraph.hpp"

class Node {
public:
    Node(int id);
    void generateShare();
    void receiveShare(int fromId);
    int getNodeId() const; // ✅ Getter function to access nodeId

private:
    int nodeId;
};
