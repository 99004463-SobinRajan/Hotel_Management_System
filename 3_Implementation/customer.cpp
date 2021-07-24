#include "main.h"

/**
 * @brief Construct a new Customer:: Customer object
 * 
 * @param name name of customer
 * @param id id of customer
 * @param phoneNumber Phone number of customer
 * @param idProof id Proof of customer
 * @param idNumber id Number
 * @param status Status of customer
 * @param roomType type of room 
 * @param roomNumber room number of customer
 * @param roomCharges room charges
 * @param foodCharges Food charges
 * @param laundryCharges laundry charges
 * @param banquetHallCharges banquet hall charges
 * @param banquetHallNumber 
 */
Customer::Customer(std::string name, int id, long phoneNumber, std::string idProof, std::string idNumber,
 std::string status, std::string roomType, int roomNumber,int roomCharges, int foodCharges, int laundryCharges, 
 int banquetHallCharges): c_name(name), c_id(id), c_phoneNumber(phoneNumber),
  c_idProof(idProof), c_idNumber(idNumber), c_status(status), c_roomType(roomType), c_roomNumber(roomNumber), 
  c_roomCharges(roomCharges), c_foodCharges(foodCharges), c_laundryCharges(laundryCharges),
   c_banquetHallCharges(banquetHallCharges) { }

/**
 * @brief Copy constructor
 * 
 * @param ref refernce to customer object
 */
Customer::Customer(const Customer& ref): c_name(ref.c_name), c_id(ref.c_id), c_phoneNumber(ref.c_phoneNumber),
 c_idProof(ref.c_idProof), c_idNumber(ref.c_idNumber), c_status(ref.c_status), c_roomType(ref.c_roomType),
  c_roomNumber(ref.c_roomNumber), c_roomCharges(c_roomCharges), c_foodCharges(ref.c_foodCharges), c_laundryCharges(ref.c_laundryCharges),
   c_banquetHallCharges(ref.c_banquetHallCharges) { }

/**
 * @brief Get the Name of customer
 * 
 * @return std::string
 */
std::string Customer:: getName() const{
    return c_name;
}
 /**
  * @brief get the number of customer
  * 
  * @return long 
  */
long Customer::getNumber() const{
    return c_phoneNumber;
}

/**
 * @brief get the ID of customer
 * 
 * @return int 
 */
int Customer::getId() const{
    return c_id;
}

/**
 * @brief get the id Proof of customer
 * 
 * @return std::string 
 */
std::string Customer::getIdProof() const{
    return c_idProof;
}

/**
 * @brief 
 * 
 * @return std::string 
 */
std::string Customer::getIdNumber() const{
    return c_idNumber;
}

/**
 * @brief get the status of customer
 * 
 * @return std::string 
 */
std::string Customer::getStatus() const{
    return c_status;
}

/**
 * @brief get the room type of customer
 * 
 * @return std::string 
 */
std::string Customer::getRoomType() const{
    return c_roomType;
}

/**
 * @brief get the room number of customer
 * 
 * @return int 
 */
int Customer::getRoomNumber() const{
    return c_roomNumber;
}

/**
 * @brief get the totl Bill of customer
 * 
 * @return int 
 */
int Customer::getTotalBill() const{
    return c_roomCharges + c_foodCharges + c_laundryCharges + c_banquetHallCharges;
}

/**
 * @brief set the review of customer
 * 
 * @param str 
 */
void Customer::setReview(std::string str){
    review = str;
}

/**
 * @brief to give review
 * 
 * @return std::string 
 */
std::string Customer::getReview() const{
    return review;
}

/**
 * @brief to set the laundry charges
 * 
 * @param clothes 
 */
void Customer::setLaundryCharges(int clothes){
    c_laundryCharges = clothes * 10;
}

/**
 * @brief to set the banquest hall charges
 * 
 * @param charges 
 */
void Customer::setBanquetHallCharges(int charges){
    c_banquetHallCharges = charges;
}

/**
 * @brief to get the room charges
 * 
 * @return int 
 */
int Customer::getRoomCharges(){
    return c_roomCharges;
}

/**
 * @brief to get the food charges
 * 
 * @return int 
 */
int Customer::getFoodCharges(){
    return c_foodCharges;
}

/**
 * @brief to get the laundry charges 
 * 
 * @return int 
 */
int Customer::getLaundryCharges(){
    return c_laundryCharges;
}

/**
 * @brief to display the customer information
 * 
 */
