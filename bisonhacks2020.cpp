#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Volo{
  
  private:
    struct attorney_Info{//struct for lawyer information
      string name;
      string credentials;
      string legal_service;
      string phone_number;
    }attorney_list[9];


  protected:
  public:
    struct user_Info{//struct for user information
      string username;
      string firstName;
      string lastName;
      string password;
    };vector<user_Info> user_list;//initializes list of users using vector so the list does not have a set number (struct vector so every element has each part of the user_Info struct)

    Volo(){//initializes lists of qualified lawyers for our app (examples of professionals on the backend of our app)
      attorney_list[0] = {"Luz West", "Juris Doctor degree", "Will", "(921) 960-5000"};
      attorney_list[1] = {"Harry Oliver", "Juris Doctor degree", "Will", "(683) 701-9327" };
      attorney_list[2] = {"Julia Osborne", "Master of Laws degree", "Employment", "(886) 411-7142"};
      attorney_list[3] = {"Frederick Gross", "Doctor of Judicial Science degree", "Child Custody", "(801) 269-7521"};
      attorney_list[4] = {"Rodolfo Payne", "Master of Legal Studies degree", "Criminal", "(635) 726-0394"};
      attorney_list[5] = {"Terrence Moore", "Master of Dispute Resolution degree", "Estate", "(220) 963-0202"};
      attorney_list[6] = {"Pete	Morris", "Master of Laws degree", "Land lord/Tenant", "(429) 208-2268"};
      attorney_list[7] = {"Jeffrey Rios", "Doctor of Judicial Science degree", "Intellectual Property", "(214) 718-0226"};
      attorney_list[8] = {"Eric Schneider", "Master of Dispute Resolution degree", "Legal Terms", "(944) 800-2062"};
    }

    void register_Screen(){//prompts user for information to set up account
      cout << endl;
      string fname_input, lname_input, username_input, password_input;
      cout << "Please enter your first name: " << endl;
      cin >> fname_input;
      cout << "Please enter your last name: " << endl;
      cin >> lname_input;
      cout << "Please enter your new username: " << endl;
      cin >> username_input;
      cout << "Please enter your new password: " << endl;
      cin >> password_input;
      user_Info a;
      a.username = username_input;
      a.firstName = fname_input;
      a.lastName = lname_input;
      a.password = password_input;
      user_list.push_back(a);
      //pushes new account information into back of struct vector
    }

    int log_In(){//prompts user for username to search for any matching in data base (struct array)
      string username_input, password_input, reg_input;
      cout << "Please enter your username: " << endl;
      cin >> username_input;
      for (int x = 0; x < user_list.size(); x++){
        if (username_input == user_list[x].username){
          cout << "Please enter your password: " << endl;
          cin >> password_input;
          return 0;//if username (account) already exists move on to menu
        }
      }
      cout << "To register for Volo today, enter: 'R' " << endl;
      cin >> reg_input;
      if (reg_input == "R" or reg_input == "r"){
        Volo::register_Screen();//goes to register function if username does not exist in data base
      }
      return 0;
    }

    void drop_Down(){//drop down menu of legal service options
      cout << endl;
      cout << "These are the legal services Volo can help you with! " << endl;
      cout << "Will\nDivorce\nEmployment\nChild Custody\nCriminal\nEstate/Trust\nLand lord/Tenant\nIntellectual Property\nLegal Terms of Service" << endl << endl;
      cout << "Please enter the legal service you are interested in or enter 'done' to exit. " << endl << endl;
    }

