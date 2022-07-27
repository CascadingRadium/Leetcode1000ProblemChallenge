/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<int,Node*> copyVisited;
    Node* cloneGraph(Node* node) 
    {
        if(!node)
            return node;
        vector<Node*> Adj;
        Node* nodeCopy=new Node(node->val,Adj);
        copyVisited[node->val]=nodeCopy;
        for(auto neigh : (node->neighbors))
        {
            if(copyVisited.count(neigh->val))
                (nodeCopy->neighbors).push_back(copyVisited[neigh->val]);
            else
                (nodeCopy->neighbors).push_back(cloneGraph(neigh));
        }
        return nodeCopy;
    }
};