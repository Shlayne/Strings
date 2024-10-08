#pragma once

#include <gtest/gtest.h>
#include "allocator_tracker.hpp"
#define STRING_DEFAULT_ALLOCATOR basic_allocation_tracker<_char_t>
#include "string.hpp"

constexpr string_view Empty = "";
constexpr string_view Small1 = "small";
constexpr string_view Small2 = "i am smol";
constexpr string_view Large1 = "this is a large string";
constexpr string_view Large2 = "another string of largeness";

void AssertEmpty(const string& s);
void AssertEmptyLarge(const string& s, string_view expected);
void AssertSmall(const string& s, string_view expected);
void AssertLarge(const string& s, string_view expected);
