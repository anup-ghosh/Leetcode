#include <iostream>
#include <string>

using namespace std;

bool isPartitionPossible(int num) {
    string numStr = to_string(num);
    int length = numStr.length();
    
    for (int i = 0; i < length; i++) {
        string partition1Str = numStr.substr(0, i + 1);
        int partition1 = stoi(partition1Str);
        
        string remainingStr = numStr.substr(i + 1);
        int remainingNum = stoi(remainingStr);
        
        if (partition1 == remainingNum) {
            return true;
        }
        
        for (int j = i + 1; j < length; j++) {
            string partition2Str = numStr.substr(i + 1, j - i);
            int partition2 = stoi(partition2Str);
            
            string remainingStr2 = numStr.substr(j + 1);
            int remainingNum2 = stoi(remainingStr2);
            
            if (partition1 + partition2 == remainingNum2 && partition2 != 0) {
                return true;
            }
        }
    }
    
    return false;
}

int punishmentNumber(int n) {
    int punishment = 0;
    
    for (int i = 1; i <= n; i++) {
        if (isPartitionPossible(i * i)) {
            punishment += i * i;
        }
    }
    
    return punishment;
}

int main() {
    int n = 10;
    int result = punishmentNumber(n);
    
    cout << "Punishment number for " << n << " is: " << result << endl;
    
    return 0;
}
