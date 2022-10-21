#include <iostream>
#include <vector>
using namespace std;

void enter_adjacency_matrix(int N, int M, int adj[][100]);
void show_adjacency_matrix(int N, int M, int adj[][100]);
void enter_edge_list(int N, int M, vector<pair<int, int>> &edge_list);
void show_edge_list(int N, int M, vector<pair<int, int>> edge_list);
void enter_adjacency_list(int N, int M, vector<int> adj_list[]);
void show_adjacency_list(int N, int M, vector<int> adj_list[]);
void Mode_select();

int main()
{
    Mode_select();
    // enter_adjacency_matrix(N, M, adj);
    return 0;
}

void Mode_select()
{
    // Nhap ma tran ke
    int N, M;
    int adj[100][100];
    cout << "Nhap so dinh va canh ";
    cin >> N >> M;
    vector<pair<int, int>> edge_list;

    vector<int> adj_list[1000];

    int select;
    cout << "Chon Mode : 1. adjacency_list 2.edge_list 3. adjacency_matrix" << endl;
    cin >> select;
    switch (select)
    {
    case 1:
        enter_adjacency_list(N, M, adj_list);
        show_adjacency_list(N, M, adj_list);
        break;
    case 2:
        enter_edge_list(N, M, edge_list);
        show_edge_list(N, M, edge_list);
        break;
    case 3:
        enter_adjacency_matrix(N, M, adj);
        show_adjacency_matrix(N, M, adj);
        break;
    default:
        cout << "Crashed";
        break;
    }
}

void enter_adjacency_list(int N, int M, vector<int> adj_list[])
{
    int s, d;
    for (int i = 0; i < M; i++)
    {
        cout << "Nhap canh ";
        cin >> s >> d;
        adj_list[s].push_back(d);
    }
}

void show_adjacency_list(int M, int N, vector<int> adj_list[])
{
    // homework CODEHERE
    cout << "adjacency_list co: " << endl;
    for (int i = 0; i < M; i++)
    {
        cout << "Dinh " << i << " Co canh: ";
        for (int j = 0; j < adj_list[i].size(); j++)
        {
            cout << adj_list[i].at(j) << " ";
        }
        cout << "\n";
    }
}

void enter_edge_list(int N, int M, vector<pair<int, int>> &edge_list)
{
    // duyet danh sach ke va nhap vao
    int s, d;
    for (int i = 0; i < M; i++)
    {
        cout << "Nhap canh ";
        cin >> s >> d;
        edge_list.push_back({s, d});
    } // nhap canh
}

void show_edge_list(int N, int M, vector<pair<int, int>> edge_list)
{
    // +1 5m || co google 3m
    // CODEHERE
    int s, d;
    cout << "Edge_list co: " << endl;
    for (auto i : edge_list)
        cout << i.first << ' ' << i.second << endl;
}

void enter_adjacency_matrix(int N, int M, int adj[][100])
{
    // #1 khoi tao ma tran = 0
    // adj[100][100] = 0; // Binh = +0.5 // Dat ? +0.25 // Chuong +0.5
    adj[N][N] = 0;
    int a, b;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "Nhap 2 dinh tao nen canh thu 1 " << i + 1 << ":\n";
            cout << "Dinh thu 1:";
            cin >> a;
            cout << "Dinh thu 2:";
            cin >> b;
            adj[i][j] = adj[a][b];
        }
    }
}

void show_adjacency_matrix(int N, int M, int adj[][100])
{
    cout << "adjacency_matrix co: " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}
