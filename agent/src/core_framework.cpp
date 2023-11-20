/***************************************************************************
 * 
 * Copyright (c) 2023 Wang Tao. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file core_framework.cpp
 * @author wangtao(wtzhuque@163.com)
 * @date 2023/11/15 12:57:09
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include "core_framework.h"

namespace {
  static ::rina::CoreFramework *g_ins = nullptr;
}

namespace rina {

CoreFramework* CoreFramework::instance() {
  if (g_ins == nullptr) {
    g_ins = new CoreFramework();
  }

  return g_ins;
}

int CoreFramework::init() {
  return 0;
}

int CoreFramework::destroy() {
  return 0;
}


} // namespace rina

/* vim: set ts=4 sw=4 sts=4 tw=100 */
