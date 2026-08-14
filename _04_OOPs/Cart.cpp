#include "Cart.hpp"
#include <iostream>

Cart::Cart(std::string bucketId, uint32_t listId, std::string customerName)
    : m_bucketId(std::move(bucketId))
    , m_listId(listId)
    , m_customerName(std::move(customerName)) {}

const std::string& Cart::getBucketId() const { return m_bucketId; }
uint32_t Cart::getListId() const { return m_listId; }
const std::string& Cart::getCustomerName() const { return m_customerName; }

void Cart::setBucketId(std::string bucketId) { m_bucketId = std::move(bucketId); }
void Cart::setListId(uint32_t listId) { m_listId = listId; }
void Cart::setCustomerName(std::string customerName) { m_customerName = std::move(customerName); }

void Cart::printDetails() const {
    std::cout << "Cart[bucketId=" << m_bucketId
              << ", listId=" << m_listId
              << ", customer=" << m_customerName << "]\n";
}