#include <iostream>
using namespace std;

int main()
{
    int city,percent;//輸入幾個城市幾趴會通過
    int pass=0;//通過的投開票所數量
    int few=0;  // condition to ignore 
    int others=0;
    cin>>city>>percent;
    int vote,totalvote;
    vote=0;
    totalvote=0;
    while (city){
        cin>>vote;
        totalvote+=vote;
        city--;
    }
    int x[1000], y[1000], z[1000], w[1000]; 
    for (int i=0;i<totalvote;i++){
        cin >> x[i];
    }
    for (int i=0;i<totalvote;i++){
        cin >> y[i];
    }
    for (int i=0;i<totalvote;i++){
        cin >> z[i];
    }
    for (int i=0;i<totalvote;i++){
        cin >> w[i];
    }
    for (int i=0;i<totalvote;i++){
        if ((y[i] + z[i] + w[i]) >= x[i] * percent /100 && y[i] > z[i]) {
            pass++;
        }
        else if ((y[i] + z[i] + w[i])<x[i] * percent /100){
            few++;
        }
        else{
            others++;
        }
    }
    cout<<pass<<","<<few<<","<<others;
}



