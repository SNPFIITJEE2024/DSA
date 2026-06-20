//main() - function is used as starting pointof a code/program ( from where compiler starts compiling )
//cout << "content to be printed" - to print
//<< - syntax part for insertion
//; - for termination
//"" - in btw string to be printed
//#include<iostream> - to import implementation of files like cout etc.
//std:: - ( used in each function locally ) different implementations exists, different namespaces for ex:- cout << has different implementations in every namespace, which one is used by user/programmer ? let's use standard namespace ( denoted by std ).... otherwise use -  using namespace std: - as globally so that no require for std:: in each function's block ( if want to use same namespace in each function )
// namespace - particular region in which scope of identifiers is defined
//endl or \n - for new line
//cin - input from user

/* #include<iostream>
using namespace std;
int main(){
    cout << "SNPFIITJEEGAURAV: " << endl;
    int a;
    cin >> a;
    cout << "SNPFIITJEEGAURAV: " << a << endl;
} */

/* #include<iostream>
using namespace std;
int main(){
    int a=5;
    cout << "value of a is: " << a << endl;
} */

/* #include<iostream>
using namespace std;
int main(){
    int a=7;
    cout << sizeof(a) << endl;
    short b=14;
    cout << sizeof(b) << endl;
    float c=21;
    cout << sizeof(c) << endl;
    double d=28;
    cout << sizeof(d) << endl;
    long e=35;
    cout << sizeof(e) << endl;
    bool f=42;
    cout << sizeof(f) << endl;
    long long g=49;
    cout << sizeof(g) << endl;
    cout << "value of a is: " << a << endl;
    char ch='g'; 
    cout << "value of ch is: " << a << endl;
    bool flag=true;
    cout << "value of flag is: " << flag << endl;
} */

/* //implicit type conversion:
#include<iostream>
using namespace std;
int main(){
    char ch=2024;
    cout << ch << endl;
    int num='g';
    cout << num << endl;
} */

//explicit type conversion:
#include<iostream>
using namespace std;
int main(){
    float a=(float)2;
    cout << sizeof(a) << endl;
    long long g=(long long)2;
    cout << sizeof(g) << endl;
    double d=5.7;
    int x=(int)d + 2;
    cout << ""
}

