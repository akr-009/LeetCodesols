class Solution {
public:
    bool isValid(string s) {
        unordered_map <char,char> p = {
            { ')','('},
            { ']','['},
            { '}','{'},
        };
        stack <char> open;
        for (const auto &c:s)
           { if(p.find(c) != p.end())
             {  
                if(open.empty())
                 return false;
                
               if(open.top() != p[c])
                return false;
            
                open.pop();
            }  
            else
            {
                open.push(c);
            }
           }  
        return open.empty();
    }
};