//functions below all work by looking for the lawyers with matching legal services in the data base,

    void will_Help(){
      cout << endl;
      cout << "For help with your Will, please reach out to ";
      for (int x = 0; x < user_list.size(); x++){
        if (attorney_list[x].legal_service == "Will"){
          cout << attorney_list[x].name << " at " << attorney_list[x].phone_number << ". " << attorney_list[x].name << " has a " << attorney_list[x].credentials << endl << endl;
        }
      }
    }

    void divorce_Help(){
      cout << endl;
      cout << "For help related to Divorces, please reach out to ";
      for (int x = 0; x < user_list.size(); x++){
        if (attorney_list[x].legal_service == "Divorce"){
          cout << attorney_list[x].name << " at " << attorney_list[x].phone_number << ". " << attorney_list[x].name << " has a " << attorney_list[x].credentials << endl << endl;
        }
      }
    }

    void employment_Help(){
      cout << endl;
      cout << "For help regarding Employment, please reach out to ";
      for (int x = 0; x < user_list.size(); x++){
        if (attorney_list[x].legal_service == "Employment"){
          cout << attorney_list[x].name << " at " << attorney_list[x].phone_number << ". " << attorney_list[x].name << " has a " << attorney_list[x].credentials << endl << endl;
        }
      }  
    }

    void child_Custody_Help(){
      cout << endl;
      cout << "For help getting Child Custody, please reach out to ";
      for (int x = 0; x < user_list.size(); x++){
        if (attorney_list[x].legal_service == "Child Custody"){
          cout << attorney_list[x].name << " at " << attorney_list[x].phone_number << ". " << attorney_list[x].name << " has a " << attorney_list[x].credentials << endl << endl;
        }
      } 
    }

    void criminal_Help(){
      cout << endl;
      cout << "For help with questions on Crime or Criminals, please reach out to ";
      for (int x = 0; x < user_list.size(); x++){
        if (attorney_list[x].legal_service == "Criminal"){
          cout << attorney_list[x].name << " at " << attorney_list[x].phone_number << ". " << attorney_list[x].name << " has a " << attorney_list[x].credentials << endl << endl;
        }
      } 
    }

    void estate_Trust_Help(){
      cout << endl;
      cout << "For help with Estates or Trusts, please reach out to ";
      for (int x = 0; x < user_list.size(); x++){
        if (attorney_list[x].legal_service == "Estate"){
          cout << attorney_list[x].name << " at " << attorney_list[x].phone_number << ". " << attorney_list[x].name << " has a " << attorney_list[x].credentials << endl << endl;
        }
      } 
    }

    void land_Lord_Help(){
      cout << endl;
      cout << "For help with Land lords or Tenants, please reach out to ";
      for (int x = 0; x < user_list.size(); x++){
        if (attorney_list[x].legal_service == "Land lord/Tenant"){
          cout << attorney_list[x].name << " at " << attorney_list[x].phone_number << ". " << attorney_list[x].name << " has a " << attorney_list[x].credentials << endl << endl;
        }
      } 
    }

    void int_Property_Help(){
      cout << endl;
      cout << "For help with Intellectual Properties, please reach out to ";
      for (int x = 0; x < user_list.size(); x++){
        if (attorney_list[x].legal_service == "Intellectual Property"){
          cout << attorney_list[x].name << " at " << attorney_list[x].phone_number << ". " << attorney_list[x].name << " has a " << attorney_list[x].credentials << endl << endl;
        }
      } 
    }

    void legal_Terms_Help(){
      cout << endl;
      cout << "For help with legal terms of service, please reach out to ";
      for (int x = 0; x < user_list.size(); x++){
        if (attorney_list[x].legal_service == "Legal Terms"){
          cout << attorney_list[x].name << " at " << attorney_list[x].phone_number << ". " << attorney_list[x].name << " has a " << attorney_list[x].credentials << endl << endl;
        }
      } 
    }

};

int main() {
  cout << "Welcome to Volo!" << endl << endl;
  string choice;
  Volo app;

  bool volo_Open = true;//keeps app open until user is ready to close the session

  while (volo_Open == true){
    app.log_In();//program will make you register first time through because there are no users in the system
    app.drop_Down();
    cin >> choice;
    if (choice == "Will" or choice == "will"){
      app.will_Help();
    }
    if (choice == "Divorce" or choice == "divorce"){
      app.divorce_Help();
    }
    if (choice == "Employment" or choice == "employment"){
      app.employment_Help();
    }
    if (choice == "Child Custody" or choice == "child custody"){
      app.child_Custody_Help();
    }
    if (choice == "Criminal" or choice == "criminal"){
      app.criminal_Help();
    }
    if (choice == "Estate/Trust" or choice == "estate/trust"){
      app.estate_Trust_Help();
    }
    if (choice == "Land lord/Tenant" or choice == "land lord/tenant"){
      app.land_Lord_Help();
    }
    if (choice == "Intellectual Property" or choice == "intellectual property"){
      app.int_Property_Help();
    }
    if (choice == "Legal Terms of Service" or choice == "legal terms of service"){
      app.legal_Terms_Help();
    }
    if (choice == "done" or choice == "Done"){
      volo_Open = false;
    }

  }

}