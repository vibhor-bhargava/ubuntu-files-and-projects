#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    printf("%d\n", strcmp("Deez", "deez"));
    return 0;
}


/*int main(int argc, char const *argv[])
{
    // int a = 1234;
    // printf("%-6d.\n", a);

    float p = 1234.345;
    printf("%5.2f\n", p);
    return 0;
}//*/



/*int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d%d\n", a, b);
    return 0;
}//*/


/*int main(int argc, char const *argv[])
{
    printf("%d\n", (int) sizeof(short));
    return 0;
}//*/


/*int main(){
    int a = 5, *p = &a;
    printf("%i\n%p\n", a, p);
    // printf("%u\n\n", p);
    return 0;
}//*/

//--------------------------|
/*int main(){
    float s; char ch; int n;
    printf("%u %u %u\n", &n, &ch, &s);
    return 0;
}//*/

//------------------------------------|
/*#pragma pack(1) //this PP directive packs the struct elements with precise mem. allocation
struct emp {
        int a; char ch; float s;
};

int main(){
    struct emp e;

    //compiler aligns the struct elements to mem. addresses that are multiples of 4
    printf("%u %u %u\n", &e.a, &e.ch, &e.s); //so that the 32-bit Up can process struct values faster
    return 0;
}//*/

//--------------------------------|
// fgets function
/*int main()
{
    char s[20];
    fgets(s, 20, stdin); //if input length exceeds 20, n-1 chars are taken from beginning, and \0 is taken as the nth char
    printf("Here we go: %s\n", s);
    return 0;
}//*/

//---------------------------------------------------------------|
// Clear input buffer after an input fn. call, for the next input
/*int main()
{
    char str[20];
    for (int i=0; i<2; i++)
    {
        scanf("%[^\n]s", str);
        printf("%s\n", str);
        getchar(); //getchar fetches the remaining \n char from input buffer, that's residual after prev. input
    }
    return 0;
}//*/