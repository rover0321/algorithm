//
// Created by huangxiang on 2017/10/11.
//

#include "stackExercise.h"
#include <stack>
#include <iostream>

bool stackExercise::bracketMatching(string str) {
    stack<char> temp;
    int size = str.length();
    for (int i = 0; i < size; i++){
        if (str[i] == '(' || str[i] == '{' || str[i] == '['){
            temp.push(str[i]);
        } else if (str[i] == ')'){
            if (temp.empty()){
                temp.push(str[i]);
            } else {
                if (temp.top() == '('){
                    temp.pop();
                } else {
                    temp.push(str[i]);
                }
            }
        } else if (str[i] == '}'){
            if (temp.empty()){
                temp.push(str[i]);
            } else {
                if (temp.top() == '{'){
                    temp.pop();
                } else {
                    temp.push(str[i]);
                }
            }
        } else if (str[i] == ']'){
            if (temp.empty()){
                temp.push(str[i]);
            } else {
                if (temp.top() == '['){
                    temp.pop();
                } else {
                    temp.push(str[i]);
                }
            }
        }
    }
    if (temp.empty()){
        cout << "Yes" << endl;
        return true;
    } else {
        cout << "No" << endl;
        return false;
    }
}
