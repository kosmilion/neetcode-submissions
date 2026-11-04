class Solution {
public:
bool isValid(string s) {
    vector<char> stack;

    for(int i = 0; i < s.length(); ++i){
        if(s[i] == '('){
            stack.push_back(')');
        }
        else if(s[i] == '{'){
            stack.push_back('}');
        }
        else if(s[i] == '['){
            stack.push_back(']');
        }
        else{
            if(stack.empty() || s[i] != stack.back()) return false;
            stack.pop_back();
        }
    }

    return stack.empty();
}
};
