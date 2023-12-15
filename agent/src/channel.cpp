/***************************************************************************
 * 
 * Copyright (c) 2023 Wang Tao. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file channel.cpp
 * @author wangtao(wtzhuque@163.com)
 * @date 2023/11/21 14:37:35
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include "channel.h"

namespace rina {
  
int Channel::pub(Message* msg) {
  return 0;
}

int Channel::sub(std::function<int(const Message&)> callback) {
  return 0;
}

} // namespace rina

/* vim: set ts=4 sw=4 sts=4 tw=100 */
