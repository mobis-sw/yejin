#include <vector>
using namespace std;

void dfs(int n, vector<vector<int>> computers, int index, vector<bool>& visit){
    visit[index] = true;    // 방문 체크
    // 두번째 인덱스 조사
    for(int i = 0; i < n; i++){
        if(!visit[i] && computers[index][i] == 1)
            dfs(n, computers, i, visit);
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    vector<bool> visit(n, false);
    for(int j = 0; j < n; j++){
        if(!visit[j]){
            answer++;
            // 첫번째 인덱스 조사
            dfs(n, computers, j, visit);
        }
    }
    return answer;
}
