/***************************************************************************
 * 
 * Copyright (c) 2023 Wang Tao. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file core_framework.h
 * @author wangtao(wtzhuque@163.com)
 * @date 2023/11/15 12:57:02
 * @version $Revision$ 
 * @brief 
 *  
 **/
#ifndef RINA_CORE_FRAMEWORK_H
#define RINA_CORE_FRAMEWORK_H

#include <optional>

#include "session.h"

namespace rina {

class CoreFramework {
public:
  static CoreFramework* instance();

public:
  ~CoreFramework() {}

  int init();

  int destroy();

  std::optional<Session*> new_session();

private:
  CoreFramework() {}
  CoreFramework(const CoreFramework&) {}
}; // class CoreFramework

} // namespace rina

#endif  //RINA_CORE_FRAMEWORK_H

/* vim: set ts=4 sw=4 sts=4 tw=100 */
