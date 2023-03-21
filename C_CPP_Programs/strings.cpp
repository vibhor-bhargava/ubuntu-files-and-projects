#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::swap;
using std::sort;
using std::stable_sort;




/*int main(){
    string s = " Fenom ";

    int i = 0;
    s.erase(i,1);

    int j = s.length() - 1;
    s.erase(j,1);
    

    cout << s[i] << (int) s[j] << '.' << endl;
    return 0;
}//*/


// Null char b4 main \0 are ignored in std::string, but not in char arr[]
/*int main(){
    string s = "abbcd";
    char a[] = "abbcd";

    s[2] = a[2] = 0;
    
    cout << s << '\n' << a << endl;
    return 0;
}//*/


//Compile error when str literal's max length exceeds that of char array
/*int main(){
    char a[5] = "fight";
    
    cout << a << endl;
    return 0;
}//*/


/*int main(){
    string s = "Psyphon";
    char *p = &s[0];
    
    while (*p != 0)
        cout << *p++;
    
    cout << '\n' << &s << "\n" << &s[0] << endl;
    return 0;
}//*/


// Bounds checking in str objs
/*int main()
{
    string s = "Geralt";
    size_t n = s.length();

    //no bounds checking during indexing
    // s[n] = 't';
    // s[n + 1] = 't';

    //bounds checking by method access
    // s.at(n) = 't'; //error thrown when trying to access the '\0' at index n via at()

    cout << s << endl;
    return 0;
}//*/

//----------------------------------------|
// Taking line input
int main(){
    string s;
    // getline(cin, s);
    getline(cin, s, 'x'); //with delimiter
    
    // for (int i = 0; i < 4; ++i)
    // {
    //     cout << (int) s[i] << endl;
    // }

    cout << s << endl;
    return 0;
}//*/

//--------------------------------|
// C++ String Methods
/*int main(){
    string s {"reckoning"};
    // cout << s.npos << endl;

    //sort the characters
    stable_sort(s.begin(), s.end());

    //compare a str obj with a C-str
    // cout << s.compare("wibhor") << endl;

    //Search a str in another string
    // cout << s.find('a') << endl;
    // cout << s.find("Watch", 6) << endl;

    // cout << s.rfind("yss") << endl;
    // cout << s.rfind("yss", 2) << endl;

    //Extract a substr from a string
    // cout << s.substr() << endl; //no args: whole str is returned
    // cout << s.substr(5) << endl; //1 arg: substr from specified index to end
    // cout << s.substr(6, 5) << endl;

    //Remove a substr from a str, or clear the entire str
    // s.erase(2,2);
    // s.clear();
    cout << s << endl;

    return 0;
}//*/

//--------------------------------|
// C++ Style String Declarations
/*int main(){
    //declaring an empty string
    // string s;
    // cout << s << endl;

    //define a string with a C-style str literal
    string s {"Kiko"};
    cout << s << endl;

    //define a str var with val of another str var
    // string s1 {s};
    // cout << s1 << endl;

    //initialise a str with the 1st n characters of another str
    // string s1 {"Reiner", 4};
    // cout << s1 << endl;

    //str obj val, starting index, no. of chars to be copied from start index
    string s2 {s, 1, 3};
    cout << s2 << endl;

    //initialise a str like "HHH"
    // string s3 (3, 'H');
    // cout << s3 << endl;
    
    return 0;
}//*/

//----------------------------|
// C-Style Strings
/*int main(){
    // cout << static_cast <char> (tolower('Z')) << endl;

    // char a[5] {}; //initialise string with \0 at every index
    // cout << a << endl;
    // for (int i = 0; i < 5; i++)
    //     cout << (int) a[i] << endl;
    
    // cout << strcmp("f", "F") << endl;

    return 0;
}//*/