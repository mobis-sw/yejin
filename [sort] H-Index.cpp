// 인용 횟수 h 인 논문이 h편 이상 -> H-index
// citations -> size 논문 개수
// 해당 배열 sort 후 

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    sort(citations.begin(), citations.end());
    int key = 0;
    int size = citations.size();
    for(int i = 0; i < size; i++){
        if(size - i >= citations[i]){
            key = i;
            continue;
        }
        else
            break;
    }
    int answer = citations[key];
    return answer;
}
