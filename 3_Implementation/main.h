#ifndef __HOTEL_MANAGEMENT_H__
#define __HOTEL_MANAGEMENT_H__


#include<iostream>
#include<vector>


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

    /**
     * @brief 
     * 
     */
    Customer(/* args */);

    /**
     * @brief Construct a new Customer object
     * 
     * @param name 
     * @param id 
     * @param phoneNumber 
     * @param idProof 
     * @param idNumber 
     * @param roomNumber 
     * @param roomtype 
     * @param totalBill 
     * @param review 
     */
    Customer(std::string name, int id, long phoneNumber, std::string idProof,
 std::string idNumber, int roomNumber, std::string roomtype, int totalBill, std::string review);

    /**
     * @brief Set the Name object
     * 
     */
    void setName();
    /**
     * @brief Get the Name object
     * 
     * @return std::string 
     */
    std::string getName() const;

    /**
     * @brief Set the Number object
     * 
     */
    void setNumber();
    /**
     * @brief Get the Number object
     * 
     * @return long 
     */
    long getNumber() const;

    /**
     * @brief Set the Id object
     * 
     */
    void setId();
    /**
     * @brief Get the Id object
     * 
     * @return int 
     */
    int getId() const;

    /**
     * @brief Set the Id Proof object
     * 
     */
    void setIdProof();
    /**
     * @brief Get the Id Proof object
     * 
     * @return std::string 
     */
    std::string getIdProof() const;

    /**
     * @brief Set the Id Number object
     * 
     */
    void setIdNumber();
    /**
     * @brief Get the Id Number object
     * 
     * @return std::string 
     */
    std::string getIdNumber() const;

    /**
     * @brief Set the Status object
     * 
     */
    void setStatus();
    /**
     * @brief Get the Status object
     * 
     * @return std::string 
     */
    std::string getStatus() const;

    /**
     * @brief Set the Room Type object
     * 
     */
    void setRoomType();
    /**
     * @brief Get the Room Type object
     * 
     * @return std::string 
     */
    std::string getRoomType() const;

    /**
     * @brief Set the Room Number object
     * 
     */
    void setRoomNumber();
    /**
     * @brief Get the Room Number object
     * 
     * @return int 
     */
    int getRoomNumber() const;

    /**
     * @brief Set the Total Bill object
     * 
     */
    void setTotalBill();
    /**
     * @brief Get the Total Bill object
     * 
     * @return int 
     */
    int getTotalBill() const;

    /**
     * @brief Set the Review object
     * 
     */
    void setReview();
    /**
     * @brief Get the Review object
     * 
     * @return std::string 
     */
    std::string getReview() const;

    ~Customer();
};

/**
 * @brief Vector Customer list will contain list of all the cutomer;
 * 
 */
std::vector<Customer> CutomerLis;


// Functions declareation for Customer

/**
 * @brief 
 * 
 * @return true 
 * @return false 
 */
bool foodOrder();

// Function declaration for management

/**
 * @brief 
 * 
 */
void addCustomer(std::vector<Customer> *list, std::string name, int id, long phoneNumber, std::string idProof,
 std::string idNumber, int roomNumber, std::string roomtype, int totalBill, std::string review);

/**
 * @brief Create a Bill object
 * 
 * @return int 
 */
int createBill(std::vector<Customer> *list, int id);

/**
 * @brief 
 * 
 */
bool AcceptFoodOrder(std::vector<Customer> *list, int id);

/**
 * @brief 
 * 
 * @return true 
 * @return false 
 */
bool putHousKeepingRequest(std::vector<Customer> *list, int id);



#endif