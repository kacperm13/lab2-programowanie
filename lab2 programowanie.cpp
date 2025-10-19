/*#include <iostream>  //zad1
using namespace std;
int main() {
    for (int i = 10; i>=0; i--) {
        cout << i << endl;
    }
    return 0;
}
*/

/*#include <iostream>   //zad2
using namespace std;
int main() {
    int fahr, celsius; //zmienne typu int 
    int start, limit, krok; //zmienne typu int 

    start = 0; //przypisz 0 do start 
    limit = 200; //przypisz 200 do limit 
    krok = 20; //przypisz 20 do krok 

    fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0 
    while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit 
        celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius 
        cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
        fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
    }
}
*/

/*#include <iostream>   //zad3,5
using namespace std;
int main() {
    int fahr, celsius; //zmienne typu int 
    int start, limit, krok; //zmienne typu int 
    start = 0; //przypisz 0 do start 
    limit = 200; //przypisz 200 do limit 
    krok = 20; //przypisz 20 do krok 
    for (fahr = 0; fahr <= limit; fahr = fahr + krok) 
    {
        float celsius = (5.0 / 9.0) * (fahr - 32.0);
        cout << fahr << "\t" << celsius << endl;
    }
}
*/

/*#include <iostream>   //zad6
using namespace std;
int main() {
    int fahr, celsius; //zmienne typu int 
    int start, limit, krok; //zmienne typu int 
    cout << "Podaj limit:";
    cin >> limit;
    cout << "Podaj krok:";
    cin >> krok;

    start = 0; //przypisz 0 do start

    fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0 
    while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit 
        celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius 
        cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
        fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
    }
}
*/

/*#include <iostream>         //zad 7
using namespace std;
int main() {
    float a;
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe rzeczywista:";
        cin >> a;
        if (a > 0) {
            cout << a << "\n";
        }
    }
}
*/

/*#include <iostream>     //zad 8
using namespace std;
int main() {


    for (int i = 1; i <= 100; i++) {
        if (i % 2==0) {
            cout << i<<"\n";
        }

    }

}
*/

/*#include <iostream>     //zad 9
using namespace std;
int main() {
    int n;
    cout << "Podaj n:";
    cin >> n; 

    for (int i = 0; i <= 100; i++) {
        if (i % n == 0) {
            cout << i << "\n";
        }

    }

}
*/

/*#include <iostream>     //zad 10
using namespace std;
int main() {
    int n;
    int a=0; 
    cout << "Podaj n:";
    cin >> n;

    for (int i = 0; i <= 100; i++) {
        if (i % n == 0) {
            a++;
            
        }

    }
    cout << a;
}
*/

/*
#include <iostream>         //zad 11
using namespace std;
int main() {
    int a;
    int b;

    cout << "Podaj a:";
    cin >> a;
    cout << "Podaj b:";
    cin >> b;

    if (a > b) {
        for (int i = b; i < a; i++) {
            if (i % 3 == 0) {
                cout << i <<"\n";
            }
        }

    }
    else {
        for (int i = a; i < b; i++) {
            if (i % 3 == 0) {
                cout << i<<"\n";
            }

        }
    }
}
*/

/*
#include <iostream>     //zad 12
using namespace std;
int main() {
    int n;
    double A;
    double L=0.0;
    double S=0.0;
    

    cout << "Podaj n:";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Podaj " << i << " liczbe:";
        cin >> L;
        S += L;

    }
    A = S / n;
        cout << "Srednia arytemtyczna tych liczby wynosi: " << A;





}
*/
/*
#include <iostream>     //zad13
using namespace std;
int main() {
    for (int i = 100; i >= 0; i--) {
        cout << i <<"\n";
}

}
*/
/*
#include <iostream> //zad 14
using namespace std;
int main() {
    int a=0;
    int b=0;
    int c=0;
    cout << "Podaj 3 liczby";
    cin >> a >> b >> c;
    if (a < b && a < c) {
        cout << "Najmniejsza z tych liczb jest rowna: " << a;
    }
    if (b < a && b < c) {
        cout << "Najmniejsza z tych liczb jest rowna: " << b;
    }
    if (c < a && c < b) {
        cout << "Najmniejsza z tych liczb jest rowna: " << c;
    }
    if(a == b == c) {
        cout << "Liczby sa rowne.";
    }
    
    


}
*/
/*
#include <iostream> 
#include <cstdlib>      //zad 15
using namespace std;
int main() {
    int m;
    int n;
    cin >> m;
    cin >> n;
    for (int i = 0; i < n; i++)
        cout << rand() % m << "\n";



}
*/
/*
#include <iostream> 
#include <cstdlib>      //zad 16
using namespace std;
int main() {
    int lucky;
    int count=0;
    cout << "Podaj szczesliwy numerek od 1 do 10: ";
    cin >> lucky;
    while (lucky > 10) {
        cout << "Niepoprawna wartosc. Podaj numerek jeszcze raz.";
        cin >> lucky;
    }
    for (int i = 0; i < 10; i++) {
        int random;
        random = rand() % 11;
        cout << random << "\n";
            
        if (lucky == random) {
            count++;
            }
    }
    cout << "Szczesliwy numerek wylosowano " << count << " razy.";

}
*/