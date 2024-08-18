// Printing patterns  --> more than a 20 to complete the work.

// Remember this simple thing --- first initialized loop is for the number of vertical lines(we call this as Rows).
// The first inner loop is for the number of horizontal lines(columns) in each vertical lines(rows).

/* PATTERN-1
****
****
****
****
*/
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    printf("Give me a value for 'n': ") ;
    cin >> n ; // ex: n=4
    for(int i =0;i<n;i++){ // prints 0 to < 4 == 0,1,2,3 .. total of 4 lines 
        for(int j=0 ; j<n ; j++) { // j = 0 to <4 i.e 3 --> 4 columns in each line(row)
            cout << "*" ;
        }
        cout << "\n" ;
    }
    return 0 ;
}


/* PATTERN-2
*
**
***
****
*/
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cout << "Give me the value of 'n': " ;
    cin >> n ;
    for(int i=1 ; i<=n ; i++){ // 'n' number of lines
        for(int j=1;j<=i;j++){ // 1 * in 1st line .. row number = number of stars.
            cout << "*" ;
        }
        cout << "\n" ; // new line after each column(horizontal completion)
    }
    return 0 ;
}   

/* PATTERN-3
1  --> 1 to number of the row
12
123
1234
12345
*/
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout <<"Give me the value of 'n': " ;
    cin >> n; // The file will run an infinite loop if we dont give these values
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            cout << j ;
        }
        cout << "\n" ;
    }
    return 0 ;
}

/* PATTERN-4
1  --> 1 to number of the row
22
333
4444
55555
*/
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Give me the value of 'n': " ;
    cin >> n ;
    for(int i=0 ; i<n;i++) { // i = 0 to 3
        for(int j=0 ; j<=i ; j++){ // in i=0 --> there should 1(i+1) for 1(i+1) time .
            cout << i+1 ; // in i=1 --> there should be a value of 2(i+1) for 2 time(0,1 = 2 times )
        }
        cout << "\n" ;
    }
    return 0 ;
}

/* PATTERN-5
*****  --> n number of rows --> for i=1 , number of stars = n-i+1(if we take 'i' from 1 to 'n')
**** 
***
**
*
*/
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Give me the value of 'n': " ; // 5 for example
    cin >> n ;
    for(int i=1 ; i<=n; i++) { // i = 1 to 5
        for(int j=1 ; j<=n-i+1 ; j++){  // i=1 to n-i(1)-1 == 5 for the first line(row) then 4 for the first row.
            cout << "*" ; 
        }
        cout << "\n" ;
    }
    return 0 ;
}
/* PATTERN-6 --> (spaces , star , spaces)
    *       (4,1,4) ; (3,3,3) ; (2,5,2) ; (1,7,1) ; (0,9,0). 
   ***      (n-1,1,n-1) ; (n-2,1+2,n-2) --> (n-i,2*i-1,n-i) --> This is the internals of the loop    
  *****  
 *******
*********
*/
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Give me the value of 'n': " ; // 5 for example
    cin >> n ;
    for(int i=1 ; i<=n; i++) { // i = 1 to 5 -- rows are same
        for(int spaces =1; spaces<=n-i ;spaces++){ // spaces
            cout<<" " ;
        }
        for(int star = 1; star<= 2*i - 1 ;star++ ){ // star
            cout << "*" ;
        }
        for(int spaces =1; spaces<=n-i ;spaces++){ // spaces
            cout<<" " ;
        }
        cout<<"\n" ;
    }
    return 0 ;
}

/* PATTERN-7
*********  --> (space , star , space) --> i = 0 to 4 --> (0,2*(n-i)-1,0)
 *******   -->(1,2(5-1)-1),1 --> (i,2*(n-i)-1,i) --> These are the internal conditions of a loop.
  *****
   ***
    *
*/

#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Give me the value of 'n': " ; // 5 for example
    cin >> n ;
    for(int i = 0 ; i < n ; i++){
        for(int spaces = 0 ; spaces<i ; spaces++ ){ // spaces
            cout<< " " ;
        }
        for(int stars = 0 ; stars<2*(n-i)-1 ; stars++){
            cout<<"*" ;
        }
        for(int spaces = 0 ; spaces<i ; spaces++ ){ // spaces
            cout<< " " ;
        }
        cout<<endl ; // This is similar to the cout<<"\n" ;
    }
    return 0 ;
}

/* PATTERN-8
    *      
   ***   
  *****  
 *******
*********
 *******
  *****
   ***
    *
*/

