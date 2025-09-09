#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <sstream>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string,int> IOManager;
    map<string,int> ParkingTime;
    string IOtime, CarNum, InOut;
    string CarTime, CarMin;
    for(string& it : records)
    {
        stringstream ss(it);
        ss >> IOtime >> CarNum >> InOut; 
        istringstream ss1(IOtime);
        getline(ss1, CarTime, ':');
        getline(ss1, CarMin, ':'); 
        int hour = stoi(CarTime);
        int min = stoi(CarMin);
        int totalTime = hour*60 + min;
        if(InOut == "IN")
        {
            IOManager[CarNum] = totalTime;
        }    
        if(InOut == "OUT")
        {
            ParkingTime[CarNum]  += totalTime - IOManager[CarNum];
            IOManager.erase(CarNum);
        }
    }
    for(auto& it : IOManager)
    {
        const string& car = it.first;
        int in_time = it.second;
        ParkingTime[car] += 1439 - in_time;
    }
    for(auto& it : ParkingTime)
    {
        int total = it.second;
        int price = 0;
        if (total <= fees[0])
        { 
            price = fees[1];
            answer.push_back(price);
        }
        else 
        {
            int over = total - fees[0];
            int units = (over + fees[2] - 1) / fees[2]; 
            price = fees[1] + units * fees[3];
            answer.push_back(price);
        }
    }
    return answer;
}