
void make_set(int x, vector<int>& parent, vector<int>& sz) {
  parent[x] = x;
  sz[x] = 1;
}
int find_set(int v, vector<int>& parent)
{
  if (v == parent[v])
    return v;
  return parent[v] = find_set(parent[v]);
}

void merge(int a, int b, vector<int>& parent, vector<int>& sz) {
  int pa = find_set(a, parent);
  int pb = find_set(b, parent);
  if (pa != pb) {
    parent[pa] = pb;
    sz[pb] += sz[pa];
  }
  return;
}