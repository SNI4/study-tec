#include <iostream>
#include <string>

using namespace std;

class Ocean
{
private:
    string name;
    float deep;
    float size;

public:
    string NamesOcean[8] = {
        "Тихий",
        "Атлантический",
        "Индийский",
        "Северный Ледовитый",
        "Южный",
        "Антарктический",
        "Ирландский",
        "Сибуянское"
    };
    string NamesSea[8] = {
        "Балтийское",
        "Аравийское",
        "Карибское",
        "Северное",
        "Жёлтое",
        "Филиппинское",
        "Японское",
        "Красное"
    };
    string NamesBay[8] = {
        "Баффинова",
        "Висячего",
        "Новой Земли",
        "Беринга",
        "Гренландии",
        "Охотское",
        "Охотское",
        "Амурского"
    };

    Ocean()
    {
        name = "Неизвестный";
        deep = 1;
        size = 1;
    }
    Ocean(string N, float D, float S)
    {
        name = N;
        deep = D;
        size = S;
    }

    void setName(string N);
    void setDeep(float D);
    void setSize(float S);

    friend ostream& operator<<(ostream& stream, const Ocean obj);
    friend istream& operator>>(istream& stream, Ocean& obj);
};
