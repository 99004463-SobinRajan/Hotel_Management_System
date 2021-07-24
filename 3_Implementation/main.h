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
    Customer(/* args */);

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

    void setTotalBill();
    int getTotalBill() const;

    void setReview();
    std::string getReview() const;

    ~Customer();
};


// Functions declareation for Customer




// Function declaration for management




#endif