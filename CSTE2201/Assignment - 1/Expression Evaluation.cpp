#include <bits/stdc++.h>
using namespace std;
bool isoperator(char ch);
bool isoperand(char ch);
bool ishigh(char ch1, char ch2);
bool isopen(char ch);
bool isclose(char ch);
int getWeight(char ch);
int evaluate(string exp);
int operation(char op, int a, int b);
string intopost(string exp);
int main(){
    int result;
    string infix;
    cout << "Enter an expression which evaluate less than 10" << endl;
    cin >> infix;
    result = evaluate(intopost(infix));
    cout << result << endl;
    return 0;
}
bool isoperator(char ch){
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/') return true;
    return false;
}
bool isoperand(char ch){
    if(ch >= '0' && ch <= '9') return true;
    return false;
}
bool isopen(char ch){
    if(ch == '(') return true;
    return false;
}
bool isclose(char ch){
    if(ch == ')') return true;
    return false;
}
bool ishigh(char ch1, char ch2){
    if(getWeight(ch1) >= getWeight(ch2)) return true;
    return false;
}
int getWeight(char ch){
    switch(ch){
    case '/':
    case '*': return 2;
    case '+':
    case '-': return 1;
    default: return 0;
    }
}
string intopost(string exp){
    char ch;
    string postfix = "";
    stack <char> st;
    for(int i = 0; i < exp.size(); i++){
        ch = exp[i];
        if(isoperator(ch)){
            while(!st.empty() && !isclose(st.top()) && ishigh(st.top(), ch)){
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
        else if(isoperand(ch))
            postfix += ch;
        else if(isopen(ch))
            st.push(ch);
        else if(isclose(ch)){
            while(!st.empty() && !isopen(st.top())){
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
    }
    while(!st.empty()){
        postfix += st.top();
        st.pop();
    }
    return postfix;
}
int evaluate(string exp){
    char ch;
    stack <int> st;
    for(int i = 0; i < exp.size(); i++){
        ch = exp[i];
        if(isoperator(ch)){
            int n2 = st.top(); st.pop();
            int n1 = st.top(); st.pop();
            int res = operation(ch, n1, n2);
            st.push(res);
        }
        else if(isoperand(ch)){
            int n = ch - '0';
            st.push(n);
        }
    }
    return st.top();
}
int operation(char op, int a, int b){
    if(op == '+') return a + b;
    else if(op == '-') return a - b;
    else if(op == '*') return a * b;
    else if(op == '/' && b != 0) return a / b;
    else{
        cout << "Unexpected Error!" << endl;
        return -1;
    }
}
