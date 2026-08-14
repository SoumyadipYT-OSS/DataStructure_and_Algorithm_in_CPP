#ifndef CART_HPP
#define CART_HPP

#include <cstdint>
#include <string>

class Cart {
    std::string m_bucketId;
    uint32_t    m_listId;
    std::string m_customerName;

public:
    // Constructors
    Cart() = default;
    Cart(std::string bucketId, uint32_t listId, std::string customerName);
    

    // Getters
    const std::string& getBucketId() const;
    uint32_t getListId() const;
    const std::string& getCustomerName() const;

    // Setters
    void setBucketId(std::string bucketId);
    void setListId(uint32_t listId);
    void setCustomerName(std::string customerName);

    // Utility
    void printDetails() const;
};

#endif