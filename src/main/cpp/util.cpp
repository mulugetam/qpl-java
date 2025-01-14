/*******************************************************************************
 * Copyright (C) 2023 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 ******************************************************************************/

#include <string.h>
#include "util.h"

void throw_exception(JNIEnv *env, const char *arg, jlong status)
{
    int MAX_LEN = 1024;
    int STATUS_LEN = 50;
    char buf[MAX_LEN];
    char statBuffer[STATUS_LEN];
    jclass Exception = env->FindClass("com/intel/qpl/QPLException");
    strncpy(buf, arg, sizeof(buf) - 1);
    strncat(buf, " Status code is - ", STATUS_LEN);
    snprintf(statBuffer, STATUS_LEN, "%ld", status);
    strncat(buf, statBuffer, STATUS_LEN);
    env->ThrowNew(Exception, buf);
}

void throw_exception(JNIEnv *env, const char *arg)
{
    int MAX_LEN = 1024;

    char buf[MAX_LEN];
    jclass Exception = env->FindClass("com/intel/qpl/QPLException");
    strncpy(buf, arg, sizeof(buf) - 1);
    env->ThrowNew(Exception, buf);
}
