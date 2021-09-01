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
    void dfs(Node * node,vector<Node*>&vis,Node * copy)
    {
        vis[copy->val]=copy;
        for(auto v:node->neighbors)
        {
            if(vis[v->val]==NULL)
            {
                Node* newnode=new Node(v->val);
                (copy->neighbors).push_back(newnode);
                dfs(v,vis,newnode);
            }
            else
            {
                (copy->neighbors).push_back(vis[v->val]);
            }
        }
    }
    Node* cloneGraph(Node* node) {
        if(node==NULL)
            return NULL;
        vector<Node*>vis(1000,NULL);
        Node*copy=new Node(node->val);
        dfs(node,vis,copy);
        return copy;
    }
};
