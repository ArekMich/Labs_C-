// tego pliku NIE wolno zmieniac

#pragma once

class Zaglowiec: public virtual Statek {
public:
  Zaglowiec(const float masa);
  void ZagleStaw();
  void ZaglePrecz();
  void WypiszStanZagli () const;
  void WypiszInformacje () const;

protected:
  bool m_zaglePostawione;
};

