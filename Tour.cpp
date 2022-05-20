#include <iostream>

int main() {
  class Tour{
	private:
		int tour_id;
		std ::string tour_type;
		std ::string tour_number;
		std ::string tour_date;
		std ::string tour_amount;
		std ::string tour_description;
		
	public:
		void addtour();
		void edittour();
		void deletetour();
		void searchtour();
}

Tour::Tour(){
	
}
Tour::Tour(int tID,std ::string ttype,std ::string tnum,std ::string tDat,std ::string tAmot,std ::string tDes )
{
	tour_id = tID;
	tour_type=  ttype;
    tour_number = tnum;
    tour_date=tDat;
    tour_amount = tAmot;
	tour_description = tDes;
  
}

void Tour::addtour(){
	
}

void Tour::edittour(){
	
}
void Tour::deletetour(){
	
}
void Tour::searchtour(){
	
}
Tour::~Tour(){}
	
}
