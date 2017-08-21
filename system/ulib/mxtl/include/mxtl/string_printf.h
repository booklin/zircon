// Copyright 2016 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#include <stdarg.h>

#include <magenta/compiler.h>
#include <mxtl/string.h>

namespace mxtl {

// Formats |printf()|-like input and returns it as an |mxtl::String|.
String StringPrintf(const char* format, ...)
    __PRINTFLIKE(1, 2) __WARN_UNUSED_RESULT;

// Formats |vprintf()|-like input and returns it as an |mxtl::String|.
String StringVPrintf(const char* format, va_list ap)
    __WARN_UNUSED_RESULT;

} // namespace mxtl