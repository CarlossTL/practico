Ejercicio N°9
using namespace std;
int main() {
int n, n1;
cin >> n >> n1;
int num_cifras = 1;
int answer = n + n1;
if (answer >= 10) {
    answer == answer/10;
    num_cifras ++;
}
cout << num_cifras;
    return 0;
}



