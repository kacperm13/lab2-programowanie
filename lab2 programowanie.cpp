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

#include <iostream>
using namespace std;
int main() {
    for (int i = 100; i >= 0; i--) {
        cout << i;
}

}