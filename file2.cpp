#include <iostream>
using namespace std;

float Rata_Rata(float a, float b){
    return (a+b/2);
}

string Status_Lulus(float r){
    if (r >= 60)
        return "Lolos";
    else
        return "gagal";
}

string Status_Lulus2(float r){
    if (r >= 60)
        return "Lolos";
    else
        return "gagal";
}

int main(){
    float nilBI,nilMT,rerata;
    string status;

    cout <<"Masukkan nilai bahasa Inggris = ";
    cin >> nilBI;
    cout <<"Masukkan nilai Matematika = ";
    cin >> nilMT
}