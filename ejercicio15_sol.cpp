Ejercicio N°15
using namespace std;
int main() {
char n;
cin >> n;
if (n >= 'A' && n <= 'Z') {
    cout << " el caracter esta en mayusculas";
}
else if (n >= 'a' && n <= 'z') {
     cout << " el caracter esta en minúsculas";
}
else {
    cout << " No es un caracter";
}
    return 0;
}