// Method-1 :-- With my logic
// Number of rows(vertical lines == 9 for n=5 --> 2*n - 1)
// (stars , spaces , stars) --> till n=5 --> (n-i , 2*i - 1 , n-i)
// after n=5(This is the breakpoint) --> 
// (i-n spaces , (total number of columns - (number of stars in the front + number of star at the end))2*n-1-2*(i-n) stars,i-n spaces)
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "'n'= " ;
    cin >> n ;
    for(int i=1 ; i<= 2*n-1 ; i++){
        if(i <= n){ // till the breaking point 
            for(int spaces = 1 ; spaces <= n-i ; spaces++ ){
                cout << " " ;
            }
            for(int stars = 1 ; stars <= 2*i - 1 ; stars++){
                cout << "*" ;
            }
            for(int spaces = 1 ; spaces <= n-i ; spaces++ ){
                cout << " " ;
            }
            cout<<endl ;
        }
        else{
            for(int spaces = 1 ; spaces <= i-n ; spaces++){
                cout<<" " ;
            }
            for(int stars = 1 ; stars <= ((2*(n)-1)-(2*(i-n))) ; stars++){
                cout<<"*" ;
            }
            for(int spaces = 1 ; spaces <= i-n ; spaces++){
                cout<<" " ;
            }
            cout<<endl ;
        }
    }
    return 0 ;
}

// Method-2 :-- upper and lower part of the pattern printing . 
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "'n'= " ;
    cin >> n ;
    // upper part
    for(int i=1 ; i<=n ; i++){
        for(int spaces  = 1 ; spaces <= n-i ; spaces++){
            cout << " " ;
        }
        for(int stars = 1 ; stars <= 2*i - 1 ; stars++){
            cout<<"*" ;
        }
        for(int spaces  = 1 ; spaces <= n-i ; spaces++){
            cout << " " ;
        } // No need of printing the spaces after the stars
        cout<<endl;
    }
    // lower part
    for(int i = n-1 ; i>=1 ; i--){
        for(int spaces=1 ; spaces <= n-i ; spaces++){ // i=n-1=4 --> n-i(5-4) == +1 for the first line 
            cout<<" " ; 
        }
        for(int stars = 1 ; stars <=2*i-1 ; stars++){
            cout<<"*" ;
        }
        cout<<endl;
    }
    return 0 ;
}

/* PATTERN-9
*
**
***
****
*****
****
***
**
*
*/
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "'n': " ;
    cin >> n ;
    for(int i = 0; i<=2*n-1 ; i++){
        if(i<=n){ // This is the breaking-point
        for(int star=1;star<=i;star++){
            cout<<"*" ;
        }
        cout<<endl;
        }
        else{
            for(int star=1 ; star<=n-(i-n) ; star++){
                cout<<"*" ;
            }
            cout<<endl ;
        }
    }
    return 0 ;
}
/* PATTERN-10
1
01
101
0101
10101 
*/
// observation :-- lets start with i=1 (odd numbered row) == start 1 , next number = 1- present number
// This is our code with stupid logic --- This is the mistake 
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "n =  " ;
    cin >> n ; 
    int startNum  ;
    int nextNum ;
    for(int i = 1 ; i<=n ; i++) {
        if(i%2 == 1){ // odd numbered row
            for(int j=1 ; j<=i ; j++){
                startNum = 1 ;
                cout<<startNum ;
                nextNum = 1-startNum;
                cout<<nextNum ;
            }
            cout<<endl ;
        }
        else{ // even numbered row
            for(int j=1 ; j<= i ; j++){ 
                startNum = 0 ;
                cout<<startNum ;
                nextNum = 1-startNum;
                cout<<nextNum ;
            }
            cout<<endl ;
        }
    }
    return 0 ;
}

/* What is the error with our code 
cant print startNum & nextNum in the same loop --> if i=1 then it prints 10 -->So this is not the output we are looking for.
*/
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "n = " ;
    cin >> n ;
    int startNum ;
    for(int i=1 ; i<=n ; i++){
        if(i%2 == 1) { // odd numbered row
            startNum = 1 ;
        }
        else {startNum = 0;}
        for(int j=1 ; j<=i ; j++){
            cout<<startNum ;
            startNum = 1 - startNum ;
        }
        cout << endl ;
    }
    return 0 ;
}

