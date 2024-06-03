#include <iostream>
#include <string>
using namespace std;

int countVowels(string sentence)
{
    int count = 0;
    string vowels = "aiueoAIUEO";

    for (char c : sentence)
    {
        if (vowels.find(c) != string::npos)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string sentence;

    cout << "Masukkan kalimat : ";
    getline(cin, sentence);

    int vowelCount = countVowels(sentence);

    cout << "Jumlah huruf vokal dalam kalimat adalah : " << vowelCount << endl;

    return 0;
}