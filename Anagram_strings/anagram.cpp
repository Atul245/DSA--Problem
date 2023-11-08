#include <bits/stdc++.h>
using namespace std;

bool approach1(string str1, string str2)
{
    if (str1.length() != str2.length())
        return false;
    for (int i = 0; i < str1.length(); i++)
    {
        bool flg = false;
        for (int j = 0; j < str1.length(); j++)
        {
            if (str1[i] == str2[j])
            {
                str2[j] = '#';
                flg = true;
                break;
            }
        }
        if (!flg)
            return flg;
    }
    return true;
}

bool approach2(string str1, string str2)
{
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] != str2[i])
        {
            return false;
        }
    }
    return true;
}

bool approach3(string str1, string str2)
{
    int arr[26] = {};
    for (int i = 0; i < str1.length(); i++)
    {
        arr[str1[i] - 'a']++;
    }
    for (int i = 0; i < str1.length(); i++)
    {
        arr[str2[i] - 'a']--;
    }
    for (int i = 0; i < str1.length(); i++)
    {
        if (arr[i] != 0)
            return false;
    }
    return true;
}

int main()
{
    string str1 = "abbcc", str2 = "abcbc";
    cout << approach1(str1, str2);
    cout << approach2(str1, str2); 
    cout << approach3(str1, str2); 
    return 0;
}