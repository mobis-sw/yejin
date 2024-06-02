// 백준 2559 수열
// 매일 아침마다 온도 체크 (정수) -> 연속된 K일의 정수합 중 가장 큰 값은?
// 입력 - 정수 개수 N, 연속일수 K, 정수 N개
// 출력 - 가장 큰 정수합

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int arr[100001];
int N, K;

int main(void) {

    cin >> N >> K;

    for (int n = 0; n < N; n++) {
        cin >> arr[n];
    }

    int start = 0;
    int sum = 0;
    int maxSum = INT_MIN;

    for (int n = 0; n < N; n++) {
        sum += arr[n];

        if (n >= K - 1) {
            maxSum = max(maxSum, sum);
            sum -= arr[start++];
        }
    }

    cout << maxSum;

    return 0;
}
