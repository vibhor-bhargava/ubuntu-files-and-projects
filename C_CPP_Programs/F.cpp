// #include "useful_functions.cpp"
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> a (5);

    for (auto &s : a)
    {
        cout << s.size() << endl;
        // cout << static_cast<int> (s[0]) << endl;
    }
    
    
    return 0;
}


// Create a vector of n elements and assign x to all the mem. locs.
/*int main(){
    vector<int> a (3, 5);

    for (int i = 0; i < a.size(); ++i)
        cout << a[i] << " ";
    cout << endl;
    
    return 0;
}//*/


// Void pointer
/*int main(){
    int n = 5;
    void* p = &n;

    cout << (uintptr_t) p << endl;
    p++; //ptr arithmetic on void ptr is ILLEGAL
    cout << (uintptr_t) p << endl;
    
    cout << * static_cast<int *> (p) << endl; //void ptr can be dereffed after type-casting
    return 0;
}//*/


/*int& fun(int n){
    int& p = n;
    return p;
}

int main(){
    int& q = fun(69); //returning reference to a freed mem. loc. is dangerous

    //as after another function call
    //the same previously occupied mem location may be updated
    // fun(6);

    cout << q << endl;
    
    return 0;
}//*/


/*int* fun()
{
    static int x = 2; //if x is not static, then ptr p becomes a dangling ptr
    return &x;
}

int main(){
    int *p = fun();
    
    cout << *p << endl;
    return 0;
}//*/


// Sort a 2D vector showing frequencies of unique chars in a string
/*int main(){
    vector<vector<int>> a {{'b', 2}, {'e', 4}, {'a', 3}};
    sort(a.begin(), a.end());

    for (size_t i = 0; i < a.size(); ++i)
        cout << static_cast<char> (a[i][0]) << " : " << a[i][1] << endl;
    
    return 0;
}//*/


// Various ways to initialise a vector
/*int main(){
    vector<char> a {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    // a.resize(6);
    // a.assign({'a', '2', 'b', '2', 'c', '3'});
    a = {'a', '2', 'b', '2', 'c', '3'};
    
    for (size_t i = 0; i < a.size(); ++i)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}//*/


// Ref. to a const obj can be assigned an r-value
/*int main(){
    string s = "This is a string";
    const string& t = s.substr(0, 4);
    
    cout << t << endl;
    return 0;
}//*/


/*int main(){
    vector<int> v {1,2,3,4,5};
    
    cout << &v << '\n' << &v[0] << '\n';
    return 0;
}//*/


/*int main(){
    int *x = 0;
    int& y = *x;

    //as mem. address 0 cannot be read from/written to
    //using a ref to the dereferenced ptr gives error    
    y = 5;
    cout << y << endl;
    return 0;
}//*/


// Reference variables 101
/*int main(){
    int a = 5, *p = &a, b = 7;
    // int *&q = p; //reference to a ptr acts as an alias to the ptr
    
    // q = &b;

    // cout << *p << endl;
    // cout << *q << endl;
    // cout << boolalpha << (q == p) << endl;

    // int *const &q = &b;
    // q = &b; //since q is a const ptr/ref, it cant be assigned another address

    // cout << *q << endl;

    // const int &q = a;
    // q = b; //as q is const ref, assignment is invalid

    // a = 0;
    // cout << q << endl;
    // cout << &a << " " << &q << endl;
    return 0;
}


// Assignment of 1 vector obj's value to the other
// Comparison of vector objects
/*int main(){
    vector <int> a{1,2,3,4,5};
    vector <int> v = a;

    for (size_t i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    
    cout << endl << boolalpha << (a == v) << endl;
    return 0;
}//*/


//------------------------------------------|
// vector.resize() method
/*int main(){
    vector <int> v {1,2,3};

    v.resize(6);

    for (size_t i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    
    cout << endl;
    return 0;
}//*/


//emplace() method of Vector
/*int main(){
    vector <int> v {};
    
    for (size_t i = 5; i > 0; --i)
        v.emplace(v.begin(), i);
    
    for (size_t i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    return 0;
}//*/


// Using new & delete
/*int main(){
    int *p = new int;

    cout << p << endl;
    cout << *p << endl;

    *p = 8;
    cout << *p << endl;

    delete p;
    // p = nullptr;
    *p = 2;

    cout << "\nAfter deallocation\n" << p << endl;
    cout << *p << endl;
    
    return 0;
}

// Dereferencing a vector of str objects
/*int main(){
    vector <string> peaky_blinders {"Thomas", "Arthur", "John"};
    vector <string> *p = &peaky_blinders;

    // cout << &peaky_blinders << endl;
    // cout << &peaky_blinders[0] << endl;
    // cout << p << endl;
    cout << (*p)[0] << endl;
    
    return 0;
}//*/


// Expressing ptr r-value in decimal
/*int main(){
    int a{};
    int *p = &a;

    cout << (uintptr_t) (&a) << endl;
    cout << (uintptr_t) (&p) << endl;

    return 0;
}//*/


// assign() method in std::vector
/*int main(){
    vector <int> a;
    a.assign({1,2,3,4,5});

    for (int i = 0; i < 5; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // cout << a.size() << endl;
    return 0;
}


/*int main(){
    // cout << numeric_limits<double>::min() << endl;
    // cout << numeric_limits<double>::max() << endl;
    
    long long int n = 5;
    double m = 2.5e16;

    cout << m << endl;

    return 0;
}//*/


