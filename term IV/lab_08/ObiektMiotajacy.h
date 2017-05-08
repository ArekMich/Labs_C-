#pragma once

class ObiektMiotajacy{
private:

protected:

public:
	void Rzuc(){
		typ2* wyjatek = new typ2();
		wyjatek->wsk_miotacz(this);
		throw wyjatek;
	}	

};