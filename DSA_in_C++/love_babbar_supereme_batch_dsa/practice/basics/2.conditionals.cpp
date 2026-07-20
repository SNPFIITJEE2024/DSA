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

//*****
//*   *
//*****
// USING 1/DIFFERENT FOR LOOP FOR EACH ROW, IN 1TH ROW FURTHER FOR LOOP FOR VARIABLE J FURTHER IF CONDITION FOR EXTREME RIGHT & LEFT MOST POSITIONS (0TH & 4TH COLUMNS) OF MIDDLE ROW/1TH ROW ( I.E. 2ND FOR LOOP CASE ) PRINTING * AND USING ELSE MIDDLE/BETWEEN (1TH,2TH,3TH COLUMNS) PRINTING SPACE " "
/* #include<iostream>
using namespace std;
int main(){
    for(int i=0; i<1; i++){
        for(int j=0; j<5; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=1; i<2; i++){
        for(int j=0; j<5; j+=1){
            if(j==0 || j==4){
            cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int i=2; i<3; i++){
        for(int j=0; j<5; j++){
            cout << "*";
        }
    }
} */

/*
   *****
   *   *
   *****
   USING SINGLE FOR LOOP FOR I VARIABLE THROUGHT THE CODE, USING IF FOR 0TH & 2TH ROW FURTHER NESTED FOR LOOP FOR JTH VARIABLE PRINTING * IN 0TH & 2TH ROW, THEN ELSE FURTHER NESTED FOR LOOP ( MEANS ALL ROWS EXCEPT 0TH & 2TH ( TOP & BOTTOM MOST ) ) FOR VARIABLE J, FURTHER USING IF FOR 0TH & 4TH COLUMN ( EXTREME LEFT & RIGHT POSITIONS IN 1TH ROW ) FURTHER USING ELSE TO PRINT SPACES " " AT 3 BETWEEN/MIDDLE POSITIONS ( I.E. 1TH, 2TH, 3TH POSITIONS IN 2TH ROW )
*/
 /* #include<iostream>
using namespace std;
int main(){
    for(int i=0; i<3; i++){
        if(i==0 || i==2){
        for(int j=0; j<5; j++){
            cout << "*";
        }
        cout << endl;
    }
    

        else{
            for(int j=0; j<5; j++){
                if(j==0 || j==4){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
                }
                cout << endl;
            }
        } 
} */

/*
   *****
   *   *
   *****
   DONE SAME METHOD ( PREVIOUS ONE ) TWICE 
USING SINGLE FOR LOOP FOR I VARIABLE THROUGHT THE CODE, USING IF FOR 0TH & 2TH ROW FURTHER NESTED FOR LOOP FOR JTH VARIABLE PRINTING * IN 0TH & 2TH ROW, THEN ELSE FURTHER NESTED FOR LOOP ( MEANS ALL ROWS EXCEPT 0TH & 2TH ( TOP & BOTTOM MOST ) ) FOR VARIABLE J, FURTHER USING IF FOR 0TH & 4TH COLUMN ( EXTREME LEFT & RIGHT POSITIONS IN 1TH ROW ) FURTHER USING ELSE TO PRINT SPACES " " AT 3 BETWEEN/MIDDLE POSITIONS ( I.E. 1TH, 2TH, 3TH POSITIONS IN 2TH ROW )
*/ 
/* #include<iostream>
using namespace std;
int main(){
    for(int i=0; i<3; i++){
        if(i==0 || i==2){
            for(int j=0; j<5; j++){
                cout << "*";
            }
            cout << endl;
        }
        else{
            for(int j=0; j<5; j++){
                if(j==0 || j==4){
                    cout << "*";
                }
                else{
                    cout << " ";
            }
            
            }
            cout << endl;
        }

        }
        }
 */
/* 
   *****
   *   *
   *****
   USING VARIABLES ROWS FOR ALL 3 ROWS, USING IF FOR OTH AND 2TH ROWS, FURTHER NESTED FOR LOOP FOR BOTH OF THEM ( TOP & BOTTOM MOST ROWS ), USING ELSE FOR ALL OTHER BETWEEN 0TH & 2TH ( TOP & BOTTOM MOST ) ROWS ( ONLY 1 HERE IN THIS CASE ), FURTHER NESTED FIRST PRINTING * AT 0TH COLUMN OF 1TH ROW THEN FOR LOOP FOR ALL NEXT 3 *S ( 1TH, 2TH, 3TH ) AGAIN PRINTING * AT 4TH COLUMN OF 1TH ROW  
*/   
/*  #include<iostream>
using namespace std;
int main(){
    for(int row=0; row<3; row++){
        if(row==0||row==2){
            for(int col=0; col<5; col++){
                cout << "*";
            }
        }
        else{
            cout << "*";
            for(int i=0; i<3; i++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
        }
    }
 */
/*GENERAL CASE OF PREVIOUS ONE*/
/* #include<iostream>
using namespace std;
int main(){
    int row;
    int col;
    int total_row;
    int total_col;
    cout << "enter no. of rows: " << endl;
    cin >> total_row;
    cout << "enter no. of cols: " << endl;
    cin >> total_col;
    for(row=0; row<total_row; row++){
        if(row==0||row==total_row-1){
            for(col=0; col<total_col; col++){
                cout << "*";
            }
            cout << endl;
        }
        else{
            for(col=0; col<total_col; col++){
                if(col==0||col==total_col-1){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    
} */

