#include <vector>
#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    int sum = 0;
    int n = nums.size();
      for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                 sum = nums[i] + nums[j] + nums[k];
                 if(isPrime(sum)){answer++;}
            }
        }
    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}