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

#include "message.h"
#include "llm.h"

namespace rina {

class Agent {
public:
  Agent() {}

  virtual ~Agent() {}

  virtual int init() = 0;

  virtual int destroy() = 0;

  virtual int reload(const std::string& desc);

  virtual int chat(Message* msg);

protected:
  LLM* llm() {
    return _llm;
  }

private:
  LLM* _llm {nullptr};
}; // class Agent

} // namespace rina

#endif  //RINA_AGENT_H

/* vim: set ts=4 sw=4 sts=4 tw=100 */
