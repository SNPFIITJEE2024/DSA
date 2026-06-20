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
#include<iostream>
using namespace std;
int main(){
    cout << "SNPFIITJEEGAURAV" << endl;
    int a;
    cin >> a;
    cout << "you entered" << a << endl;
}