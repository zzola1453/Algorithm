//내가 짠거 아님
//https://hegosumluxmundij.tistory.com/104

#include <bits/stdc++.h>

using namespace std;

const int MAX = 10;

void DFS(int start, vector<int> graph[] , bool check[] ){
	check[start]=true;;
	cout<< start<<" "; //방문한 정점 출력 
	
	for(int i = 0 ; i< graph[start].size();i++){
		int next = v[start][i];
		
		if(!check[next]){//방문하지 않았다면 DFS 호출  
			DFS(next , graph, check);
		}
		
	}
	
}

int main(){
	int n,m,start; // 노드 개수 , 간선 개수 
	cin >> n >> m >> start;
	
	vector<int>graph[n+1];
	//visual studio 의 경우
	/* 변수 통해 배열 동적 생성 시 
		vector<int> * g = new vector<int>[n+1];
	*/ 
	bool check[n+1]={0,};
	
	for(int i = 0 ; i < m; i++){
		int u,v;
		cin >> u >> v;
		
		graph[u].push_back(v);
		graph[v].push_back(u);
		
	}
	
	//나중에 하나의 정점에서 다음 탐색 시 node 값 순차적으로
	//접근하고 싶으면 graph sort 하면 됨 
	
	DFS(start,graph,check);
	return 0;
}
