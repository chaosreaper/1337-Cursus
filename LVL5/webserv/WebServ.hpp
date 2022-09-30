/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WebServ.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:35:58 by hdrabi            #+#    #+#             */
/*   Updated: 2022/09/30 12:13:18 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEBSERV_HPP
#define WEBSERV_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include "Server.hpp"
#include "Socket.hpp"

class WebServ
{
	private:
		std::vector<Server *> _servers;
		std::vector<Socket *> _sockets;
		void init_servers(std::string& str);

	public:
		WebServ(std::string& configFile);
		~WebServ();
		void setup();
		void display() const;
};

#endif