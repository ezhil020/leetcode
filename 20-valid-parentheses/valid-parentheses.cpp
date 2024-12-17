class Solution {
public:
    bool isValid(string s) {
      stack<char> temp;
      for(int i =0 ;i<s.size();i++)
      {
         if(s[i]=='(')
         {
            temp.push(')');

         }
         else if(s[i]=='{')
         {
            temp.push('}');
         }      
         else if (s[i]=='['){
            temp.push(']');
         } 
         else if (s[i] == ']' || s[i] == '}' || s[i]== ')')
         {
            if(temp.empty())
            {
                return false;
            }
             if(s[i] == temp.top())
             {
                temp.pop();
             }
             else{
                return false;
             }
             
         }              
    
      }
      return temp.empty();
    }
};