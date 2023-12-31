/***************************************************************************
 * 
 * Copyright (c) 2023 Wang Tao. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file main.cpp
 * @author wangtao(wtzhuque@163.com)
 * @date 2023/11/13 14:54:27
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include <cxxopts.hpp>
#include <spdlog/spdlog.h>

#include "server.h"
#include "core_framework.h"

namespace rina {

const static int PORT = 8080;

int run(int argc, char** argv) {
  int ret = 0;

  CoreFramework* core = CoreFramework::instance();
  ret = core->init();
  if (ret != 0) {
    spdlog::error("init core framework failed");
    // Fatal
    return ret;
  }

  Server* server = new Server();
  ret = server->init();
  if (ret != 0) {
    spdlog::error("init server failed");
    return ret;
  }

  ret = server->start(PORT);
  if (ret != 0) {
    spdlog::error("start server failed");
    return ret;
  }

  server->wait_until_exit();

  ret = server->destroy();
  if (ret != 0) {
    // Warning
    return ret;
  }

  delete server;
  server = nullptr;

  ret = core->destroy();
  if (ret != 0) {
    // Warning
  }
  return 0;
}

} // namespace rina

int main(int argc, char** argv) {
  return rina::run(argc, argv); 
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */
