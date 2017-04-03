#pragma once

typedef int rozmiarCiagu;
typedef float* ciag;
typedef void (*operacja)(const ciag, const rozmiarCiagu);


ciag InicjalizujCiagGeometryczny (const rozmiarCiagu size,const float ilr);
void UsunCiagi();
void Wypisz(const ciag tab,const rozmiarCiagu size);
void Suma(const ciag geom,const rozmiarCiagu rozmiar);
void Iloczyn(const ciag geom, const rozmiarCiagu rozmiar);
void Max(const ciag geom,const rozmiarCiagu rozmiar);
void Min(const ciag geom,const rozmiarCiagu rozmiar);

void WykonajIWypisz ( operacja fun,const ciag geometryczny1,const rozmiarCiagu rozmiar);