/* PATTERN-11
1        1 // number of rows = n ; (number of the row , spaces , number of the row) 
12      21 // so 1,2 --> j = 1 to i(since i=2 in this line) ; at the end (after the spaces) 2,1 are the numbers --> j = i to 1(value--) 
123    321 // spaces -- (8,6,4,2,0) --> 2*(n-i) for i = 1 to n.
1234  4321
1234554321
*/
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "n = " ;
    cin >> n ;
    for(int i = 1 ; i<=n ; i++){
        for(int j=1 ; j<=i;j++){
            cout << j ;
        }
        for(int spaces = 1 ; spaces <= 2*(n-i) ; spaces++){
            cout<<" " ;
        }
        for(int num = i ; num>=1 ; num--){
            cout<<num ;
        }
        cout << endl ;
    }
    return 0 ;
}

/* PATTERN-12
1                   --> Number of rows = n
2 3                 --> number updates each column & in each row
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "n = " ;
    cin >> n ;
    int num = 1 ; // Where we give the variable matters.
    for(int i=1 ; i<=n ; i++){
        for(int j = 1; j <= i ; j++){
            cout << num  << " ";
            num++ ;
        }
        cout << endl;
    }
    return 0 ; 
}
/* PATTERN-13
A
A B
A B C
A B C D
A B C D E
*/
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "n = " ;
    cin >> n ;
    for(int i = 1 ; i <= n ; i++ ){ 
        for(char j = 'A' ; j <= 'A'+i-1 ; j++){ // for row 1 -- i=1 --> A=i becomes A,B --> so we have to do <--> A+i-1
            cout << j ; 
        }
        cout << endl ;
    }
    return 0 ;
}
/* PATTERN-14
A B C D E
A B C D
A B C
A B
A
*/
#include<iostream>
using namespace std ;
int main(){
    int n ; 
    cout << "n = " ;
    cin >> n ;
    for(int i=1;i<=n;i++){
        for(char j = 'A' ; j <= 'A'+n-i ; j++){
            cout << j ;
        }
        cout << endl ;
    }
    return 0 ;
}

/* PATTERN-15
A 
B B
C C C
D D D D
E E E E E
*/

#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "n = " ;
    cin >> n ;
    for(int i =0 ; i<=n ; i++){
        char letter = 'A'+i-1 ;
        for(int j = 1 ; j <= i ; j++){
            cout << letter ;
        }
        cout << endl ;
    }
    return 0 ;
}
/* PATTERN-16
   A         --> n = number of rows ; 
  ABA        --> spaces , char , spaces ; 
 ABCBA  --> (3s,1char,3s) ; (2s,3char,2s) , (1s,5char,1s) , (0s,7char,0s)
ABCDCBA 
*/
// breakpoint for the columns --> we calculated the rows breakpoint -- now similarly for the column breakpoint
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "n = " ;
    cin >> n ;
    for(int i = 1 ; i <= n ; i++ ){ // number of rows = n
        // spaces first
        for(int spaces = 1 ; spaces <= n-i ; spaces++){
            cout << " " ;
        }
        //characters 
        // --> Look for i=1 we print 'A' ; 
        // for i=2 --> We need to print 'A','B','A'. -->So we run the loop from j=1 to i --> This print A,B(char++) now char = C ; char-=2--> C,B,A --> This prints 'A' again
        // for i=3 --> j=1 to 'i' prints A,B,C(now char = 'D') ; char-=2 --> 'B' now  char-- ==> B,A.(we do this for i-1 times like 0 to <=i-1 or 0 to <i)
        char ltr = 'A' ;
        for(int j=1 ; j<=i ; j++){
            cout << ltr ;
            ltr++ ;
        }
        ltr -= 2 ;
        for(int j=1;j<=i-1 ; j++){ // or else we can also do that like j<i
            cout<< ltr ;
            ltr-- ;
        }
        cout << endl ;
    }
    return 0 ;
}

/* PATTERN-17
E
D E
C D E
B C D E     
A B C D E
*/
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"n = " ;
    cin >> n ;
    for(int i=0 ; i<=n ; i++){ // number of vertical lines
        char letter = 'A'+n-1 ;
        for(int j = 1; j<=i ; j++){
            cout << letter ;
            letter-- ;
        }
        cout << endl ;
    }
    return 0 ;
}


