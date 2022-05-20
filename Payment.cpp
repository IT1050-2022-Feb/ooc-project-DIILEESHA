#include <iostream>

int main() {
  class Payment{
	private:
		int payment_id;
		std ::string payment_type;
		std ::string payment_time;
		std ::string payment_date;
		std ::string payment_member_id;
		std ::string payment_description;
	public:
		void addPayment();
		void editPayment();
		void deletePayment();
		void searchPayment();
};

Payment::Payment(int pID,std ::string ptype,std ::string ptime,std ::string pdate,std ::string pcuid,std ::string pdes )
{
	payment_id = pID;
    payment_type=  ptype;
	payment_date = ptime;
	payment_date = pdate;
    payment_customer_id =  pcuid;
	payment_description = pdes;
}

void Payment::addPayment(){
	
}

void Payment::editPayment(){
	
}
void Payment::deletePayment(){
	
}
void Payment::searchPayment(){
	
}

	}