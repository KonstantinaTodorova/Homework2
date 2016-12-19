#include <iostream>

using namespace std;

bool isItVowel(char symbol)
{
    if(symbol == 'a' || symbol == 'e' || symbol == 'i' || symbol == 'o' || symbol == 'u')
        return true;
    else
        return false;
}

void removeVowels (char* string)
{
    for(int i = 0; string[i] != '\0'; i++)
    {
       if ( isItVowel(string[i]))
       {
           for (int j = i+1;string[j] != '\0'; j++ )
           {
               string[i] == string [j];
           }
       }
       else
       {
          cout << string;
       }

   }
}
int main()
{
    char string ;
    cout << "Enter a long word : " ;
    cin >> string;

    removeVowels(&string);


    return 0;
}
