class Solution
{
public:
    bool isValid(string s)
    {
        string v = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                v += s[i];
            }
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if (v.empty())
                {
                    return false;
                }
                else if ((v.back() == '(' && s[i] == ')') || (v.back() == '{' && s[i] == '}') || (v.back() == '[' && s[i] == ']'))
                {
                    v.pop_back();
                }
                else
                {
                    return false;
                }
            }
        }
        if (v.empty())
        {
            return true;
        }
        return false;
    }
};