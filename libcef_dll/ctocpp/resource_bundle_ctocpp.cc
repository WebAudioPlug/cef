// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
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
// $hash=e6ed7dea6c86313a621700a6ea5678775926d931$
//

#include "libcef_dll/ctocpp/resource_bundle_ctocpp.h"

// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefResourceBundle> CefResourceBundle::GetGlobal() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_resource_bundle_t* _retval = cef_resource_bundle_get_global();

  // Return type: refptr_same
  return CefResourceBundleCToCpp::Wrap(_retval);
}

// VIRTUAL METHODS - Body may be edited by hand.

CefString CefResourceBundleCToCpp::GetLocalizedString(int string_id) {
  cef_resource_bundle_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_localized_string))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval =
      _struct->get_localized_string(_struct, string_id);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

bool CefResourceBundleCToCpp::GetDataResource(int resource_id,
                                              void*& data,
                                              size_t& data_size) {
  cef_resource_bundle_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_data_resource))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval =
      _struct->get_data_resource(_struct, resource_id, &data, &data_size);

  // Return type: bool
  return _retval ? true : false;
}

bool CefResourceBundleCToCpp::GetDataResourceForScale(int resource_id,
                                                      ScaleFactor scale_factor,
                                                      void*& data,
                                                      size_t& data_size) {
  cef_resource_bundle_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_data_resource_for_scale))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_data_resource_for_scale(
      _struct, resource_id, scale_factor, &data, &data_size);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefResourceBundleCToCpp::CefResourceBundleCToCpp() {}

template <>
cef_resource_bundle_t* CefCToCppRefCounted<
    CefResourceBundleCToCpp,
    CefResourceBundle,
    cef_resource_bundle_t>::UnwrapDerived(CefWrapperType type,
                                          CefResourceBundle* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCToCppRefCounted<CefResourceBundleCToCpp,
                                         CefResourceBundle,
                                         cef_resource_bundle_t>::DebugObjCt
    ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCToCppRefCounted<CefResourceBundleCToCpp,
                                   CefResourceBundle,
                                   cef_resource_bundle_t>::kWrapperType =
    WT_RESOURCE_BUNDLE;
