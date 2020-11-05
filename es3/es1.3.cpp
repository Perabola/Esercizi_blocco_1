#include <iostream>
using namespace std;
long num; 
int lol;
int esp10=1;
int top;
bool ris;
bool PALI5(long);
int ultima(long);
int cifra(long,int);
bool PALI(long);

int main (){

    cout<<"Digitare il numero di cui si vuole verificare la Palindromia\n";
    cin>>num;
    cout<<"Questo numero ha "<<ultima(num)<<" cifre\n";
    if(ultima(num)==5)
        if(PALI5(num)==true) cout<<"Questo numero e' Palindromo\n";
        else cout<<"Questo numero non e' Palindromo\n";

    else if(PALI(num)==true) cout<<"Questo numero e' Palindromo\n";
         
         else cout<<"Questo numero non e' palindromo\n";
    

    return 0;
}

bool PALI5(long x){           //Verifica palindromia di un numero a 5 cifre;

    if(cifra(x,1)==cifra(x,5) && cifra(x,2)==cifra(x,4)) ris=true;
    else ris=false;

    return ris;
    
}

bool PALI(long x){            //verifica palindromia di un qualsiasi numero int;
    int i=ultima(x);
    int f=1;
    while(i>=ultima(x)/2){
        if(cifra(x,i)==cifra(x,f)) ris=true;
        else{
            ris=false;
            i=1-ultima(x)/2;
        } 
        --i;
        ++f;
    }
    return ris;
}

int cifra(long a,int b) {     // identificatore di una determinata cifra;

    int esp1=1;                  
    for(int i=1; i<=b; ++i){
        esp1*=10;
    }   
    int resto;
    resto=a%=esp1;           
    int c=b-1,esp2=1;            
    for(int g=1; g<=c; ++g) {
        esp2*=10;
    }
    lol=resto/esp2;
    return lol;
}

int ultima(long x){           // Restituisce il numero di cifre del numero;
    for(int i=1; x!=0; ++i){
        x/=10;
        top=i;
    }
    return top;
}
