//ƒано л≥терний р€док, €кий м≥стить посл≥довн≥сть символ≥в s0, Е, sn, Е .
//1. ¬и€снити, чи Ї в ц≥й посл≥довност≥ так≥ елементи si, si + 1 що si Ц це кома(У, Ф), а si + 1 Ц
//тире(УЦФ), та обчислити њх к≥льк≥сть.
//2. «ам≥нити кожну групу символ≥в У, ЦФ з≥рочкою У* Ф.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

bool Search(const char* str)
{
    int count = 0;
    for (size_t i = 0; str[i] != '\0' && str[i + 1] != '\0'; i++)
    {
        if (',' == str[i] && '-' == str[i + 1])
        {
            count++;
        }
    }
    cout << "Number of sequences found: " << count << endl;
    return count > 0;
}

char* Replace(char* R, const char* str, char* s)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ',' && str[i + 1] == '-')
        {
            *s = '*';
            s++;
            *s = '\0';
            i += 2; // Skip both ',' and '-'
        }
        else
        {
            *s = str[i];
            s++;
            *s = '\0';
            i++;
        }
    }

    return R;
}

int main()
{
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    if (Search(str))
        cout << "Found ',-' sequence" << endl;
    else
        cout << "No ',-' sequence found" << endl;

    char* R1 = new char[151];
    R1[0] = '\0';
    char* R2;
    R2 = Replace(R1, str, R1);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << R2 << endl;

    delete[] R1;
    return 0;
}