#ifndef __HOTEL_MANAGEMENT_H__
#define __HOTEL_MANAGEMENT_H__


#include<iostream>
#include<vector>
#include<string>
#include<sstream>



/**
 * @brief Customer class will have the data related to the perticular customer
 * 
 */

class Customer
{
private:
    std::string c_name;
    int c_id;
    long c_phoneNumber;
    std::string c_idProof;
    std::string c_idNumber;
    std::string c_status;
    std::string c_roomType;
    int c_roomNumber;
    int c_roomCharges, c_foodCharges, c_laundryCharges, c_banquetHallCharges;
    std::string review;

public:
    
    Customer(std::string c_name, int c_id, long c_phoneNumber, std::string c_idProof, std::string c_idNumber,
     std::string c_status, std::string c_roomType, int c_roomNumber, int c_roomCharges, int c_foodCharges,
      int c_laundryCharges, int c_banquetHallCharges);

    Customer(const Customer& ref);

    void setName();
    std::string getName() const;

    void setNumber();
    long getNumber() const;

    void setId();
    int getId() const;

    void setIdProof();
    std::string getIdProof() const;

    void setIdNumber();
    std::string getIdNumber() const;

    void setStatus();
    std::string getStatus() const;

    void setRoomType();
    std::string getRoomType() const;

    void setRoomNumber();
    int getRoomNumber() const;

    int getTotalBill() const;

    void setReview(std::string str);
    std::string getReview() const;

    int getRoomCharges();

    int getFoodCharges();

    void setLaundryCharges(int charges);
    int getLaundryCharges();

    void setBanquetHallCharges(int charges);
    int getBanquetHallCharges();

    void display();

};


/**
 * @brief Vector Customer list will contain list of all the cutomer;
 * 
 */
std::vector<Customer> CustomerList;


// Functions declareation for Customer

/**
 * @brief to find the days between the two dates
 * 
 * @param date1 start date
 * @param date2 end date
 * @return int number of days
 */
int daysBetweenDates(std::string date1, std::string date2);

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
 int roomType, std::string start_date, std::string end_date);

/**
 * @brief customer to give review
 * 
 * @param name name of customer
 * @param phone phone number of customer
 * @param str 
 */
void GiveReview(std::string name, long phone, std::string str);

/**
 * @brief to book to laundry services and it charges
 * 
 * @param name name of the customer
 * @param phone phone number of the customer
 * @param clothes number of clothes
 */
void LaundryBooking(std::string name, long phone, int clothes);

/**
 * @brief to book the banquet hall
 * 
 * @param name name of the customer
 * @param phone phone number of the customer
 * @param start_date start date
 * @param end_date end date
 */
void BanquetHallBooking(std::string name, long phone, std::string start_date, std::string end_date);

/**
 * @brief to view the profile of customer
 * 
 * @param name name of the customer
 * @param phone phone number of customer
 */
void Profile_viewer(std::string name, long phone);



// Function declaration for management




#endif