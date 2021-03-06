// { dg-options "-std=gnu++0x" }
// 2010-11-30  Paolo Carlini  <paolo.carlini@oracle.com>
//
// Copyright (C) 2010-2013 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

#include <type_traits>
#include <testsuite_hooks.h>
#include <testsuite_tr1.h>

void test01()
{
  bool test __attribute__((unused)) = true;
  using std::is_scalar;
  using namespace __gnu_test;

  VERIFY( (test_category<is_scalar, int>(true)) );
  VERIFY( (test_category<is_scalar, float>(true)) );
  VERIFY( (test_category<is_scalar, EnumType>(true)) );
  VERIFY( (test_category<is_scalar, int*>(true)) );
  VERIFY( (test_category<is_scalar, int(*)(int)>(true)) );
  VERIFY( (test_category<is_scalar, int (ClassType::*)>(true)) );
  VERIFY( (test_category<is_scalar, int (ClassType::*) (int)>(true)) );
  VERIFY( (test_category<is_scalar, std::nullptr_t>(true)) );

  // Sanity check.
  VERIFY( (test_category<is_scalar, ClassType>(false)) );
}

int main()
{
  test01();
  return 0;
}
