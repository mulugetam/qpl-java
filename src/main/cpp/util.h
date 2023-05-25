/*******************************************************************************
 * Copyright (C) 2023 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 ******************************************************************************/
#ifndef _Included_com_intel_qpl_util_h
#define _Included_com_intel_qpl_util_h

#include <jni.h>

#include "qpl/qpl.h"

void throw_exception(JNIEnv *env, const char *arg, jlong status);

void throw_exception(JNIEnv *env, const char *arg);

#endif
