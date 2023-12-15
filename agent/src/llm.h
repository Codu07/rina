/***************************************************************************
 * 
 * Copyright (c) 2023 Wang Tao. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file llm.h
 * @author wangtao(wtzhuque@163.com)
 * @date 2023/11/20 19:24:52
 * @version $Revision$ 
 * @brief 
 *  
 **/
#ifndef RINA_LLM_H
#define RINA_LLM_H

#include <string>

namespace rina {

class LLM {
public:
  LLM(const std::string& name) {}

  virtual ~LLM() {}

  virtual const std::string& name() const {
    return _name;
  }

  virtual int predict();

private:
  std::string _name;
}; // class LLM

} // namespace rina

#endif  //RINA_LLM_H

/* vim: set ts=4 sw=4 sts=4 tw=100 */