void Customer::display(){
    std::cout<<"Id of customer is: "<<getId()<<std::endl;
    std::cout<<"Name of customer is: "<<getName()<<std::endl;
    std::cout<<"Phone Number of customer is: "<<getNumber()<<std::endl;
    std::cout<<"idProof of customer is: "<<getIdNumber()<<std::endl;
    std::cout<<"Id Number of customer is: "<<getIdNumber()<<std::endl;
    std::cout<<"Status of customer is: "<<getStatus()<<std::endl;
    std::cout<<"Type of Room: "<<getRoomType()<<std::endl;
    std::cout<<"Room Number of customer is: "<<getRoomNumber()<<std::endl;
    std::cout<<"Room Charge of customer is: "<<getRoomCharges()<<std::endl;
    std::cout<<"Laundry Charge of customer is: "<<getLaundryCharges()<<std::endl;
    std::cout<<"Banquet Hall Charge of customer is: "<<getBanquetHallCharges()<<std::endl;
    std::cout<<"Food Charge of customer is: "<<getFoodCharges()<<std::endl;
    std::cout<<"Total Charges of customer is: "<<getTotalBill()<<std::endl;
}

/**
 * @brief to find the days between the two dates
 * 
 * @param date1 start date
 * @param date2 end date
 * @return int number of days
 */
int daysBetweenDates(std::string date1, std::string date2)
{
    std::stringstream ss(date1 + "-" + date2);
    int year, month, day;
    char hyphen;
  
    ss >> year >> hyphen >> month >> hyphen >> day;
    struct tm starttm = { 0, 0, 0, day, month - 1, year - 1900 };
    time_t start = mktime(&starttm);
  
    ss >> hyphen >> year >> hyphen
        >> month >> hyphen >> day;
    struct tm endtm = { 0, 0, 0, day, month - 1, year - 1900 };
    time_t end = mktime(&endtm);
  
    return abs(end - start) / 86400;
}

int count = 101;

/**
 * @brief Room Accomodation in a hotel
 * 
 * @param name name of customer
 * @param id id of customer
 * @param phoneNumber Phone number of customer
 * @param idProof id proof of customer
 * @param idNumber id number of customer
 * @param roomType room type of customer
 * @param start_date start date
 * @param end_date end date
 */
void Room_Accomodation(std::string name, int id, long phoneNumber, std::string idProof, std::string idNumber,
 int roomType, std::string start_date, std::string end_date){

    int roomNumber = count++;
    int days = daysBetweenDates(start_date, end_date);
    int roomCharges = 0;
    std::string s_room_type = "";
    if(roomType == 1){
        roomCharges = days * 5000;
        s_room_type = "Standard";
    }
    else if (roomType == 2){
        roomCharges  = days * 10000;
        s_room_type = "Deluxe";
    }
    else{
        roomCharges = days * 15000;
        s_room_type = "Ultra Deluxe";
    }
    int foodCharges = 0;
    int laundryCharges = 0;
    int banquetHallCharges = 0;
    int banquetHallNumber = 0;
    std::string status = "check-in";
    CustomerList.emplace_back(Customer(name, id, phoneNumber, idProof, idNumber, status, s_room_type, roomNumber, roomCharges, foodCharges,
     laundryCharges, banquetHallCharges));
}

/**
 * @brief customer to give review
 * 
 * @param name name of customer
 * @param phone phone number of customer
 * @param str 
 */
void GiveReview(std::string name, long phone, std::string str){
    std::vector<Customer> ::iterator iter;
    for( iter = CustomerList.begin() ; iter != CustomerList.end() ; iter ++ ){
        if(iter->getName() == name && iter->getNumber() == phone){
            iter->setReview(str);
        }
    }
}

/**
 * @brief to book to laundry services and it charges
 * 
 * @param name name of the customer
 * @param phone phone number of the customer
 * @param clothes number of clothes
 */
void LaundryBooking(std::string name, long phone, int clothes){
    std::vector<Customer> ::iterator iter;
    for( iter = CustomerList.begin() ; iter != CustomerList.end() ; iter ++ ){
        if(iter->getName() == name && iter->getNumber() == phone){
            iter->setLaundryCharges(clothes);
        }
    }
}

/**
 * @brief to book the banquet hall
 * 
 * @param name name of the customer
 * @param phone phone number of the customer
 * @param start_date start date
 * @param end_date end date
 */
void BanquetHallBooking(std::string name, long phone, std::string start_date, std::string end_date){
    std::vector<Customer> ::iterator iter;
    for( iter = CustomerList.begin() ; iter != CustomerList.end() ; iter ++ ){
        if(iter->getName() == name && iter->getNumber() == phone){
            int days = daysBetweenDates(start_date, end_date);
            iter->setBanquetHallCharges(days * 10000);
        }
    }
}

/**
 * @brief to view the profile of customer
 * 
 * @param name name of the customer
 * @param phone phone number of customer
 */
void Profile_viewer(std::string name, long phone){
    std::vector<Customer> ::iterator iter;
    for( iter = CustomerList.begin() ; iter != CustomerList.end() ; iter ++ ){
        if(iter->getName() == name && iter->getNumber() == phone){
            iter->display();
        }
    }
}
