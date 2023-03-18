Ejercicio N°12
using namespace std;
int main() {
int N; 
int A;
int B;
int X;
int Y;
cin >> N >> A >> B >> X >> Y;
if (N >= A) {
    cout << N * X/100;
}
if (N >= B) {
    cout << N * Y/100 << endl;
}
if (N <= A, B) {
    cout << "N no es mayor a ninguno";
}
    return 0;
}

