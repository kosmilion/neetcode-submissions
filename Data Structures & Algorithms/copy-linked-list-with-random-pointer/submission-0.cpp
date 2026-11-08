/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
Node* copyRandomList(Node* head) {
    if(!head) return nullptr;

    unordered_map<Node*, Node*> nodeMap;
    for(Node* node = head; node != nullptr; node = node->next){
        nodeMap[node] = new Node(node->val);
    }

    for(Node* node = head; node != nullptr; node = node->next){
        nodeMap[node]->next = nodeMap[node->next];
        nodeMap[node]->random = nodeMap[node->random];
    }

    return nodeMap[head];
}
};
