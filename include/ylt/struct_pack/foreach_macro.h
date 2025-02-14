/*
 * Copyright (c) 2023, Alibaba Group Holding Limited;
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once
// clang-format off
#define STRUCT_PACK_ARG_COUNT(...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_INTERNAL_ARG_COUNT(0, ##__VA_ARGS__,\
	64, 63, 62, 61, 60, \
	59, 58, 57, 56, 55, 54, 53, 52, 51, 50, \
	49, 48, 47, 46, 45, 44, 43, 42, 41, 40, \
	39, 38, 37, 36, 35, 34, 33, 32, 31, 30, \
	29, 28, 27, 26, 25, 24, 23, 22, 21, 20, \
	19, 18, 17, 16, 15, 14, 13, 12, 11, 10, \
	 9,  8,  7,  6,  5,  4,  3,  2,  1,  0))

#define STRUCT_PACK_INTERNAL_ARG_COUNT(\
	 _0,  _1,  _2,  _3,  _4,  _5,  _6,  _7,  _8,  _9, \
	_10, _11, _12, _13, _14, _15, _16, _17, _18, _19, \
	_20, _21, _22, _23, _24, _25, _26, _27, _28, _29, \
	_30, _31, _32, _33, _34, _35, _36, _37, _38, _39, \
	_40, _41, _42, _43, _44, _45, _46, _47, _48, _49, \
	_50, _51, _52, _53, _54, _55, _56, _57, _58, _59, \
	_60, _61, _62, _63, _64, N, ...) N

#define STRUCT_PACK_CONCAT_(l, r) l ## r
#define STRUCT_PACK_CONCAT(l, r) STRUCT_PACK_CONCAT_(l, r)

#define STRUCT_PACK_MARCO_EXPAND(...) __VA_ARGS__

#define STRUCT_PACK_DOARG0(s,f,o) 
#define STRUCT_PACK_DOARG1(s,f,t,...)  STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG0(s,f,__VA_ARGS__))  s f(0,t)
#define STRUCT_PACK_DOARG2(s,f,t,...)  STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG1(s,f,__VA_ARGS__))  s f(1,t) 
#define STRUCT_PACK_DOARG3(s,f,t,...)  STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG2(s,f,__VA_ARGS__))  s f(2,t)
#define STRUCT_PACK_DOARG4(s,f,t,...)  STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG3(s,f,__VA_ARGS__))  s f(3,t)
#define STRUCT_PACK_DOARG5(s,f,t,...)  STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG4(s,f,__VA_ARGS__))  s f(4,t)
#define STRUCT_PACK_DOARG6(s,f,t,...)  STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG5(s,f,__VA_ARGS__))  s f(5,t)
#define STRUCT_PACK_DOARG7(s,f,t,...)  STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG6(s,f,__VA_ARGS__))  s f(6,t)
#define STRUCT_PACK_DOARG8(s,f,t,...)  STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG7(s,f,__VA_ARGS__)) s f(7,t)
#define STRUCT_PACK_DOARG9(s,f,t,...)  STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG8(s,f,__VA_ARGS__)) s f(8,t)
#define STRUCT_PACK_DOARG10(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG9(s,f,__VA_ARGS__)) s f(9,t)
#define STRUCT_PACK_DOARG11(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG10(s,f,__VA_ARGS__)) s f(10,t)
#define STRUCT_PACK_DOARG12(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG11(s,f,__VA_ARGS__)) s f(11,t)
#define STRUCT_PACK_DOARG13(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG12(s,f,__VA_ARGS__)) s f(12,t)
#define STRUCT_PACK_DOARG14(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG13(s,f,__VA_ARGS__)) s f(13,t)
#define STRUCT_PACK_DOARG15(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG14(s,f,__VA_ARGS__)) s f(14,t)
#define STRUCT_PACK_DOARG16(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG15(s,f,__VA_ARGS__)) s f(15,t)
#define STRUCT_PACK_DOARG17(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG16(s,f,__VA_ARGS__)) s f(16,t)
#define STRUCT_PACK_DOARG18(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG17(s,f,__VA_ARGS__)) s f(17,t)
#define STRUCT_PACK_DOARG19(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG18(s,f,__VA_ARGS__)) s f(18,t)
#define STRUCT_PACK_DOARG20(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG19(s,f,__VA_ARGS__)) s f(19,t)
#define STRUCT_PACK_DOARG21(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG20(s,f,__VA_ARGS__)) s f(20,t)
#define STRUCT_PACK_DOARG22(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG21(s,f,__VA_ARGS__)) s f(21,t)
#define STRUCT_PACK_DOARG23(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG22(s,f,__VA_ARGS__)) s f(22,t)
#define STRUCT_PACK_DOARG24(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG23(s,f,__VA_ARGS__)) s f(23,t)
#define STRUCT_PACK_DOARG25(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG24(s,f,__VA_ARGS__)) s f(24,t)
#define STRUCT_PACK_DOARG26(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG25(s,f,__VA_ARGS__)) s f(25,t)
#define STRUCT_PACK_DOARG27(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG26(s,f,__VA_ARGS__)) s f(26,t)
#define STRUCT_PACK_DOARG28(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG27(s,f,__VA_ARGS__)) s f(27,t)
#define STRUCT_PACK_DOARG29(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG28(s,f,__VA_ARGS__)) s f(28,t)
#define STRUCT_PACK_DOARG30(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG29(s,f,__VA_ARGS__)) s f(29,t)
#define STRUCT_PACK_DOARG31(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG30(s,f,__VA_ARGS__)) s f(30,t)
#define STRUCT_PACK_DOARG32(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG31(s,f,__VA_ARGS__)) s f(31,t)
#define STRUCT_PACK_DOARG33(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG32(s,f,__VA_ARGS__)) s f(32,t)
#define STRUCT_PACK_DOARG34(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG33(s,f,__VA_ARGS__)) s f(33,t)
#define STRUCT_PACK_DOARG35(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG34(s,f,__VA_ARGS__)) s f(34,t)
#define STRUCT_PACK_DOARG36(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG35(s,f,__VA_ARGS__)) s f(35,t)
#define STRUCT_PACK_DOARG37(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG36(s,f,__VA_ARGS__)) s f(36,t)
#define STRUCT_PACK_DOARG38(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG37(s,f,__VA_ARGS__)) s f(37,t)
#define STRUCT_PACK_DOARG39(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG38(s,f,__VA_ARGS__)) s f(38,t)
#define STRUCT_PACK_DOARG40(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG39(s,f,__VA_ARGS__)) s f(39,t)
#define STRUCT_PACK_DOARG41(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG40(s,f,__VA_ARGS__)) s f(40,t)
#define STRUCT_PACK_DOARG42(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG41(s,f,__VA_ARGS__)) s f(41,t)
#define STRUCT_PACK_DOARG43(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG42(s,f,__VA_ARGS__)) s f(42,t)
#define STRUCT_PACK_DOARG44(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG43(s,f,__VA_ARGS__)) s f(43,t)
#define STRUCT_PACK_DOARG45(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG44(s,f,__VA_ARGS__)) s f(44,t)
#define STRUCT_PACK_DOARG46(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG45(s,f,__VA_ARGS__)) s f(45,t)
#define STRUCT_PACK_DOARG47(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG46(s,f,__VA_ARGS__)) s f(46,t)
#define STRUCT_PACK_DOARG48(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG47(s,f,__VA_ARGS__)) s f(47,t)
#define STRUCT_PACK_DOARG49(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG48(s,f,__VA_ARGS__)) s f(48,t)
#define STRUCT_PACK_DOARG50(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG49(s,f,__VA_ARGS__)) s f(49,t)
#define STRUCT_PACK_DOARG51(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG50(s,f,__VA_ARGS__)) s f(50,t)
#define STRUCT_PACK_DOARG52(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG51(s,f,__VA_ARGS__)) s f(51,t)
#define STRUCT_PACK_DOARG53(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG52(s,f,__VA_ARGS__)) s f(52,t)
#define STRUCT_PACK_DOARG54(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG53(s,f,__VA_ARGS__)) s f(53,t)
#define STRUCT_PACK_DOARG55(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG54(s,f,__VA_ARGS__)) s f(54,t)
#define STRUCT_PACK_DOARG56(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG55(s,f,__VA_ARGS__)) s f(55,t)
#define STRUCT_PACK_DOARG57(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG56(s,f,__VA_ARGS__)) s f(56,t)
#define STRUCT_PACK_DOARG58(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG57(s,f,__VA_ARGS__)) s f(57,t)
#define STRUCT_PACK_DOARG59(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG58(s,f,__VA_ARGS__)) s f(58,t)
#define STRUCT_PACK_DOARG60(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG59(s,f,__VA_ARGS__)) s f(59,t)
#define STRUCT_PACK_DOARG61(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG60(s,f,__VA_ARGS__)) s f(60,t)
#define STRUCT_PACK_DOARG62(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG61(s,f,__VA_ARGS__)) s f(61,t)
#define STRUCT_PACK_DOARG63(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG62(s,f,__VA_ARGS__)) s f(62,t)
#define STRUCT_PACK_DOARG64(s,f,t,...) STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_DOARG63(s,f,__VA_ARGS__)) s f(63,t)

#define STRUCT_PACK_MAKE_ARGS0(Type)
#define STRUCT_PACK_MAKE_ARGS1(Type)     Type
#define STRUCT_PACK_MAKE_ARGS2(Type)     STRUCT_PACK_MAKE_ARGS1(Type), Type
#define STRUCT_PACK_MAKE_ARGS3(Type)     STRUCT_PACK_MAKE_ARGS2(Type), Type
#define STRUCT_PACK_MAKE_ARGS4(Type)     STRUCT_PACK_MAKE_ARGS3(Type), Type
#define STRUCT_PACK_MAKE_ARGS5(Type)     STRUCT_PACK_MAKE_ARGS4(Type), Type
#define STRUCT_PACK_MAKE_ARGS6(Type)     STRUCT_PACK_MAKE_ARGS5(Type), Type
#define STRUCT_PACK_MAKE_ARGS7(Type)     STRUCT_PACK_MAKE_ARGS6(Type), Type
#define STRUCT_PACK_MAKE_ARGS8(Type)     STRUCT_PACK_MAKE_ARGS7(Type), Type
#define STRUCT_PACK_MAKE_ARGS9(Type)     STRUCT_PACK_MAKE_ARGS8(Type), Type
#define STRUCT_PACK_MAKE_ARGS10(Type)    STRUCT_PACK_MAKE_ARGS9(Type), Type
#define STRUCT_PACK_MAKE_ARGS11(Type)    STRUCT_PACK_MAKE_ARGS10(Type), Type
#define STRUCT_PACK_MAKE_ARGS12(Type)    STRUCT_PACK_MAKE_ARGS11(Type), Type
#define STRUCT_PACK_MAKE_ARGS13(Type)    STRUCT_PACK_MAKE_ARGS12(Type), Type
#define STRUCT_PACK_MAKE_ARGS14(Type)    STRUCT_PACK_MAKE_ARGS13(Type), Type
#define STRUCT_PACK_MAKE_ARGS15(Type)    STRUCT_PACK_MAKE_ARGS14(Type), Type
#define STRUCT_PACK_MAKE_ARGS16(Type)    STRUCT_PACK_MAKE_ARGS15(Type), Type
#define STRUCT_PACK_MAKE_ARGS17(Type)    STRUCT_PACK_MAKE_ARGS16(Type), Type
#define STRUCT_PACK_MAKE_ARGS18(Type)    STRUCT_PACK_MAKE_ARGS17(Type), Type
#define STRUCT_PACK_MAKE_ARGS19(Type)    STRUCT_PACK_MAKE_ARGS18(Type), Type
#define STRUCT_PACK_MAKE_ARGS20(Type)    STRUCT_PACK_MAKE_ARGS19(Type), Type
#define STRUCT_PACK_MAKE_ARGS21(Type)    STRUCT_PACK_MAKE_ARGS20(Type), Type
#define STRUCT_PACK_MAKE_ARGS22(Type)    STRUCT_PACK_MAKE_ARGS21(Type), Type
#define STRUCT_PACK_MAKE_ARGS23(Type)    STRUCT_PACK_MAKE_ARGS22(Type), Type
#define STRUCT_PACK_MAKE_ARGS24(Type)    STRUCT_PACK_MAKE_ARGS23(Type), Type
#define STRUCT_PACK_MAKE_ARGS25(Type)    STRUCT_PACK_MAKE_ARGS24(Type), Type
#define STRUCT_PACK_MAKE_ARGS26(Type)    STRUCT_PACK_MAKE_ARGS25(Type), Type
#define STRUCT_PACK_MAKE_ARGS27(Type)    STRUCT_PACK_MAKE_ARGS26(Type), Type
#define STRUCT_PACK_MAKE_ARGS28(Type)    STRUCT_PACK_MAKE_ARGS27(Type), Type
#define STRUCT_PACK_MAKE_ARGS29(Type)    STRUCT_PACK_MAKE_ARGS28(Type), Type
#define STRUCT_PACK_MAKE_ARGS30(Type)    STRUCT_PACK_MAKE_ARGS29(Type), Type
#define STRUCT_PACK_MAKE_ARGS31(Type)    STRUCT_PACK_MAKE_ARGS30(Type), Type
#define STRUCT_PACK_MAKE_ARGS32(Type)    STRUCT_PACK_MAKE_ARGS31(Type), Type
#define STRUCT_PACK_MAKE_ARGS33(Type)    STRUCT_PACK_MAKE_ARGS32(Type), Type
#define STRUCT_PACK_MAKE_ARGS34(Type)    STRUCT_PACK_MAKE_ARGS33(Type), Type
#define STRUCT_PACK_MAKE_ARGS35(Type)    STRUCT_PACK_MAKE_ARGS34(Type), Type
#define STRUCT_PACK_MAKE_ARGS36(Type)    STRUCT_PACK_MAKE_ARGS35(Type), Type
#define STRUCT_PACK_MAKE_ARGS37(Type)    STRUCT_PACK_MAKE_ARGS36(Type), Type
#define STRUCT_PACK_MAKE_ARGS38(Type)    STRUCT_PACK_MAKE_ARGS37(Type), Type
#define STRUCT_PACK_MAKE_ARGS39(Type)    STRUCT_PACK_MAKE_ARGS38(Type), Type
#define STRUCT_PACK_MAKE_ARGS40(Type)    STRUCT_PACK_MAKE_ARGS39(Type), Type
#define STRUCT_PACK_MAKE_ARGS41(Type)    STRUCT_PACK_MAKE_ARGS40(Type), Type
#define STRUCT_PACK_MAKE_ARGS42(Type)    STRUCT_PACK_MAKE_ARGS41(Type), Type
#define STRUCT_PACK_MAKE_ARGS43(Type)    STRUCT_PACK_MAKE_ARGS42(Type), Type
#define STRUCT_PACK_MAKE_ARGS44(Type)    STRUCT_PACK_MAKE_ARGS43(Type), Type
#define STRUCT_PACK_MAKE_ARGS45(Type)    STRUCT_PACK_MAKE_ARGS44(Type), Type
#define STRUCT_PACK_MAKE_ARGS46(Type)    STRUCT_PACK_MAKE_ARGS45(Type), Type
#define STRUCT_PACK_MAKE_ARGS47(Type)    STRUCT_PACK_MAKE_ARGS46(Type), Type
#define STRUCT_PACK_MAKE_ARGS48(Type)    STRUCT_PACK_MAKE_ARGS47(Type), Type
#define STRUCT_PACK_MAKE_ARGS49(Type)    STRUCT_PACK_MAKE_ARGS48(Type), Type
#define STRUCT_PACK_MAKE_ARGS50(Type)    STRUCT_PACK_MAKE_ARGS49(Type), Type
#define STRUCT_PACK_MAKE_ARGS51(Type)    STRUCT_PACK_MAKE_ARGS50(Type), Type
#define STRUCT_PACK_MAKE_ARGS52(Type)    STRUCT_PACK_MAKE_ARGS51(Type), Type
#define STRUCT_PACK_MAKE_ARGS53(Type)    STRUCT_PACK_MAKE_ARGS52(Type), Type
#define STRUCT_PACK_MAKE_ARGS54(Type)    STRUCT_PACK_MAKE_ARGS53(Type), Type
#define STRUCT_PACK_MAKE_ARGS55(Type)    STRUCT_PACK_MAKE_ARGS54(Type), Type
#define STRUCT_PACK_MAKE_ARGS56(Type)    STRUCT_PACK_MAKE_ARGS55(Type), Type
#define STRUCT_PACK_MAKE_ARGS57(Type)    STRUCT_PACK_MAKE_ARGS56(Type), Type
#define STRUCT_PACK_MAKE_ARGS58(Type)    STRUCT_PACK_MAKE_ARGS57(Type), Type
#define STRUCT_PACK_MAKE_ARGS59(Type)    STRUCT_PACK_MAKE_ARGS58(Type), Type
#define STRUCT_PACK_MAKE_ARGS60(Type)    STRUCT_PACK_MAKE_ARGS59(Type), Type
#define STRUCT_PACK_MAKE_ARGS61(Type)    STRUCT_PACK_MAKE_ARGS60(Type), Type
#define STRUCT_PACK_MAKE_ARGS62(Type)    STRUCT_PACK_MAKE_ARGS61(Type), Type
#define STRUCT_PACK_MAKE_ARGS63(Type)    STRUCT_PACK_MAKE_ARGS62(Type), Type
#define STRUCT_PACK_MAKE_ARGS64(Type)    STRUCT_PACK_MAKE_ARGS63(Type), Type


#define STRUCT_PACK_MAKE_ARGS(Type,Count) \
  STRUCT_PACK_CONCAT(STRUCT_PACK_MAKE_ARGS,Count)(Type)

#define STRUCT_PACK_EXPAND_EACH_(sepatator,fun,...) \
		STRUCT_PACK_MARCO_EXPAND(STRUCT_PACK_CONCAT(STRUCT_PACK_DOARG,STRUCT_PACK_ARG_COUNT(__VA_ARGS__))(sepatator,fun,__VA_ARGS__))
#define STRUCT_PACK_EXPAND_EACH(sepatator,fun,...) \
		STRUCT_PACK_EXPAND_EACH_(sepatator,fun,__VA_ARGS__)