#include <iostream>
using std::cout;
using std::cin;

 //void printPattern1(int n){
    //for (int i = 1 ; i <= n; i++) {
         //for (int j = 1; j <=i ; j++) {
             //cout << "*";
         //}
         //cout << "\n";
    //}
 //}
 //
 //void printPattern2(int n){
     //for(int i = n; i > 0; i--){
         //for(int j = i; j > 0; j--){
             //cout << "*";
         //}
         //cout << "\n";
     //}
 //}

 //void printPattern3(int n){
     //for(int i = 1; i <= n; i++){
         //for(int k = n-i; k > 0; k--){
             //cout << " ";
         //}
         //for(int j = 1; j <= i; j++){
             //cout << "*";
         //}
         //cout << "\n";
     //}
 //}

 //void printPattern4(int n){
     //for(int i = n; i >= 1; i--){
         //for(int k = n-i; k > 0; k--){
             //cout << " ";
         //}
         //for(int j = i; j >= 1; j--){
             //cout << "*";
         //}
         //cout << "\n";
     //}
 //}

 //void printPattern5(int n){
     //for(int i = 1; i <= n; i++){
         //for(int j = 1; j <= i; j++){
             //cout << i;
         //}
         //cout << "\n";
     //}
 //}

 //void printPattern6(int n){
     //for(int i = n; i >= 1; i--){
         //for(int j = i; j >= 1; j--){
             //cout << i;
         //}
         //cout << "\n";
     //}
 //}

 //void printPattern7(int n){
     //for(int i = n; i >= 1; i--){
         //for(int j = i; j >= 1; j--){
             //cout << (n-i+1);
         //}
         //cout << "\n";
     //}
 //}

 //void printPattern8(int n){
     //for(int i = 1; i <= n; i++){
         //for(int k = 1; k <= n-i; k++)
             //cout << " ";
         //for(int j = 1; j <= i; j++){
             //cout << i;
         //}
         //cout << "\n";
     //}
 //}

 //void printPattern9(int n){
     //for(int i = n; i >= 1; i--){
         //for(int k = 1; k <= n-i; k++)
             //cout << " ";
         //for(int j = i; j >= 1; j--){
             //cout << (n-i+1);
         //}
         //cout << "\n";
     //}
 //}
 
 //void printPattern10(int n){
     //for(int i = 1; i <= n; i++){
         //for(int j = 1; j <= i; j++){
             //cout << j;
         //}
         //cout << "\n";
     //}
 //}

 //void printPattern11(int n){
     //int x = 1;
     //for(int i = 1; i <= n; i++){
         //for(int j = 1; j <= i; j++){
             //cout << x++ << " ";
         //}
         //cout << "\n";
     //}
 //}

 //void printPattern12(int n){
     //char alphabet = 'a';
     //for(int i = 1; i <= n; i++){
         //for(int j = 1; j <= i; j++){
             //cout << alphabet;
         //}
         //alphabet++;
         //cout << "\n";
     //}
 //}

 //void printPattern13(int n){
     //for(int i = 1; i <= n; i++){
     //char alphabet = 'a';
         //for(int j = 1; j <= i; j++){
             //cout << alphabet++;
         //}
         //cout << "\n";
     //}
 //}

 //void printPattern14(int n){
     //char alphabet = 'a';
     //for(int i = 1; i <= n; i++){
         //for(int j = 1; j <= i; j++){
             //cout << alphabet++;
         //}
         //cout << "\n";
     //}
 //}

 //void printPattern15(int n){
     //for(int i = n; i >= 1; i--){
         //for(int k = 1; k <= n-i; k++){
             //cout << " ";
         //}
         //for(int j = 1; j <= i; j++){
             //cout << "*" << " ";
         //}
         //cout << "\n";
     //}
 //}

void printPattern16(int n){
    for(int i = 1; i <= n; i++){
        int coef = 1;
        for(int k = 1; k <= n-i; k++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << coef << " ";
            coef = coef*(i-j)/j;
        }
        cout << "\n";
    }
}

int main(){
    int num;
    cout << "Enter number of levels for the pattern" << "\n";
    cin >> num;
    //printPattern1(num);
    //printPattern2(num);
    //printPattern3(num);
    //printPattern4(num);
    //printPattern5(num);
    //printPattern6(num);
    //printPattern7(num);
    //printPattern8(num);
    //printPattern9(num);
    //printPattern10(num);
    //printPattern11(num);
    //printPattern12(num);
    //printPattern13(num);
    //printPattern14(num);
    //printPattern15(num);
    printPattern16(num);
    return 0;
}

