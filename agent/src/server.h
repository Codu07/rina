/***************************************************************************
 * 
 * Copyright (c) 2023 Wang Tao. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file server.h
 * @author wangtao(wtzhuque@163.com)
 * @date 2023/11/13 14:55:56
 * @version $Revision$ 
 * @brief 
 *  
 **/
#ifndef RINA_SERVER_H
#define RINA_SERVER_H

namespace rina {

class Server {
public:
  Server() {}

  ~Server() {}

  int init();

  int destroy();

  int start();

  void wait_until_exit();
}; // class Server

} // namespace rina

#endif  //RINA_SERVER_H

/* vim: set ts=4 sw=4 sts=4 tw=100 */
