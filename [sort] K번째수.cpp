// array i번째 숫자부터 j번째 숫자까지 자르고 정렬,
// k번째 수 구하기

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> slice;
    
    for(int i=0; i<commands.size(); i++){
        int start = commands[i][0]-1;
        int end = commands[i][1];
        int ans = commands[i][2]-1;
        slice.clear();
        slice.assign(array.begin() + start, array.begin() + end);
        for(int j=0; j<slice.size(); j++)
            cout << slice[j];
        cout << endl;
        sort(slice.begin(), slice.end());
        for(int j=0; j<slice.size(); j++)
            cout << slice[j];
        cout << endl;
        answer.push_back(slice[ans]);
    }
    
    return answer;
}
