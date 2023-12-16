/***************************************************************************
 * 
 * Copyright (c) 2023 Wang Tao. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file chat_service_impl.cpp
 * @author wangtao(wtzhuque@163.com)
 * @date 2023/12/15 15:08:51
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include "chat_service_impl.h"

namespace rina {

void ChatServiceImpl::chat(::google::protobuf::RpcController* controller,
                           const ::rina::ChatRequest* request,
                           ::rina::ChatResponse* response,
                           ::google::protobuf::Closure* done) {
    return;
}

} // namespace rina

/* vim: set ts=4 sw=4 sts=4 tw=100 */
