//
//  main.cpp
//  LeetCode
//
//  Created by Ali Rizvi on 12/4/18.
//  Copyright © 2018 Ali Rizvi. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>
#include <queue>

using namespace std;

string sub(string s1, string s2) {
    queue<char> s1Q, s2Q;
    bool big = (s1.length() >= s2.length());
    if (big) {
        
        for (int i=0;i < s1.length();i++) {
            s1Q.push(s1[i]);
            if (s2.length() >= i)
                s2Q.push(s2[i]);
        }
    }
    else
        for (int i=0; i < s2.length(); i++) {
            s2Q.push(s2[i]);
            if (s1.length() >= i)
                s1Q.push(s1[i]);
        }
    
    char charArr[] = new array<char>;
    if (big)
        for (int i = 0; i < s2.length();i++) {
            if (s1Q.front() == s2Q.front())
                
                
        }
    
}


int main(int argc, const char * argv[]) {
    
    
    return 0;
    
}
