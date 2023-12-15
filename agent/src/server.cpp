/***************************************************************************
 * 
 * Copyright (c) 2023 Wang Tao. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file server.cpp
 * @author wangtao(wtzhuque@163.com)
 * @date 2023/11/13 14:56:02
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include "server.h"

#include <brpc/server.h>
#include <spdlog/spdlog.h>

#include "chat_service_impl.h"

namespace rina {

int Server::init() {
  _chat_impl = new ChatServiceImpl();
  _rpc_server = new ::brpc::Server();
  if (_rpc_server->AddService(_chat_impl, brpc::SERVER_DOESNT_OWN_SERVICE) != 0) {
    spdlog::error("failed to add service impl");
  }
  return 0;
}

int Server::destroy() {
  return 0;
}

int Server::start(int port) {
  ::butil::EndPoint point = butil::EndPoint(butil::IP_ANY, port);
  ::brpc::ServerOptions options;
  options.idle_timeout_sec = 3000;
  if (_rpc_server->Start(point, &options) != 0) {
    spdlog::error("start server failed");
  }
  return 0; 
}

void Server::wait_until_exit() {
  _rpc_server->RunUntilAskedToQuit();
  return;
}

} // namespace rina

/* vim: set ts=4 sw=4 sts=4 tw=100 */
