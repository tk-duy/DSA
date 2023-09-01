#include <bits/stdc++.h>

template <typename K, typename V>
class BST {
    struct Node
    {
        K key;
        V value;
        Node* left;
        Node* right;
        Node(const K& key_, const V& value_) : key(key_), value(value_), left(nullptr), right(nullptr) {}
    };
    Node* root;
    public:
        BST();
        void put(const K& key, const V& value);
        const V& get(const K& key) const;
};

template <typename K, typename V>
BST<K, V>::BST()
    : root(nullptr)
{
}



int main()
{
    
}