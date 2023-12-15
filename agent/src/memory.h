/***************************************************************************
 * 
 * Copyright (c) 2023 Wang Tao. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file memory.h
 * @author wangtao(wtzhuque@163.com)
 * @date 2023/11/20 19:29:55
 * @version $Revision$ 
 * @brief 
 *  
 **/
#ifndef RINA_MEMORY_H
#define RINA_MEMORY_H

#include <string>

namespace rina {

class Memory {
public:
  Memory() {}

  ~Memory() {}

  int set(const std::string& label, const std::string& fact);
}; // class Memory

} // namespace rina

#endif  //RINA_MEMORY_H

/* vim: set ts=4 sw=4 sts=4 tw=100 */
