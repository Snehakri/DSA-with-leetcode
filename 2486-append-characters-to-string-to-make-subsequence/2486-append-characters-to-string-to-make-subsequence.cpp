// class Solution {
// public:
//     int appendCharacters(string s, string t) {
//         int count=0;
//         for(int i=0;i<t.size();i++){
//             size_t found=s.find(t[i]);
//             if (found != string::npos) count++;
//             else break;
//         }
//         // cout<<count;
//         return t.size()-count;
//     }
// };
class Solution {
 public:
  int appendCharacters(string s, string t) {
    int i = 0;  // t's index

    for (const char c : s)
      if (c == t[i])
        if (++i == t.length())
          return 0;

    return t.length() - i;
  }
};