#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> num;
vector<string> result1;
vector<int> result2;

string solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    //for (int i = 0; i < numbers.size(); i++)
    //    num.push_back(to_string(numbers[i]));
    int cnt = 0;
    do {
        result1.push_back("");
        for (int i = 0; i < numbers.size(); i++) {
            result1[cnt].append(to_string(numbers[i]));
        }
        cnt++;
    } while (next_permutation(numbers.begin(), numbers.end()));
    for (int i = 0; i < result1.size(); i++)
        result2.push_back(stoi(result1[i]));
    sort(result2.begin(), result2.end());
    int ans = 0;
    for (int i = 0; i < result1.size(); i++) {
        cout << result2[i] << " ";
        ans++;
    }

    string answer = to_string(result2[ans-1]);
    return answer;
}
