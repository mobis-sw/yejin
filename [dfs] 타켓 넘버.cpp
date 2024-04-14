#include <vector>
using namespace std;

void dfs(vector<int>& numbers, int& answer, int target, int cnt, int sum){
    // 숫자 다 사용하면 target 값이랑 같은지 확인 후 ans++
    if (cnt == numbers.size() - 1) {
        if (target == sum + numbers[cnt])
            answer++;
        if (target == sum - numbers[cnt])
            answer++;
        return;
    }
    // 숫자 남았을 땐 cnt++ 후 재귀
    // 다음 숫자 + , - 두개 한번에 돌리기
    dfs(numbers, answer, target, cnt+1, sum + numbers[cnt]);
    dfs(numbers, answer, target, cnt+1, sum - numbers[cnt]);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    dfs(numbers, answer, target, 0, 0);
    return answer;
}
