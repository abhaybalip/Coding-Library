#include<iostream>
#include <stdio.h>
using namespace std;
class Encryption
{
    private:
    int key;
    string code;
    string text;
    int size;

    Encryption(int key)
    {
        this->key = key;
    }
    string Encode(string text)
    {
        size = text.length();
        code = "";
        for(int i=0;i<size;i++)
        {
            code += text[i]*key;
        }
        return code;
    }
    string Decode()
    {
        string text = "";
        for(int i=0;i<size;i++)
        {
            text += code[i]/key;
        }
        return text;
    }
};
int main()
{
    return 0;
}