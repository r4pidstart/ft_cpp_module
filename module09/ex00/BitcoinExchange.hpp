/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:51:34 by tjo               #+#    #+#             */
/*   Updated: 2023/03/21 16:29:24 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<map>
#include<iostream>
#include<cstdlib>

int parse_year(const std::string& date);
int parse_month(const std::string& date);
int parse_day(const std::string& date);

int check_date(const std::string& date, const std::map<int,int>& day_per_month);
int check_value(const std::string& value, int is_data=0);