/* PATTERN-18
*        *      // Number of rows == 2*n-1
**      **      // breakpoint when row > n 
***    ***      // (stars,spaces,stars) --> Till <=n --> (row number , 2*(n-row number) , row number)
****  ****     
**********
****  ****      // After the breaking-point : row number = 6 --> stars = n-(i-n) ; spaces = 2*(i-n) ; 
***    ***       
**      **
*        *
*/
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"n = " ;
    cin >> n ;
    for(int i=1 ; i<=2*n-1 ; i++){ 
        if(i<=n){
            // stars
            for(int j=1;j<=i;j++){
                cout << "*" ;
            }
            // spaces 
            for(int spaces = 1 ; spaces <=2*(n-i) ; spaces++){
                cout << " " ;
            }
            // stars
            for(int j=1;j<=i;j++){
                cout << "*" ;
            }
            cout<<endl ;
        }
        else{
            for(int stars = 1 ; stars <=n-(i-n) ; stars++){
                cout << "*" ;
            }
            for(int spaces = 1 ; spaces <= 2*(i-n) ; spaces++){
                cout << " " ;
            }
            for(int stars = 1 ; stars <=n-(i-n) ; stars++){
                cout << "*" ;
            }
            cout << endl ;
        }
    }
    return 0 ;
}

/* PATTERN-19
****
*  *
*  *
****
*/
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "n = " ;
    cin >> n ;
    for(int i = 1 ; i <= n ; i++){ // number of vertical lines(row)
        if(i==1 || i==n){
            for(int j=1;j<=n;j++){
                cout << "*" ;
            }
            cout<<endl ;
        }
        else{
            for(int j=1;j<=n ; j++){
                if(j==1 || j==n){
                    cout<<"*" ;
                }
                else{
                    cout<<" " ;
                }
            }
            cout<<endl;
        }
    }
    return 0 ;
}


/* PATTERN-20
12345
1234
123
12
1
*/
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "n = " ;
    cin >> n ;
    for(int i = 1 ; i <= n ; i++){
        for(int j=1 ; j<=n-i+1 ; j++){
            cout << j ;
        }
        cout << endl ;
    }
    return 0 ;
}


/* PATTERN-21
**********
****  ****
***    ***
**      **
*        *
**      **
***    ***
****  ****
**********
*/
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "n = " ;
    cin >> n ;
    for(int i = 1 ; i <= 2*n-1 ; i++){
        if(i<=n){
            for(int stars=1 ; stars<=n-i+1 ; stars++){
                cout<<"*" ;
            }
            for(int spaces = 1 ; spaces <= 2*(i-1) ; spaces++){
                cout << " " ;
            }
            for(int stars=1 ; stars<=n-i+1 ; stars++){
                cout<<"*" ;
            }
            cout<<endl;
        }
        else{
            for(int stars = 1 ; stars <= (i-n)+1 ; stars++){
                cout << "*" ;
            }
            for(int spaces = 1 ; spaces <= 2*((n)-((i-n)+1))  ; spaces++){ // n = 5 --> number of columns = 2*n ; 2 stars at the start && the end in 6th row --> 2*n-2*(number of stars) 
                cout << " " ;
            }
            for(int stars = (i-n)+1 ; stars >=1  ; stars--){
                cout << "*" ;
            }
            cout << endl ;
        }
    }
    return 0 ;
}
/* PATTERN-22

4444444
4333334
4322234
4321234
4322234
4333334
4444444

*/

// methods --> (i) The breakpoint method --> (ii) using 'min' (iii) using 'max'
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "n = " ;
    cin >> n ;
    int size = 2*n-1;
    for(int i=0 ; i<size ; i++){
        for(int j=0 ; j<size ; j++){
            int right = i ; // ==> left = size-i-1 (since a column runs from 0 to size-1)
            int left = size-i-1;
            int top = j ; // ==> Similar to the 'left' --> bottom = size-j-1
            int bottom = size-j-1 ;
            int breakpoint = min(min(left,right),min(top,bottom)) ;
            cout << n-breakpoint ;
        }
        cout << endl ;
    }
    return 0 ;
}

// If we want to run the loop with this initializations --> we can do in this way --> 
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "n = " ;
    cin >> n ;
    int size = 2*n-1;
    for(int i=1 ; i<=size ; i++){
        for(int j=1 ; j<=size ; j++){
            int right = i-1 ; // ==> left = size-i-1 (since a column runs from 0 to size-1)
            int left = size-i;
            int top = j-1 ; // ==> Similar to the 'left' --> bottom = size-j-1
            int bottom = size-j ;
            int breakpoint = min(min(left,right),min(top,bottom)) ;
            cout << n-breakpoint ;
        }
        cout << endl ;
    }
    return 0 ;
}

/* using 'max' function:--  never use this method -- do not complicate things.
int maxDistance = max(max(i, j), max(size-1-i, size-1-j));
            // Print the value based on the maximum distance
            cout << (maxDistance - (n-1) + 1);
*/
