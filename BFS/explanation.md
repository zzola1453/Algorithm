# 너비 우선 탐색
시작 노드를 방문한 후 시작 노드에 있는 인접한 모든 노드들을 우선 방문하는 방법


1. 시작하는 칸을 큐에 넣고 방문했다는 표시를 남김
2. 큐에서 원소를 꺼내서 그 칸에 상하좌우 칸에 대해서 3번 진행
3. 해당 칸을 이전에 방문했다면 아무것도 하지 않고, 처음 방문했다면 방문했다는 표시를 남기고 해당 칸을 큐에 삽입
4. 큐가 빌 때까지 2번을 반복

모든 칸이 큐에 1번씩 들어가기대문에 시간복잡도는 칸이 N개일 때 O(N)
  
### 자주 나오는 문제유형
1. 경로탐색 유형 (최단거리, 시간)
2. 네트워크 유형 (연결)
3. 조합 유형     (모든 조합 만들기)

  
### 연습문제  
백준1926 https://www.acmicpc.net/problem/1926 :white_check_mark:  
백준2178 https://www.acmicpc.net/problem/2178 :white_check_mark:  
  
### 이해를 돕기 위한 그림
![bfs-example](https://github.com/zzola1453/Algorithm/assets/71739885/6f35e9bd-d137-4f86-9ba6-d89a7982b4d7)
