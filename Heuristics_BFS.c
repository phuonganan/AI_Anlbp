#include <iostream>
#include <vector>
using namespace std;

void enter_adjacency_matrix(int vertex, int edge, int adj[][100]);
void enter_edge_list(int vertex, int edge, vector<pair<int, int>> &edge_list);
void show_edge_list(int vertex, int edge, vector<pair<int, int>> edge_list);
void enter_adjacency_list(int vertex, int edge, vector<int> adj_list[]);
void show_adjacency_list(int vertex, int edge, vector<int> adj_list[]);

int main()
{
  // Nhap ma tran ke
  int vertex, edge;
  // int adj[100][100];
  cout << "Nhap so dinh va canh ";
  cin >> vertex >> edge;

  // enter_adjacency_matrix(vertex,edge, adj);

  // vector<pair<int, int>> edge_list;
  // enter_edge_list(vertex, edge, edge_list);
  // show_edge_list(vertex, edge, edge_list);

  vector<int> adj_list[1000];
  enter_adjacency_list(vertex, edge, adj_list);
  show_adjacency_list(vertex, edge, adj_list);
  return 0;
}

void enter_adjacency_matrix(int vertex, int edge, int adj[][100])
{

  // #1 khoi tao ma tran = 0
  // adj[100][100] = 0;
  adj[vertex][vertex] = 0;
  int a, b;
  for (int i = 0; i < edge; i++)
  {
    cout << "Nhập 2 đỉnh tạo nên cạnh thứ " << i + 1 << ":\n";
    cout << "Đỉnh thứ 1:";
    cin >> a;
    cout << "Đỉnh thứ 2:";
    cin >> b;
    adj[a][b] = 1;
  }

  for (int i = 0; i < vertex; i++)
  {
    for (int j = 0; j < vertex; j++)
    {
      cout << adj[i][j] << " ";
    }
    cout << endl;
  }
}

void enter_edge_list(int vertex, int edge, vector<pair<int, int>> &edge_list)
{
  int endpoint1, endpoint2;
  for (int i = 0; i < edge; i++)
  {
    cout << "Nhap canh: ";
    cin >> endpoint1 >> endpoint2;
    edge_list.push_back({endpoint1, endpoint2});
  }
}

void show_edge_list(int vertex, int edge, vector<pair<int, int>> edge_list)
{
  int endpoint1, endpoint2;
  for (auto i : edge_list)
    cout << i.first << ' ' << i.second << endl;
}

void enter_adjacency_list(int vertex, int edge, vector<int> adj_list[])
{
  int endpoint1, endpoint2;
  for (int i = 0; i < edge; i++)
  {
    // 1 4 => adj_list[1].add(4)
    // 1 3 => adj_list[1].add(3)
    // 3 2 => adj_list[2].add(2)
    cout << "Nhap canh: ";
    cin >> endpoint1 >> endpoint2;
    adj_list[endpoint1].push_back(endpoint2);
  }
}

void show_adjacency_list(int vertex, int edge, vector<int> adj_list[])
{
  // homework CODEHERE
  for (int i = 0; i < vertex; i++)
  {
    cout << "Dinh " << i << " Co canh: ";
    for (int j = 0; j < adj_list[i].size(); j++)
    {
      cout << adj_list[i].at(j) << " ";
    }
    cout << "\n";
  }
}
