#include "Node.hpp"
#include <iostream>

Node::Node(int id) : nodeId(id) {}

void Node::generateShare() {
    std::cout << "Node " << nodeId << " generating share..." << std::endl;
}

void Node::receiveShare(int fromId) {
    std::cout << "Node " << nodeId << " received share from Node " << fromId << std::endl;
}

int Node::getNodeId() const {
    return nodeId;
}
