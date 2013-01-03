// Copyright (c) 2013 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/task_cpptoc.h"
#include "libcef_dll/ctocpp/task_runner_ctocpp.h"


// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefTaskRunner> CefTaskRunner::GetForCurrentThread() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_task_runner_t* _retval = cef_task_runner_get_for_current_thread();

  // Return type: refptr_same
  return CefTaskRunnerCToCpp::Wrap(_retval);
}

CefRefPtr<CefTaskRunner> CefTaskRunner::GetForThread(CefThreadId threadId) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_task_runner_t* _retval = cef_task_runner_get_for_thread(
      threadId);

  // Return type: refptr_same
  return CefTaskRunnerCToCpp::Wrap(_retval);
}


// VIRTUAL METHODS - Body may be edited by hand.

bool CefTaskRunnerCToCpp::IsSame(CefRefPtr<CefTaskRunner> that) {
  if (CEF_MEMBER_MISSING(struct_, is_same))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: that; type: refptr_same
  DCHECK(that.get());
  if (!that.get())
    return false;

  // Execute
  int _retval = struct_->is_same(struct_,
      CefTaskRunnerCToCpp::Unwrap(that));

  // Return type: bool
  return _retval?true:false;
}

bool CefTaskRunnerCToCpp::BelongsToCurrentThread() {
  if (CEF_MEMBER_MISSING(struct_, belongs_to_current_thread))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->belongs_to_current_thread(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefTaskRunnerCToCpp::BelongsToThread(CefThreadId threadId) {
  if (CEF_MEMBER_MISSING(struct_, belongs_to_thread))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->belongs_to_thread(struct_,
      threadId);

  // Return type: bool
  return _retval?true:false;
}

bool CefTaskRunnerCToCpp::PostTask(CefRefPtr<CefTask> task) {
  if (CEF_MEMBER_MISSING(struct_, post_task))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: task; type: refptr_diff
  DCHECK(task.get());
  if (!task.get())
    return false;

  // Execute
  int _retval = struct_->post_task(struct_,
      CefTaskCppToC::Wrap(task));

  // Return type: bool
  return _retval?true:false;
}

bool CefTaskRunnerCToCpp::PostDelayedTask(CefRefPtr<CefTask> task,
    int64 delay_ms) {
  if (CEF_MEMBER_MISSING(struct_, post_delayed_task))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: task; type: refptr_diff
  DCHECK(task.get());
  if (!task.get())
    return false;

  // Execute
  int _retval = struct_->post_delayed_task(struct_,
      CefTaskCppToC::Wrap(task),
      delay_ms);

  // Return type: bool
  return _retval?true:false;
}


#ifndef NDEBUG
template<> long CefCToCpp<CefTaskRunnerCToCpp, CefTaskRunner,
    cef_task_runner_t>::DebugObjCt = 0;
#endif

