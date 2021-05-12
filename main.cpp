#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d, media, e, media_final;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    media = ((a * 2) + (b * 3) + (c * 4) + d) / 10;
    cout.precision(1);
    cout << fixed << "Media: " << media <<endl;
    if (media >= 7){
        cout << "Aluno aprovado." <<endl;
    }else{
    if (media < 5){
        cout << "Aluno reprovado." <<endl;
    }else{
    cout << "Aluno em exame." <<endl;
    cin >> e;
    cout << fixed << "Nota do exame: " << e <<endl;
    media_final = (media + e) / 2;
    if (media_final >= 5){
        cout << "Aluno aprovado." <<endl;
    }else{
    cout << "Aluno reprovado." <<endl;
    }
    cout << fixed << "Media final: " << media_final <<endl;
    }
    }
    return 0;
}
