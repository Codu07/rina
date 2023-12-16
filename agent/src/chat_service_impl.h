/***************************************************************************
 * 
 * Copyright (c) 2023 Wang Tao. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chat_service_impl.h
 * @author wangtao(wtzhuque@163.com)
 * @date 2023/12/15 15:08:44
 * @version $Revision$ 
 * @brief 
 *  
 **/
#ifndef RINA_CHAT_SERVICE_IMPL_H
#define RINA_CHAT_SERVICE_IMPL_H

#include "idl/rina.pb.h"

namespace rina {

class ChatServiceImpl : public Chat {
public:
  ChatServiceImpl() {}

  virtual ~ChatServiceImpl() {}

  virtual void chat(::google::protobuf::RpcController* controller,
                    const ::rina::ChatRequest* request,
                    ::rina::ChatResponse* response,
                    ::google::protobuf::Closure* done);

}; // class ChatServiceImpl

} // namespace rina

#endif  //RINA_CHAT_SERVICE_IMPL_H

/* vim: set ts=4 sw=4 sts=4 tw=100 */
