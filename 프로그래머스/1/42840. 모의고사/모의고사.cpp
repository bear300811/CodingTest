#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int math1[5] = {1,2,3,4,5};
    int math2[8] = {2,1,2,3,2,4,2,5};
    int math3[10] = {3,3,1,1,2,2,4,4,5,5};
    long long answermath1 = 0;
    long long answermath2 = 0;
    long long answermath3 = 0;
    int indexmath1 = 0;
    int indexmath2 = 0;
    int indexmath3 = 0;
    for(int it : answers)
    {
        if(indexmath1 >4){indexmath1 = 0;}
        if(indexmath2 >7){indexmath2 = 0;}
        if(indexmath3 >9){indexmath3 = 0;}
        if(it == math1[indexmath1]){answermath1++;}
        if(it == math2[indexmath2]){answermath2++;}
        if(it == math3[indexmath3]){answermath3++;}
        indexmath1++;
        indexmath2++;
        indexmath3++;
    }
    if(answermath1>answermath2 && answermath1 > answermath3){answer.push_back(1);}
    else if(answermath2>answermath1 && answermath2 > answermath3){answer.push_back(2);}
    else if(answermath3>answermath2 && answermath3 > answermath1){answer.push_back(3);}
    else if(answermath1 == answermath2 && answermath1 != answermath3){answer.insert(answer.begin(),{1,2});}
    else if(answermath3 == answermath2 && answermath3 != answermath1){answer.insert(answer.begin(),{2,3});}
    else if(answermath1 == answermath3 && answermath1 != answermath2){answer.insert(answer.begin(),{1,3});}
    else if(answermath1 == answermath2 && answermath1 == answermath3){answer.insert(answer.begin(),{1,2,3});}
    return answer;
}