#include <iostream>

struct Node
{
    Node* left = NULL;
    Node* right = NULL;
    int data;
};

struct Node* newNode(int value)
{
    Node* temp = new Node;
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int heightofTree(Node* root)
{
    if (root == NULL)
    {
        return 0;
    }

    else
    {
        int leftheight = heightofTree(root->left);
        int rightheight = heightofTree(root->right);

        if (leftheight >= rightheight)
        {
            return leftheight + 1;
        }

        else
        {
            return rightheight + 1;
        }
    }
}

Node* insertNode(Node* root, int data)
{
    if (root == NULL)
    {
        return newNode(data);
    }

    else if (data == root->data)
    {
        return root;
    }

    else if (data > root->data)
    {
        root->right = insertNode(root->right, data);
    }

    else
    {
        root->left = insertNode(root->left , data);
    }

    return root;
}

void preorderTraversal(Node* root)
{
    if (root != NULL)
    {
        std::cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(Node* root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        std::cout << root->data << " ";
    }
}

void inorderTraversal(Node* root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        std::cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main()
{
    Node* root = NULL;

    root = insertNode(root, 21);
    root = insertNode(root, 16);
    root = insertNode(root, 2);
    root = insertNode(root, 25);
    root = insertNode(root, 30);
    root = insertNode(root, 14);
    root = insertNode(root, 2);
    root = insertNode(root, 60);
    root = insertNode(root, 8);
    root = insertNode(root, 15);
    root = insertNode(root, 35);
    root = insertNode(root, 40);
    root = insertNode(root, 100);
    root = insertNode(root, 55);

    std::cout << "\nHeight of Tree = " << heightofTree(root) << std::endl;

    std::cout << "\n\t\t\t\tRIGHT SUB TREE TRAVERSAL";

    std::cout << "\n\nPREORDER TRAVERSAL" << std::endl;
    preorderTraversal(root->right);

    std::cout << "\n\nPOSTORDER TRAVERSAL" << std::endl;
    postorderTraversal(root->right);

    std::cout << "\n\nINORDER TRAVERSAL" << std::endl;
    inorderTraversal(root->right);

    std::cout << "\n\n\t\t\t\tCOMPLETE BINARY SEARCH TREE TRAVERSAL";

    std::cout << "\n\nPREORDER TRAVERSAL" << std::endl;
    preorderTraversal(root);

    std::cout << "\n\nPOSTORDER TRAVERSAL" << std::endl;
    postorderTraversal(root);

    std::cout << "\n\nINORDER TRAVERSAL" << std::endl;
    inorderTraversal(root);

    std::cout << std::endl;
}

