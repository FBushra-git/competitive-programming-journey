#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main(){
   int N1, N2, N3, N4, score;
   cin >> N1>> N2>> N3>> N4;
   cin >> score;
   
   int weights[] = {2,3,4,1};

   int average;
   
   if(average >= 7){
    cout << "Aluno aprovado."<< endl;
   }
   else if(average <5.0){
    cout << "Aluno reprovado.";
   }
   else if(average>=5.0 && average<= 6.9 ){
    cout << "Aluno em exame." << endl;
   }




    
    return 0;
}
