/*WAC++P To Find If A Character Is Vowel Or Consonant using function.*/
#include <iostream>
using namespace std;
bool isVowel(char c) {
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i=0; i<5; i++) {
        if (c == vowels[i]) return true;
        }
    return false;
    }
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P To Find If A Character Is Vowel Or Consonant using function."<<endl;
    cout << "Enter a character: ";
    char ch; cin >> ch;
    if (isVowel(ch))
    cout << "The entered character is a vowel.";
    else
    cout << "The entered character is not a vowel.";
    return 0;
}