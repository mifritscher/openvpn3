//
//  parseutil.hpp
//  OpenVPN
//
//  Copyright (c) 2012 OpenVPN Technologies, Inc. All rights reserved.
//
//  Adapted from code Copyright (c) 2003-2012 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

// Common utility methods for HTTP classes

#ifndef OPENVPN_HTTP_PARSEUTIL_H
#define OPENVPN_HTTP_PARSEUTIL_H

namespace openvpn {
  namespace HTTP {
    namespace Util {

      // Check if a byte is an HTTP character.
      inline bool is_char(int c)
      {
	return c >= 0 && c <= 127;
      }

      // Check if a byte is an HTTP control character.
      inline bool is_ctl(int c)
      {
	return (c >= 0 && c <= 31) || (c == 127);
      }

      // Check if a byte is defined as an HTTP tspecial character.
      inline bool is_tspecial(int c)
      {
	switch (c)
	  {
	  case '(': case ')': case '<': case '>': case '@':
	  case ',': case ';': case ':': case '\\': case '"':
	  case '/': case '[': case ']': case '?': case '=':
	  case '{': case '}': case ' ': case '\t':
	    return true;
	  default:
	    return false;
	  }
      }

      // Check if a byte is a digit.
      inline bool is_digit(int c)
      {
	return c >= '0' && c <= '9';
      }
    }
  }
}

#endif