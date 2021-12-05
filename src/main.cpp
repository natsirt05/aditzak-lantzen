#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<string> nor;
    vector<string> aditz_posibleak;
    cout << "Zenbat aldiz errepikatu nahi dozu ariketa" << "\n";
    cin >> n;
    aditz_posibleak = {"ni", "hura", "gu", "zu", "zuek", "haiek"}; 
    nor = {"naiz", "da", "gara", "zara", "zarete", "dira"};
    int random;
    string erantzuna;
    for (int i = 0; i < n; i++) {
    random = rand() % 6;
    cout << "Zein da hurrengo aditza? " << aditz_posibleak[random] << "\n"; 
    cin >> erantzuna;
    if (erantzuna == nor[random]) {
        cout << "Oso ongi, segi horrela" << "\n";
    } else {
        cout << "Oso txarto, ikasi dezazu" << "\n";
    }
    }    
}