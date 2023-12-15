/***************************************************************************
 * 
 * Copyright (c) 2023 Wang Tao. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file channel.h
 * @author wangtao(wtzhuque@163.com)
 * @date 2023/11/21 14:37:30
 * @version $Revision$ 
 * @brief 
 *  
 **/

#ifndef RINA_CHANNEL_H
#define RINA_CHANNEL_H

#include <vector>
#include <functional>

#include "agent.h"
#include "message.h"

namespace rina {

class Channel {
public:
  Channel(const std::string& name)
    : _chan_name(name) {};

  ~Channel() = default;

  const std::string& name() {
    return _chan_name;
  }

  int pub(Message* msg);

  int sub(std::function<int(const Message&)> callback);

private:
  std::string _chan_name;
}; // class Channel

} // rina

#endif  //RINA_CHANNEL_H

/* vim: set ts=4 sw=4 sts=4 tw=100 */
