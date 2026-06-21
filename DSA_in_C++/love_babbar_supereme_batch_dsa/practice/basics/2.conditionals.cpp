/* #include<iostream>
using namespace std;
int main(){
    int score;
    cout << "enter the score: " << endl;
    cin >> score;
    if(score<300){
        cout << "india wins" << endl;
    }
    else {
        cout << "usa wins" << endl;
    }
} */

//NESTED IF ELSE
/* #include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "enter marks" << endl;
    cin >> marks;
    if(marks>=90){
        cout << "A grade";
    }
        else{
            if(marks>=80){
                cout << "B grade";
            }
            else{
                if(marks>=60){
                    cout << "C grade";
                }
                else{
                    if(marks>=40){
                        cout << "D grade";
                    }
                    else{
                        cout << "F grade";
                    }
                }
            }
        }
} */

/* //IF-ELSEIF-ELSE
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "enter the marks: " << endl;
    cin >> marks;
    if(marks>=90){
        cout << "A";
    }
    else if(marks>=80){
        cout << "B";
    }
    else if(marks>=60){
        cout << "C";
    }
    else if(marks>=40){
        cout << "D";
    }
    else{
        cout << "F";
    }
} */

/* #include<iostream>
using namespace std;
int main(){
    int bro_num;
    cout << "enter no. of bro: " << endl;
    cin >> bro_num;
    if(bro_num==0){
        cout << "baat bn jaegi";
    }
    else{
        cout << "baat ni bnegi";
    }
} */

//LOOPING
/* #include<iostream>
using namespace std;
int main(){
    for(int i=0; i<5; i+=1)
    cout << "SNPFIITJEEGAURAV" << endl;
} */

/* #include<iostream>
using namespace std;
int main(){
    for(int i=0; i<5; i++){
        cout << i << endl;
    }
} */

/* #include<iostream>
using namespace std;
int main(){
    for(int i=5; i>0; i-=1){
        cout << i << endl;
    }
} */

/* #include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=10; i+=1){
        cout << 2*i << endl;
    }
} */

/* #include<iostream>
using namespace std;
int main(){
    int i;
    for(i=1; i<=10; i+=1){
        cout << 2*i << endl;
    }
} */

/* #include<iostream>
using namespace std;
int main(){
    for(int i=0; i<=5; i+=2){
        cout << i << endl;
    }
} */

/* #include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=5; i+=2){
        cout << i << endl;
    }
} */

/* #include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=10; i=i*2){
        cout << i << endl;
    }
} */

/* #include<iostream>
using namespace std;
int main(){
    for(int i=100; i>0; i/=2){
        cout << i << endl;
    }
} */

/* #include<iostream>
using namespace std;
int main(){
    for(int i=5; i<=10; i+=1){
        cout << i << endl;
    }
} */

/* #include<iostream>
using namespace std;
int main(){
    int i=0;
    for(; i<5; i++){
        cout << i << endl;
    }
} */

/* #include<iostream>
using namespace std;
int main(){
    int i=0;
    for(; ; i++){
        if(i<5)
            cout << i << endl;
        }
} */

/* #include<iostream>
using namespace std;
int main(){
    int i=0;
    for(; ; ){
        if(i<5)
            cout << i << endl;
            i++;
        }
} */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    if(cin >> n){
        cout << "snpfiitjeegaurav";
    }
    else{
        cout << "SNPFIITJEEGAURAV";
    }
} */

/* #include<iostream>
using namespace std;
int main(){
    if(cout << "snpfiitjeegaurav"){
        cout << "parabola";
    }
    else{
        cout << "hyperbola";
    }
} */

//PATTERNS
/* #include<iostream>
using namespace std;
int main(){
    for(int i=0; i<3; i++){
        cout << "*" << endl;
            for(int j=0; j<=i; j++){
                cout << "*";
            }
            }
} */
/*  #include<iostream>
using namespace std;
int main(){
    for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << "*";
            }
            cout << endl;    
        }
} */
/* #include<iostream>
using namespace std;
int main(){
    for(int i=3; i<=3; i){
        cout << "*" << endl;
            for(int j=3; j<=3; j){
                cout << "*";
            }
            }
} */

/* #include<iostream>
using namespace std;
int main(){
    int n,m;
    cout << "enter no. of rows: " << endl;
    cin >> n;
    cout << "enter no. of columns: " << endl;
    cin >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << "*";
        }
        cout << endl;
    }
} */

//WITHOUT GOTO (USING GOTO IS BAD PRACTICE), PATTERNS PRINTING CAN BE DONE ONLY BY 1 METHOD (I.E. PRINTING FIRST ROWS (OUTER LOOP) THEN COLUMNS (INNER LOOP) NESTED IN IT)

/* #include<iostream>
using namespace std;
int main(){
    int n,m;
    cout << "enter no. of columns: " << endl;
    cin >> m;
    cout << "enter no. of rows: " << endl;
    cin >> n;
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            cout << "*";
        }
        cout << endl;
    }
} */

#include<iostream>
using namespace std;
int main(){
    for(int i=0; ; i++){
        for(int j=0; j<5; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=1; ; i++){
        for(int j=0; ; j++){
            cout << "*"
        }
        cout << endl;
    }
    for(int i=2; ; i++){
        for(int j=0; j<5; j++){
            cout << "*";
        }
    }
}