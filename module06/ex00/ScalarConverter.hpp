/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 09:13:31 by tjo               #+#    #+#             */
/*   Updated: 2023/09/19 17:19:32 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<string>

class ScalarConverter
{   
    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &a);
        ScalarConverter& operator=(const ScalarConverter &a);

        static int check_literals(const std::string &target);
        static int check_target(std::string &target);
    public:
        static int convert(std::string target);
};
