#pragma once
#include <unordered_map>
#include <vector>

class ShareGraph {
public:
    void addShare(int shareId, int parentId);
    int classifyShare(int shareId); // 1 = main, 0 = uncle/orphan
private:
    std::unordered_map<int, std::vector<int>> adj;
};
