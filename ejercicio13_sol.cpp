Ejercicio N°13
using namespace std;
int main() {
int n;
cin >> n;
string x = "Documentos encontrados";
string y = "Documentos encontrado";
string z = "No se encontraron documentos";
if (n > 1) {
    cout << x;
}
if (n == 1) {
    cout << y;
}
if (n == 0) {
    cout << z;
}
    return 0;
}