/*HALF PYRAMID
*
**
***
****
*****
******
*/
/*#include<iostream>
using namespace std;
int main(){
    for(int row=0; row<6; row++){
        for(int col=0; col<6; col++){
            if(row>=col){
                cout << "*";
        }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
} */
//GENERAL CASE OF PREVIOUS ONE
/* #include<iostream>
using namespace std;
int main(){
    int row, col, total_row, total_col;
    cout << "enter no. of rows: " << endl;
    cin >> total_row;
    cout << "enter no. of cols: " << endl;
    cin >> total_col;
    for(row=0; row<total_row; row++){
        for(col=0; col<total_col; col++){
                if(row>=col){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
        }
        cout << endl;
    }
} */
   
/* //GENERAL CASE FOR SQUARE CASE ( REAL HALF PYRAMID )
#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout << "enter n: ";
    cin >> n;
    for(row=0; row<n; row++){
        for(col=0; col<row+1; col++){
            if(row>=col){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
} */
//SAME, JUST REMOVING IF & ELSE CONDITION ( AS IT HAS NO EFFECT, ON GIVEN CONDITIONS IT'S ALREADY SATISFIED ) AN
/* #include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout << "enter n: ";
    cin >> n;
    for(row=0; row<n; row++){
        for(col=0; col<row+1; col++){
            cout << "*";
        }
        cout << endl;
    }
} */

/*
INVERTED HALF PYRAMID
******
*****
****
***
**
*
*/
/* #include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout << "enter n: ";
    cin >> n;
    for(row=0; row<n; row++){
        for(col=0; col<n-row; col++){
            cout << "*";
        }
        cout << endl;
    }
} */
/* #include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout << "enter n: ";
    cin >> n;
    for(row=0; row<n; row++){
        for(col=row-1; col<row+1; col--){
            cout << "*";
        }
        cout << endl;
    }
} */
/* //SAME PREVIOUS ONE BY USING IF ELSE CONDITION, LIKE HALF PYRAMIND ONE ABOVE
#include<iostream>
using namespace std;
int main(){
    int row, col, n;
    cout << "enter n " << endl;
    cin >> n;
    for(row=0; row<n; row++){
        for(col=0; col<n; col++){
            if(col<n-row){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }} */

/*
NUMERIC HALF PYRAMID
1
12
123
1234
12345
*/
/* #include<iostream>
using namespace std;
int main(){
    int row, col, total_row, total_col;
    cout << "enter total rows: " << endl;
    cin >> total_row;
    cout << "enter total cols: " << endl;
    cin >> total_col;
    for(row=0; row<total_row; row++){
        for(col=0; col<row+1; col++){
            cout << col+1;
        }
        cout << endl;
    }
} */
/* #include<iostream>
using namespace std;
int main(){
    int n, row, col;
    cout << "enter n: " << endl;
    cin >> n;
    for(row=0; row<n; row++){
        for(col=0; col<row+1; col++){
            cout << col+1;
        }
        cout << endl;
    }
} */

/*INVERTED DIGITS HALF PYRAMID
12345
1234
123
12
1
*/
/* #include<iostream>
using namespace std;
int main(){
    int n, row, col;
    cout << "enter n: " << endl;
    cin >> n;
    for(row=0; row<n; row++){
        for(col=0; col<n-row; col++){
            cout << col+1;
        }
        cout << endl;
    }
} */
//INCOMPLETE FOR NOW
/* #include<iostream>
using namespace std;
int main(){
    int total_row, total_col, row, col;
    cout << "enter total rows : " << endl;
    cin >> total_row;
    cout << "enter total cols : " << endl;
    cin >> total_col;
    for(row=0; row<total_row; row++){
        for(col=total_row-row; col>0; col--){
            cout << ;
        }
        cout << endl;
    }
} */
//NO RELATION BETWEEN ROW, COL & TOTAL_ROW IS USED
/* #include<iostream>
using namespace std;
int main(){
    int total_row, row, col;
    cout << "enter total rows : " << endl;
    cin >> total_row;
    for(row=0; row<total_row; row++){
        for(col=total_row-row; col>0; col--){
            cout << col;
        }
        cout << endl;
    }
} */
//USING LOGIC/RELATION BETWEEN COL, ROW & TOTAL_ROW IN COUT 
/* #include<iostream>
using namespace std;
int main(){
    int total_row, row, col;
    cout << "enter total rows : " << endl;
    cin >> total_row;
    for(row=0; row<total_row; row++){
        for(col=total_row-row; col>0; col--){
            cout << total_row - row - col + 1l;
        }
        cout << endl;
    }
} */

//FULL PYRAMID
/*
     *     
    * *
   * * *   
  * * * * 
 * * * * *
* * * * * *
*/
/* #include<iostream>
using namespace std;
int main(){
} */
/*

   
  **
 ****
******

     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *



     *          
    *           *
   * *           *
  * *           * *
 * * *           * *
* * *           * * *
*/
#include<iostream>
using namespace std;
int main(){
    int row, col, total_row;
    cout << "enter total rows: " << endl;
    cin >> total_row;
    for(row=0; row<total_row; row++){
        for()
    }
} 
