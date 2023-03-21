/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:51:32 by tjo               #+#    #+#             */
/*   Updated: 2023/03/21 16:12:20 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

int parse_year(const std::string& date)
{
    return std::atoi(date.substr(0).c_str());
}

int parse_month(const std::string& date)
{
    return std::atoi(date.substr(5).c_str());
}

int parse_day(const std::string& date)
{
    return std::atoi(date.substr(8).c_str());
}

int check_date(const std::string& date, const std::map<int,int>& day_per_month)
{
    // check whether token is '-'
    if(date[4] != '-' or date[7] != '-')
    {
        std::cerr << "Error: wrond date format. => " << date << "\n";
        return 1;
    }
    
    // check whether each char is int
    for(size_t i=0; i<date.size(); i++)
        if(i != 4 and i != 7 and !std::isdigit(date[i]))
        {
            std::cerr << "Error: wrong date format. => " << date << "\n";
            return 1;
        }
    
    // check whether date is vaild
    int flag=0;
    int month=std::atoi(date.substr(5, 2).c_str()), day=std::atoi(date.substr(8, 2).c_str());
    if(day_per_month.find(month) == day_per_month.end()) flag++;
    if(!flag and (day_per_month.at(month) < day or !day)) flag++;
    
    return flag;
}

int check_value(const std::string& value, int is_data)
{    
    if(value.size() == 0)
    {
        std::cerr << "Error: not a number\n";
        return 1; 
    }
    
    int dot_flag=0;
    for(size_t i=0; i<value.size(); i++)
    {
        if(!i and value[i]=='-')
        {
            std::cerr << "Error: not a positive number.\n";
            return 1;
        }
        if((dot_flag and value[i]=='.') or (!std::isdigit(value[i]) and value[i]!='.'))
        {
            std::cerr << "Error: not a number\n";
            return 1; 
        }
        if(value[i]=='.') dot_flag=1;
    }
    
    double converted_value=std::atof(value.c_str());
    if(!is_data and converted_value > 1000)
    {
        std::cerr << "Error: too large a number.\n";
        return 1;
    }
    return 0;
}
