/*
 * Copyright (C) 2021 Kovid Goyal <kovid at kovidgoyal.net>
 *
 * Distributed under terms of the GPL3 license.
 */

#pragma once

#include "internal.h"

void initialize_csd_metrics(_GLFWwindow *window);
void free_all_csd_resources(_GLFWwindow *window);
void change_csd_title(_GLFWwindow *window);
void set_csd_window_geometry(_GLFWwindow *window, int32_t *width, int32_t *height);
void set_titlebar_color(_GLFWwindow *window, uint32_t color, bool use_system_color);
void csd_set_visible(_GLFWwindow *window, bool visible);
void csd_handle_pointer_event(_GLFWwindow *window, int button, int state);
