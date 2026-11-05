class Solution {
public:int evalRPN(vector<string>& tokens) {
    vector<int> operands;
    for(int i = 0; i < tokens.size(); i++){
        if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
            operands.push_back(stoi(tokens[i]));
        }
        else{
            int val1 = operands.back();
            operands.pop_back();
            int val2 = operands.back();
            operands.pop_back();
            if(tokens[i] == "+"){
                operands.push_back(val2 + val1);
            }
                        if(tokens[i] == "*"){
                operands.push_back(val2 * val1);
            }
                        if(tokens[i] == "-"){
                operands.push_back(val2 - val1);
            }
                        if(tokens[i] == "/"){
                operands.push_back(val2 / val1);
            }
        }
    }

    return operands.back();
}
};
