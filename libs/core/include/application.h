#pragma once

// clang-format off
#include "stuff.h"
#include "group.h"
#include "mark.h"
// clang-format on
#include "ui.h"
#include "utils.hpp"

class application {
public:
  static application &get_instance();

  void run();

private:

  application();

  auto init() -> menu<stage<4UL>, stage<3UL>, stage<2UL>, stage<4UL>, stage<3UL>>;

  bool sign_in_teacher();
  bool sign_in_stud();

  bool select_group();
  void change_password();

  void add_teacher();
  void add_group();

  void set_mark_student();

  void set_all_marks();

  void quit();

  void show_mark();

  stuff m_stuff;
  group m_group;
  group cache_group;

  teacher *m_current_teacher{};
  student *m_current_student{};

  menu<stage<4ul>, stage<3ul>, stage<2ul>, stage<4ul>, stage<3ul>> m_menu;
};
