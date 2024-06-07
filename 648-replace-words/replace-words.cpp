class Solution {
public:
    string fun(string &wrd,unordered_set<string> &st)
    {
        for(int l=1;l<=wrd.length();l++)
        {
            string root=wrd.substr(0,l);
            if(st.count(root))
            {
                return root;
            }
        }
        return wrd;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> st(begin(dictionary),end(dictionary));
        stringstream ss(sentence);
        string word;
        string result;
        while(getline(ss,word,' ')){
            result+=fun(word,st)+" ";
        }
        result.pop_back();
        return result;
    }
};