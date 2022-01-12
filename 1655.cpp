//가운데를 말해요_골드 2
#include <iostream>
#include <queue>
#include <vector>
#include <functional> //greater, less

using namespace std;

priority_queue<int> max_pq;
priority_queue<int, vector<int>, greater<int>> min_pq;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;

        if (max_pq.size() == min_pq.size())
        { //둘이 size가 같으면 최대힙에 추가
            max_pq.push(n);
        }
        else
        {
            min_pq.push(n);
        }

        if (!max_pq.empty())
    }
}

// 첫번째 시도
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> cal;

// int main(void)
// {
//     cin.tie(NULL);
//     ios::sync_with_stdio(false);

//     int N;
//     cin >> N;

//     for (int i = 0; i < N; i++)
//     {
//         int n;
//         cin >> n;

//         cal.push_back(n);
//         sort(cal.begin(), cal.end());

//         if (cal.size() % 2 == 0)
//         { //백준이가 외친 수의 개수가 짝수개라면
//             cout << cal[cal.size() / 2 - 1] << endl;
//         }
//         else
//         { //홀수개라면
//             cout << cal[cal.size() / 2] << endl;
//         }
//     }
//     return 0;
// }