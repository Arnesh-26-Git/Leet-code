class Solution {
    public:
        string smallestPalindrome(string s) {
                int count[26] = {0};

                        for (char c : s)
                                    count[c - 'a']++;

                                            string left = "", mid = "";

                                                    for (int i = 0; i < 26; i++) {
                                                                while (count[i] >= 2) {
                                                                                left += char(i + 'a');
                                                                                                count[i] -= 2;
                                                                                                            }
                                                                                                                        if (count[i] == 1)
                                                                                                                                        mid = char(i + 'a');
                                                                                                                                                }

                                                                                                                                                        string right = left;
                                                                                                                                                                reverse(right.begin(), right.end());

                                                                                                                                                                        return left + mid + right;
                                                                                                                                                                            }
                                                                                                                                                                            };
