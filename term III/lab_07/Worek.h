#ifndef WOREK_H_INCLUDED
#define WOREK_H_INCLUDED

class Prezent;

class Worek{
private:
    Prezent * ostatni;
public:
    Worek();
    void Wloz(Prezent & prezent);
    Prezent& Wyciagnij();
};

#endif // WOREK_H_INCLUDED
