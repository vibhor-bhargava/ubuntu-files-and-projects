#include <iostream>

using namespace std;

//----------------------------------------------------------|
// Determine no. of elements in the vector before -99 occurs
/*int main(){
    vector <int> vec {-99}; //when vector is empty, vec.size() = 0
    int total_elements = vec.size(), count {}, i {};
    
    while (i < total_elements && vec[i] != -99)
        cout << "hi\n", ++count, ++i;
    
    cout << count << " " << total_elements << endl;
    return 0;
}//*/

//----------------------------------------------------------|
// Sum of Products of all Pairs of Vector Elements
/*int main(){
    vector <int> vec {2,4,6,8};
    int result {}, n = vec.size();

    for (int i = 0; i <= n-2; i++)
    {
        for (int j = i+1; j <= n-1; j++)
            result += vec[i] * vec[j];
    }
    
    cout << result << endl;
    return 0;
}//*/

//---------------------------------------|
// Udemy Coding Ex. 18
/*int main(){
    char first_name[7] {"Bjarne"},
         last_name[11] {"Stroustrup"},
         whole_name[18];
    
    size_t first_name_length = strlen(first_name),
           last_name_length = strlen(last_name);
    
    strcpy(whole_name, first_name),
    strcat(whole_name, last_name);
    
    size_t whole_name_length = strlen(whole_name);
    
    cout << "The length of the first name, " << first_name << ", is " << first_name_length << " letters long and the length of the last name, " << last_name << ", is " << last_name_length << " letters long. This means that the length of the whole name must be " << whole_name_length << " letters long.";
    return 0;
}//*/