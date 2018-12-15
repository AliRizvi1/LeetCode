//
//  main.cpp
//  FizzBuzz
//
//  Created by Ali Rizvi on 11/6/18.
//  Copyright © 2018 Ali Rizvi. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

    int reverse(int x) {
        // if (x == (2^31)-1)
        //     return 0;
        
        vector<int> digits;
        while (x>0) {
            //digits will be in reverse order already
            digits.push_back(x%10);
            x = x / 10;
        }
        //digits[0] = 1;
        //digits[1] = 2;
        //digits[2] = 3;
        int answer=0;
        for (int i=0;i<digits.size();i++) {
            answer += digits[i] * 10^(digits.size()-i-1);
        }
        
        return answer;
    }

int main(int argc, const char * argv[]) {
    int x = 321;
    char c;
    cin>>c;
    
    return reverse(x);

}

