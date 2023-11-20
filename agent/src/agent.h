/***************************************************************************
 * 
 * Copyright (c) 2023 Wang Tao. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file agent.h
 * @author wangtao(wtzhuque@163.com)
 * @date 2023/11/13 14:55:39
 * @version $Revision$ 
 * @brief 
 *  
 **/
#ifndef RINA_AGENT_H
#define RINA_AGENT_H

#include <string>

namespace rina {

class Agent {
public:
  Agent() {}

  virtual ~Agent() {}

  int init();

  int destroy();

  int reload(const std::string& desc);
}; // class Agent

} // namespace rina

#endif  //RINA_AGENT_H

/* vim: set ts=4 sw=4 sts=4 tw=100 */