// Default arguments
/*void func(int a, double b = 0.01);
int main(){
    func(1);

    return 0;
}

void func(int a, double b)
{
    cout << a << " " << b << endl;
}//*/

//-------------------------------------------------------------------|
// find() returns the iterator in vector's case & ptr in array's case
/*int main(){
    vector<int> a {3,4,5,1,2,1};

    cout << find(a.begin(), a.end(), 1) - a.begin() << endl;
    return 0;
}//*/

// Using find()
/*int main(){
    vector <int> v {3,56,4,34,43,12};

    if (find(v.begin() + 4, v.end(), 34) < v.end())
        cout << boolalpha << true << endl;
    else
        cout << boolalpha << false << endl;

    return 0;
}//*/


/*int main(){
    vector <int> v {1,2,3,4,5};

    v.erase(v.begin() + 2);
    // swap(v[0], v[1]);

    for (auto i : v)
    {
        cout << i << endl;
    }    

    return 0;
}//*/

//--------------------------------|
// Testing recursive binary search
/*int main(){
    int k = 61, a[] {31, 36, 44, 55, 60}, n = 5;
    
    system("clear");
    cout << binary_search_recursive(k, a, 0, n-1) << endl;
    return 0;
}//*/


// Testing iterative binary search
/*int main(){
    vector <int> v {2};
    int k = 2;
    
    cout << binary_search(k, v) << endl;
    return 0;
}//*/

/*int main(int argc, char const *argv[])
{
    cout <<"Namaste Dunia! <3" << endl;
    return 0;
}//*/

/*int main(int argc, char const *argv[])
{
    // bool a = false;
    // cout << !a << endl;
    // cout << sizeof(int) << endl;
    return 0;
}//*/

/*int main(int argc, char const *argv[])
{
    // cout << "Hello" << " XD" << endl;
    double a;
    int b;

    cin >> b >> a;
    cout << a << b << '\n';
    return 0;
}//*/

//---------------------------------------------|
// Various ways to initialise variables in C++
/*int main(int argc, char const *argv[])
{
    long a {1'012'345'456'789}; //list-type initialisation
    int b (1'234'567); //Comtructor initialisation
    cout << a << endl << b << endl;
    return 0;
}//*/

//-----------------------------------------|
/*int main(){
    int a[5] {}; //initialises array with 0

    for (int i = 0; i < 5; i++)
        cout << a[i] << endl;

    cout << a << endl;
    return 0;
}//*/

//--------------------------------------------|
// ***VECTORS***
/*int main(){
    vector <char> alpha {65, 66, 67, 68, 69}; //list initialisation
    // vector <int> num(5); //constructor call initialisation

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << num[i] << endl;
    // }

    cout << &alpha << endl; //printing base address of a vector

    return 0;
}//*/

//-----------------------------|
// Explicit Type-Casting
/*int main(){
    double avg = 50/ static_cast<double>(3); //modern C++ style
    // double avg = (double)50 / 3; //old C style

    cout << avg << endl;
    return 0;
}//*/

//-----------------------|
/*int main(){
    //% operator works only on integers/characters
    double a = 'B' % 'A';

    //set precision of floating pt. nos. to 2 decimal places
    cout << fixed << setprecision(2);
    cout << a << endl;
    return 0;
}//*/

//----------------------------------------------------------|
// Only int/char literals/constants can be used beside case
/*int main()
{
    const int a{1}, b{2};
    int c = 2;

    switch (c)
    {
    case a:
        cout << a << endl;
        break;

    case b:
        cout << b << endl;
        break;

    default:
        cout << "None of the above" << endl;
    }

    return 0;
}//*/

//------------------------------|
// Comma Operator
/*int main(){
    int a{}, b{2}, c{3};
    a = (b, c, 4); //comma acts as an operator/sequence point
    
    // float a;
    cout << a << endl; //(a = *literal*) returns that value itself

    // int a = 0, x = a++, y = a++; //comma acts as a separator

    // cout << x << " " << y << endl;
    return 0;
}//*/

//-------------------------------------------|
// Calling a function defined in another file
/*int main(){
    int n {};
    cin >> n;

    cout << pow(n) << endl;
    return 0;
}//*/

//-------------------|
// 2D-Vector
/*int main(){
    vector <vector <int>> vec {{1,2}, {3,4}, {5,6}};
    
    for (auto v : vec)
        cout << v[0] << " " << v[1] << endl;
    
    return 0;
}//*/

//-----------------------------|
//rand() & srand()
/*int main(){
    system("clear");

    srand(time(nullptr));

    for (int i = 0; i < 8; ++i)
        cout << rand() << " ";
    cout << endl;
    
    return 0;
}//*/

//-------------------------------|
// Pass by Value
/*void func(string s){
    s = "Geralt";
    cout << s << endl;
}

int main(){
    string s {"Vibhor"};

    func(s);
    cout << s << endl;
    return 0;
}//*/

//--------------------------------|
// Pass by Reference
/*void func(string &s){ //here s is a reference parameter
    s = "Geralt";
}

int main(){
    string s {"Vibhor"};

    cout << s << endl;
    func(s); //base address of str s is passed into func() behind the scenes
    cout << s << endl;
    return 0;
}//*/