#include <iostream>
#include <string>
using namespace std;

int binarySearch(string sentence, char target)
{
    int left = 0;
    int right = sentence.length() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (sentence[mid] == target)
        {
            return mid;
        }
        else if (sentence[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    string sentence;
    char target;

    cout << "Masukkan kalimat : ";
    getline(cin, sentence);

    cout << "Masukkan huruf yang ingin dicari : ";
    cin >> target;

    int index = binarySearch(sentence, target);

    if (index != -1)
    {
        cout << "Huruf " << target << " ditemukan pada indeks ke-" << index << endl;
    }
    else
    {
        cout << "Huruf " << target << " tidak ditemukan dalam kalimat" << endl;
    }

    return 0;
}