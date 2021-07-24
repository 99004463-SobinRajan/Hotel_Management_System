#ifndef __HOTEL_MANAGEMENT_H__
#define __HOTEL_MANAGEMENT_H__


#include<iostream>
#include<vector>

/**
 * @brief Vector Customer list will contain list of all the cutomer;
 * 
 */
std::vector<Customer> CutomerLis;

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
    int c_totalBill;
    std::string review;

public:
    
    Customer(std::string c_name, int c_id, long c_phoneNumber, std::string c_idProof, std::string c_idNumber, std::string c_status, std::string c_roomType, int c_roomNumber, int c_totalBill);

    Customer(Customer& ref);

    std::string getName() const;

    long getNumber() const;

    int getId() const;

    std::string getIdProof() const;

    std::string getIdNumber() const;

    std::string getStatus() const;

    std::string getRoomType() const;

    int getRoomNumber() const;

    int getTotalBill() const;

    void setreview(std::string review);
    std::string getReview() const;

};


// Functions declareation for Customer




// Function declaration for management




#endif