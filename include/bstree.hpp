#include <fstream>
#include <string>
#include <iostream>
#include <initializer_list>
#include <cstddef>
namespace BSTree {
    struct Node {
        int data;
        Node* left;
        Node* right;
        Node(int val);
    };
    enum class traversal_order {pre, in, post};
    class Tree {
        Node* root;
        auto print_elements(Node* curr, int space) const -> void;
        auto deleting(Node*&curr) -> void;
        auto straight_detour(Node *curr) const -> void;
        auto back_detour(Node *curr) const -> void;
        auto transverse_detour(Node *curr) const -> void;
        auto save_tree_to_the_file_recursion (Node * curr, int  space, std::ostream &File) ->void;
        auto save_tree_to_the_file_straight_detour (Node * curr, std::ostream &File) -> void;
        auto copy (Node * curr) -> void;
        auto for_operator (std::ostream& stream, Node * curr) -> void;

        public:
        Tree();
        Tree(std::initializer_list<int> list);
        Tree(const Tree& tree);
        auto insert(int value) -> bool;
        auto print() const -> void;
        /*auto straight() const -> void;
        auto back() const -> void;
        auto transverse() const -> void;*/
        auto empty() const -> bool;
        auto add_node (int value) -> void;
        auto remove (int value) -> bool;
        auto save (const std::string& path) -> bool ;
        auto load (const std::string& path)->bool;
        auto exists (int value) const -> bool;
        auto print(traversal_order order) const -> void;
        auto operator=(const Tree&) -> Tree&;
        ~Tree();
        auto friend operator<<(std::ostream& stream, Tree& tree) -> std::ostream&
        {
            tree.for_operator (stream, tree.root);
            return stream;
        }
    };
}
