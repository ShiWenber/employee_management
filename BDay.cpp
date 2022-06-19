/**
 * @file BDay.cpp
 * @author Shi Wenbo
 * @brief BDay.cpp定义
 * @version 0.1
 * @date 2022-06-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "BDay.h"

/**
 * @brief Construct a new BDay::BDay object
 * 
 * @param year 
 * @param mon 
 * @param day 
 */
BDay::BDay(int year, int mon, int day) {
    this->year = year;
    this->mon = mon;
    this->day = day;
}

/**
 * @brief BDay类的to_string函数
 * 
 * @return std::string 
 */
std::string BDay::to_string() {
    std::string str = std::to_string(year) + "-" + std::to_string(mon) + "-" + std::to_string(day);
    return str;
}