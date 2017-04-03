#ifndef PREZENT_H_INCLUDED
#define PREZENT_H_INCLUDED
class Worek;

class Prezent{
    friend class Worek;
private:
    float cena;
    Prezent * poprzedni;
    static Prezent * tmp_ostatni;
public:
    Prezent(){}
    Prezent(float);
    Prezent(const Prezent & obj);
    ~Prezent();
    void Wypisz();
    void NapiszIleJestPrezentow();

    Prezent& operator=(Prezent & obj);

};


#endif // PREZENT_H_INCLUDED
