#include<iostream>
#include<vector>
using namespace std;

int overallProfit(vector<int>& prices){
    int l=0,r=1,n=0,ovpr=0;
    while(r<prices.size()){
        n=prices[r]-prices[l];
        if(n>0){
            ovpr += n;
        }
            l++;
            r++;
    }


    return ovpr;
}


int main(){
    vector<int> prices = {7,6,4,3,1};
    int res = overallProfit(prices);
    cout << res << endl;
    return 0;
}