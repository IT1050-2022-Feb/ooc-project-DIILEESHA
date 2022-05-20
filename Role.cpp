#include <iostream>

int main() {

class Role{
	private:
		int role_id;
		std ::string role_title;
		std ::string role_description;
	public:
		void addRole();
		void editRole();
		void deleteRole();
		void searchRole();
		void assignRlole();
}

Role::Role(){
	
}
Role::Role(int rID,std ::string rTit,std ::string rDes )
{
	role_id = rID;
	role_title = rTit;
	role_description = rDes;
}
void Role::addRole(){
	
}

void Role::editRole(){
	
}
void Role::deleteRole(){
	
}
void Role::searchRole(){
	
}
void Role::assignRlole() {
	
}
Role::~Role(){}
	
}
