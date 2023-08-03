#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices){
        int l=0,r=1,n=0,mxpr=0;
        while(r<prices.size()){
            n=prices[r]-prices[l];
            if(n<0){
                (prices[r]<prices[l])?l=r:l++;
                r++;
            }else{
                (n>mxpr)?mxpr=n:mxpr=mxpr;
                r++;
            }
        }
        return mxpr;
}

int main(){
    vector<int> prices = {2,1,2,1,0,1,2};
    int result = maxProfit(prices);
    cout << result << endl;
    return 0;
}