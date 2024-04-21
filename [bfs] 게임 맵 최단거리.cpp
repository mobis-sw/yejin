// 실패 코드 (dfs로 풀이)
***********************************************************************
/*
// 최단 거리 찾기
// 상대 팀 진영에 도착 못하는 경우 -1 return
// MAP: 0 벽 있음 1 벽 없음, 초기위치 (1,1) 상대위치 (N,M)

#include<iostream>
#include<vector>
using namespace std;
bool visit[100][100];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int row_size;
int col_size;
int result = 0;

void dfs(vector<vector<int> > &maps, bool visit[100][100], int x, int y){
    
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx > row_size || nx < 0 || ny > col_size || ny < 0 || visit[nx][ny] == true || maps[nx][ny] == 0)
            continue;
        if(maps[nx][ny] == 1 && nx == row_size && ny == col_size){   // 최종 목적지
            result++;
            return;
        }
        else{
            visit[x][y] = true;
            dfs(maps, visit, nx, ny);
            continue;
        }
    }
    //visit[x][y] = false;
}

int solution(vector<vector<int> > maps)
{
    // visit 초기화 (MAX:100)
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++)
            visit[i][j] = false;
    }
    
    row_size = maps.size() -1;
    col_size = maps[0].size() -1;
    
    dfs(maps, visit, 0, 0);
    
    int answer = result;
    return answer;
} 
*/
**********************************************************************
// bfs 풀이
