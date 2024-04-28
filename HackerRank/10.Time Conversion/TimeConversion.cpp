#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int horas = std::stoi(s.substr(0, 2));
    std::string minutosSegundos = s.substr(2, 6);
    std::string meridiano = s.substr(8);
    if(meridiano == "PM" && horas != 12) {
        horas += 12;
    } else if(meridiano == "AM" && horas == 12) {
        horas = 0;
    }
    std::stringstream ss;
    ss << std::setw(2) << std::setfill('0') << horas << minutosSegundos;
    return ss.str();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
