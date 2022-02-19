class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int amount = 0;
        // struct{
        //     bool operator()(vector<int> a, vector<int> b){return a[1] > b[1];}
        // }my_cmp;
        // sort(boxTypes.begin(), boxTypes.end(), my_cmp);
        sort(boxTypes.begin(), boxTypes.end(), [](vector<int> a, vector<int> b){return a[1] > b[1];});
        for(int i = 0; i < boxTypes.size(); i++){
            if(truckSize == 0)
                break;
            int tmp = min(truckSize, boxTypes[i][0]);
            truckSize -= tmp;
            amount += tmp * boxTypes[i][1];
        }
        return amount;
    }
};