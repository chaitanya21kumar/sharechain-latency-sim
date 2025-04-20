#include "Node.hpp"
#include "LatencyChannel.hpp"
#include "ShareGraph.hpp"
#include <fstream>
#include <vector>
#include <iostream>

int main() {
    std::vector<Node> nodes;
    LatencyChannel channel;
    ShareGraph graph;

    for (int i = 0; i < 10; ++i) nodes.emplace_back(i);

    for (int round = 0; round < 20; ++round) {
        for (auto &node : nodes) {
            node.generateShare();
            for (auto &peer : nodes) {
                if (&node != &peer && channel.getRandomDelay() < 60) {
                    peer.receiveShare(node.getNodeId()); // ✅ using getter
                    graph.addShare(round * 10 + peer.getNodeId(), round * 10 + node.getNodeId()); // ✅ using getter
                }
            }
        }
    }

    std::ofstream file("results/output.csv");
    file << "shareId,parentId,isMainChain\n";
    for (int i = 0; i < 200; ++i)
        file << i << "," << (i > 0 ? i-1 : 0) << "," << graph.classifyShare(i) << "\n";
    file.close();
    std::cout << "Simulation complete. Output in results/output.csv\n";
}
