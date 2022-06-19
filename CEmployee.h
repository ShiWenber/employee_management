/**
 * @file CEmployee.h
 * @author Zhou Menyanshu, Shi Wenbo
 * @brief CEmployee类, BDay的声明
 * @version 0.1
 * @date 2022-06-19
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <string>

/**
 * @brief BDay类
 * 将year, mon, day 转化为year-mon-day的格式
 * 
 */
class BDay
{
private:
    int year;
    int mon;
    int day;
public:
    BDay(int year, int mon, int day);
    std::string to_string();
};


/**
 * @brief CEmployee类
 * 
 */
class CEmployee
{
private:
    char _name[30];
    char _sex[2];   ///< 男或女
    BDay _birthday; ///< 显示格式：1990-1-1，请自己设计并实现类BDay.
public:
    CEmployee(const char *nm, const char *sex, const BDay &bd); ///< 构造函数
    std::string EmployeeName();                                      ///< 返回雇员名字
    float computePay() { return 0; };                           ///< 计算雇员薪水
};

/**
 * @brief CSales类
 * 继承CWage类
 *  
 */
class CSales : public CWage
{
private:
    float _comm; ///< 每件提成
    float _sale; ///< 销售数量
public:
    CSales();           ///< 初始化其父类的所有属性值，并初始化_comm, _sale为0.0，0.0
    void setCommission; ///< 修改对象的提成
    void setSales;      ///< 修改对象的销售数量
    float computePay(); ///< 计算薪水,CSales薪水 =  工作时间*时薪 + 每件提成*销售数量
};

/**
 * @brief CWage类
 * 继承CEmployee类
 * 
 */
class CWage : public CEmployee
{
private:
    float _wage;  ///< 时薪
    float _hours; ///< 小时
public:
    CWage();                  ///< 自己编写CWage的恰当的构造函数。注意在生成一个CWage对象时构造函数必须初始化该对象的_wage, _hours属性值为0.0，0.0。
    void setWage(float wg);   ///<  修改对象的时薪值
    void setHours(float hrs); ///<  修改对象的工作时间
    float computePay();       ///<  计算薪水,Cwage的薪水 = 工作时间*时薪
};


/**
 * @brief CManager类
 * 继承CEmployee类
 * 
 */
class CManager : public CEmployee
{
private:
    float _salary; ///< 固定月薪
public:
    CManager();                   ///< 初始化父类属性值，并初始化月薪为0.0
    void setSalary(float salary); ///< 修改CManager月薪值
    float computePay(); ///< CManager的薪水 = _salary
};
