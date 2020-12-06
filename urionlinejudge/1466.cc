#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

struct Node {
  struct Node *left, *right;
  int val;
  Node(int);
};

Node::Node(int x) {
  val = x;
  left = right = NULL;
}

void insert(Node*& aux, int val) {
  if (!aux) {
    aux = new Node{val};
    return;
  }
  if (aux->val > val) 
    insert(aux->left, val); 
  else
    insert(aux->right, val);
}

void bfs(Node* aux) {
  std::queue<Node*> q;
  std::vector<Node*> visited;

  q.push(aux);
  Node* temp;
  while (!q.empty()) {
    visited.push_back(q.front());
    temp = q.front();
    if (temp->left)
      if (!(std::find(visited.begin(), visited.end(), temp->left) != visited.end()))
        q.push(temp->left);

    if (temp->right)
      if (!(std::find(visited.begin(), visited.end(), temp->right) != visited.end()))
        q.push(temp->right);
    q.pop();
    printf("%d", temp->val);
    if (q.size()) printf(" ");
  }
}

void freeTree(Node*& aux) {
  if (!aux)
    return;

  Node* temp;
  if (aux->left) {
    freeTree(aux->left);
    temp = aux->left;
    aux->left = NULL;
    delete aux->left;
  }
  if (aux->right) {
    freeTree(aux->right);
    temp = aux->right;
    aux->right = NULL;
    delete aux->right;
  }

  temp = aux;
  aux = NULL;
  delete aux;
}

int main() {
  Node *root = NULL;
  int c, n, temp;
  scanf("%d", &c);
  for (int i = 1; i <= c; i++) {
    scanf("%d", &n);
    for (int j = 0; j < n; j++) {
      scanf("%d", &temp);
      insert(root, temp);
    }
    printf("Case %d:\n", i);
    bfs(root);
    printf("\n\n");
    freeTree(root);
  }
  return 0;
}
