#include <iostream>
#include <vector>
#include <string>
//Find the K-th Character in String Game Find the K-th Character in String Game_3304
using namespace std;

class Solution
{
public:
    char kthCharacter(int k)
    {

        string word = "a";
        int len = word.size();
        while (len < k)
        {

            string new_word = "";
            for (int i = 0; i < len; ++i)
            {
                char cur_char = word[i];
                new_word += word[i];

                char next_char = (cur_char < 'z') ? cur_char + 1 : 'a';

                new_word += next_char;
            }
            word = new_word;
            len = word.size();
        }

        
        return word[k-1];
    }
};

int main()
{
    Solution solution;
    int k = 5;
    cout << "The " << k << "-th character is: " << solution.kthCharacter(k) << endl;
    return 0;
}
