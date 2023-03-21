/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:50:17 by tjo               #+#    #+#             */
/*   Updated: 2023/03/21 16:28:48 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<sstream>
#include<map>
#include"BitcoinExchange.hpp"

int main(int ac, char** av)
{    
    // argument check
    if(ac != 2)
    {
        std::cerr << av[0] << " " << "[filename].txt\n";
        return 0;
    }
    std::string f_name(av[1]);
    if(f_name.substr(f_name.size()-4) != ".txt")
    {
        std::cerr << av[0] << " " << "[filename].txt\n";
        return 0;
    }

    // reading argument file
    std::ifstream argfile;
    argfile.open(f_name.c_str(), std::ios::in);
    if(!argfile.is_open())
    {
        std::cerr << "Error: could not open file. (" << f_name << ")\n";
        return 1;
    }

    // reading data.csv
    std::ifstream data;
    data.open("data.csv", std::ios::in);
    if(!data.is_open())
    {
        std::cerr << "Error: could not open file. (data.csv)\n";
        return 1;
    }

    std::map<int, int> day_per_month;
    const int thirty_one[]={1, 3, 5, 7, 8, 10, 12};
    const int thirty[]={4, 6, 9, 11};
    for(size_t i=0; i<sizeof(thirty_one)/sizeof(int); i++)
        day_per_month[thirty_one[i]]=31;
    for(size_t i=0; i<sizeof(thirty)/sizeof(int); i++)
        day_per_month[thirty[i]]=31;
    day_per_month[2]=28; // i hate leap year

    // preprocessing the data
    std::map<int, double> price_on_day;
    price_on_day[0]=0; // lower_bound
    
    std::string data_line;
    std::getline(data, data_line);
    if(data_line != "date,exchange_rate")
    {
        std::cerr << "Error: wrong file format. (data.csv)\n";
        return 1;
    }
    
    while(std::getline(data, data_line))
    {
        std::stringstream ss(data_line);
        
        std::string date_string, price_string;
        std::getline(ss, date_string, ',');
        std::getline(ss, price_string);

        if(check_date(date_string, day_per_month) or check_value(price_string, 1))
            return 1;
        
        int date_int=10000000-(parse_year(date_string)*500+parse_month(date_string)*40+parse_day(date_string));
        price_on_day[date_int]=std::atof(price_string.c_str());
    }

    // processing the argument file
    std::string tmp;
    std::getline(argfile, tmp);
    if(tmp != "date | value")
    {
        std::cerr << "Error: wrong file format. (" << f_name << ")\n";
        return 1;
    }

    while(std::getline(argfile, tmp))
    {
        size_t token_pos=tmp.find(" | ");
        
        if(token_pos == std::string::npos)
        {
            std::cerr << "Error: cannot find the token. => " << tmp << "\n";
            continue;
        }

        if(token_pos+3 == tmp.size())
        {
            std::cerr << "Error: this value is missing. => " << tmp << "\n";
            continue;
        }

        std::string date_string=tmp.substr(0, 10), price_string=tmp.substr(13);
        if(check_date(date_string, day_per_month)) continue;
        if(check_value(price_string)) continue;
        
        double value=std::atof(price_string.c_str());
        // for debug
        int date_int=10000000-(parse_year(date_string)*500+parse_month(date_string)*40+parse_day(date_string));
        std::cout << date_string << " => " << price_string << " = " << price_on_day.lower_bound(date_int)->second*value << '\n';
    }
}