//
// Created by nuo_nuaa on 2022/5/10.
//
#include<iostream>
#include <vector>
using namespace std;

void getMem2d(int **&p, int n)
{
    p = new int *[n];
    for (auto i = 0; i < n; i++)
    {
        p[i] = new int[n];
    }
    for (auto i = 0; i < n; i++)
    {
        for (auto j = 0; j < n; j++)
            p[i][j] = i * n + j;
    }
}

void getMem1d(int *&p, int n)
{
    p = new int[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = i;
    }
}

vector<vector<int>> getMemVec(int n)
{
    vector<vector<int>> p(n,vector<int>(n));
    for(auto &i : p)
    {
        for(auto &j : i)
        {
            j=1;
        }
    }
    return p;
}

int main()
{
    vector<vector<int>> p = getMemVec(4);
    for(auto &i : p)
    {
        for(auto &j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
//    int *p= nullptr;
//    int m=10;
//    getMem1d(p,m);
//    for(int i=0;i<m;i++)
//    {
//        cout<<p[i]<<" ";
//    }
//    cout<<endl;
//    delete[] p;
//    p= nullptr;
//    int num=1;
//    int M=4;
//    int ** p;
//    p = new int *[M];
//    for (int i = 0; i < M; i++){
//        p[i] = new int[M];
//    }
//    for(auto i=0;i<4;i++)
//        for(auto j=0;j<4;j++)
//            p[i][j] = i*4+j;
//
//    for(auto i=0;i<4;i++)
//        for(auto j=0;j<4;j++)
//            std::cout<<p[i][j]<<" ";
    int **a = nullptr;
    int n = 4;
    getMem2d(a, n);
    std::cout << a << std::endl;
    for (auto i = 0; i < n; i++)
    {
        for (auto j = 0; j < n; j++)
        {
            std::cout << a[i][j] << " ";
        }
    }
    cout << endl;
    for (auto i = 0; i < n; i++)
    {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}
