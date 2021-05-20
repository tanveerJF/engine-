// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef FLUTTER_SHELL_PLATFORM_LINUX_FL_DART_PROJECT_H_
#define FLUTTER_SHELL_PLATFORM_LINUX_FL_DART_PROJECT_H_

#include <glib-object.h>

#if !defined(__FLUTTER_LINUX_INSIDE__) && !defined(FLUTTER_LINUX_COMPILATION)
#error "Only <flutter_linux/flutter_linux.h> can be included directly."
#endif

G_BEGIN_DECLS

G_DECLARE_FINAL_TYPE(FlDartProject, fl_dart_project, FL, DART_PROJECT, GObject)

FlDartProject* fl_dart_project_new(const gchar* assets_path,
                                   const gchar* icu_data_path);

const gchar* fl_dart_project_get_assets_path(FlDartProject* project);

const gchar* fl_dart_project_get_icu_data_path(FlDartProject* project);

G_END_DECLS

#endif  // FLUTTER_SHELL_PLATFORM_LINUX_FL_DART_PROJECT_H_
