#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    time_t agora = time(0);
    tm *data = localtime(&agora);

    int seedDoDia = (data->tm_year * 10000) + (data->tm_mon * 100) + data->tm_mday;
    srand(seedDoDia);

    int numeroDoDia = rand() % 100 + 1;

    cout << "Data de hoje: " << data->tm_mday << "/" << (data->tm_mon + 1) << "/" << (data->tm_year + 1900) << std::endl;
    cout << "Numero do dia: " << numeroDoDia << std::endl;

    return 0;
}
