/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "%d,%h,%h,%b,%b,%b,%b,%b,%b,%b,%b,%b,%b,%b";
static int ng1[] = {20, 0, 0, 0};
static const char *ng2 = "E:/xampp/htdocs/tb3talta/New_folder/tbForGui.v";
static int ng3[] = {0, 0};
static const char *ng4 = "try.txt";
static const char *ng5 = "r";
static const char *ng6 = "try2.txt";
static int ng7[] = {20, 0};
static const char *ng8 = "%d,%d,%d,%d ";
static unsigned int ng9[] = {1U, 0U};
static int ng10[] = {1, 0};
static unsigned int ng11[] = {2U, 0U};
static unsigned int ng12[] = {3U, 0U};
static unsigned int ng13[] = {0U, 0U};
static unsigned int ng15[] = {2863311530U, 0U};
static unsigned int ng16[] = {3149642683U, 0U};
static unsigned int ng17[] = {3435973836U, 0U};

void Monitor_273_2(char *);
void Monitor_273_2(char *);


static void Monitor_273_2_Func(char *t0)
{
    char t4[16];
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 10016);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t6 = ((char*)((ng1)));
    xsi_vlog_unsigned_multiply(t7, 64, t4, 64, t6, 32);
    t8 = (t0 + 1456U);
    t9 = *((char **)t8);
    t8 = (t0 + 1616U);
    t10 = *((char **)t8);
    t8 = (t0 + 2096U);
    t11 = *((char **)t8);
    t8 = (t0 + 1936U);
    t12 = *((char **)t8);
    t8 = (t0 + 2256U);
    t13 = *((char **)t8);
    t8 = (t0 + 1776U);
    t14 = *((char **)t8);
    t8 = (t0 + 2896U);
    t15 = *((char **)t8);
    t8 = (t0 + 3216U);
    t16 = *((char **)t8);
    t8 = (t0 + 2416U);
    t17 = *((char **)t8);
    t8 = (t0 + 2736U);
    t18 = *((char **)t8);
    t8 = (t0 + 3056U);
    t19 = *((char **)t8);
    t8 = (t0 + 6816);
    t20 = (t8 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 2576U);
    t23 = *((char **)t22);
    xsi_vlogfile_fwrite(*((unsigned int *)t3), 1, 0, 3, ng0, 15, t0, (char)118, t7, 64, (char)118, t9, 32, (char)118, t10, 4, (char)118, t11, 1, (char)118, t12, 1, (char)118, t13, 1, (char)118, t14, 1, (char)118, t15, 1, (char)118, t16, 1, (char)118, t17, 1, (char)118, t18, 1, (char)118, t19, 1, (char)118, t21, 1, (char)118, t23, 1);

LAB1:    return;
}

static void Always_201_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 11896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(201, ng2);
    t2 = (t0 + 11704);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(201, ng2);
    t4 = (t0 + 6816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 6816);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_235_1(char *t0)
{
    char t3[8];
    char t15[8];
    char t19[8];
    char t23[8];
    char t27[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;

LAB0:    xsi_set_current_line(235, ng2);

LAB2:    xsi_set_current_line(236, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 6816);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(237, ng2);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng4, ng5);
    t1 = (t3 + 4);
    *((int *)t1) = 0;
    t2 = (t0 + 9856);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(238, ng2);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname(ng6);
    t1 = (t3 + 4);
    *((int *)t1) = 0;
    t2 = (t0 + 10016);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(242, ng2);
    xsi_set_current_line(242, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 10176);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 10176);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = ((char*)((ng7)));
    memset(t3, 0, 8);
    xsi_vlog_signed_less(t3, 32, t4, 32, t5, 32);
    t6 = (t3 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(270, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 10336);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(270, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 10496);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(270, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 10656);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(273, ng2);
    Monitor_273_2(t0);

LAB1:    return;
LAB4:    xsi_set_current_line(243, ng2);

LAB6:    xsi_set_current_line(244, ng2);
    t12 = (t0 + 9856);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t16 = (t0 + 7136);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_bit_copy(t15, 0, t18, 0, 3);
    t20 = (t0 + 7296);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_bit_copy(t19, 0, t22, 0, 3);
    t24 = (t0 + 7456);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_bit_copy(t23, 0, t26, 0, 4);
    t28 = (t0 + 7616);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_bit_copy(t27, 0, t30, 0, 5);
    *((int *)t31) = xsi_vlogfile_fscanf(*((unsigned int *)t14), ng8, 5, t0, (char)118, t15, 3, (char)118, t19, 3, (char)118, t23, 4, (char)118, t27, 5);
    t32 = (t31 + 4);
    *((int *)t32) = 0;
    t33 = (t0 + 7136);
    xsi_vlogvar_assign_value(t33, t15, 0, 0, 3);
    t34 = (t0 + 7296);
    xsi_vlogvar_assign_value(t34, t19, 0, 0, 3);
    t35 = (t0 + 7456);
    xsi_vlogvar_assign_value(t35, t23, 0, 0, 4);
    t36 = (t0 + 7616);
    xsi_vlogvar_assign_value(t36, t27, 0, 0, 5);
    xsi_set_current_line(245, ng2);
    t1 = (t0 + 7136);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);

LAB7:    t5 = ((char*)((ng9)));
    t37 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t37 == 1)
        goto LAB8;

LAB9:    t1 = ((char*)((ng11)));
    t37 = xsi_vlog_unsigned_case_compare(t4, 3, t1, 3);
    if (t37 == 1)
        goto LAB10;

LAB11:    t1 = ((char*)((ng12)));
    t37 = xsi_vlog_unsigned_case_compare(t4, 3, t1, 3);
    if (t37 == 1)
        goto LAB12;

LAB13:
LAB14:    xsi_set_current_line(242, ng2);
    t1 = (t0 + 10176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = ((char*)((ng10)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t5, 32, t6, 32);
    t12 = (t0 + 10176);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 32);
    goto LAB3;

LAB8:    xsi_set_current_line(246, ng2);

LAB15:    xsi_set_current_line(247, ng2);
    t6 = (t0 + 7296);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 8096);
    t16 = (t0 + 8096);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t20 = (t0 + 8096);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t24 = (t0 + 10336);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t3, t15, t18, t22, 2, 1, t26, 32, 1);
    t28 = (t3 + 4);
    t7 = *((unsigned int *)t28);
    t38 = (!(t7));
    t29 = (t15 + 4);
    t8 = *((unsigned int *)t29);
    t39 = (!(t8));
    t40 = (t38 && t39);
    if (t40 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(248, ng2);
    t1 = (t0 + 7456);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t0 + 8256);
    t12 = (t0 + 8256);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t16 = (t0 + 8256);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t20 = (t0 + 10336);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t3, t15, t14, t18, 2, 1, t22, 32, 1);
    t24 = (t3 + 4);
    t7 = *((unsigned int *)t24);
    t37 = (!(t7));
    t25 = (t15 + 4);
    t8 = *((unsigned int *)t25);
    t38 = (!(t8));
    t39 = (t37 && t38);
    if (t39 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(249, ng2);
    t1 = (t0 + 7616);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t0 + 8416);
    t12 = (t0 + 8416);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t16 = (t0 + 8416);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t20 = (t0 + 10336);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t3, t15, t14, t18, 2, 1, t22, 32, 1);
    t24 = (t3 + 4);
    t7 = *((unsigned int *)t24);
    t37 = (!(t7));
    t25 = (t15 + 4);
    t8 = *((unsigned int *)t25);
    t38 = (!(t8));
    t39 = (t37 && t38);
    if (t39 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(250, ng2);
    t1 = (t0 + 10336);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = ((char*)((ng10)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t5, 32, t6, 32);
    t12 = (t0 + 10336);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 32);
    xsi_set_current_line(251, ng2);
    t1 = (t0 + 7936);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = ((char*)((ng9)));
    memset(t3, 0, 8);
    xsi_vlog_unsigned_add(t3, 4, t5, 4, t6, 4);
    t12 = (t0 + 7936);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 4);
    goto LAB14;

LAB10:    xsi_set_current_line(253, ng2);

LAB22:    xsi_set_current_line(254, ng2);
    t2 = (t0 + 7296);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t12 = (t0 + 8736);
    t13 = (t0 + 8736);
    t14 = (t13 + 72U);
    t16 = *((char **)t14);
    t17 = (t0 + 8736);
    t18 = (t17 + 64U);
    t20 = *((char **)t18);
    t21 = (t0 + 10496);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t3, t15, t16, t20, 2, 1, t24, 32, 1);
    t25 = (t3 + 4);
    t7 = *((unsigned int *)t25);
    t38 = (!(t7));
    t26 = (t15 + 4);
    t8 = *((unsigned int *)t26);
    t39 = (!(t8));
    t40 = (t38 && t39);
    if (t40 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(255, ng2);
    t1 = (t0 + 7456);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t0 + 8896);
    t12 = (t0 + 8896);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t16 = (t0 + 8896);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t20 = (t0 + 10496);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t3, t15, t14, t18, 2, 1, t22, 32, 1);
    t24 = (t3 + 4);
    t7 = *((unsigned int *)t24);
    t37 = (!(t7));
    t25 = (t15 + 4);
    t8 = *((unsigned int *)t25);
    t38 = (!(t8));
    t39 = (t37 && t38);
    if (t39 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(256, ng2);
    t1 = (t0 + 7616);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t0 + 9056);
    t12 = (t0 + 9056);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t16 = (t0 + 9056);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t20 = (t0 + 10496);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t3, t15, t14, t18, 2, 1, t22, 32, 1);
    t24 = (t3 + 4);
    t7 = *((unsigned int *)t24);
    t37 = (!(t7));
    t25 = (t15 + 4);
    t8 = *((unsigned int *)t25);
    t38 = (!(t8));
    t39 = (t37 && t38);
    if (t39 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(257, ng2);
    t1 = (t0 + 10496);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = ((char*)((ng10)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t5, 32, t6, 32);
    t12 = (t0 + 10496);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 32);
    xsi_set_current_line(258, ng2);
    t1 = (t0 + 8576);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = ((char*)((ng9)));
    memset(t3, 0, 8);
    xsi_vlog_unsigned_add(t3, 4, t5, 4, t6, 4);
    t12 = (t0 + 8576);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 4);
    goto LAB14;

LAB12:    xsi_set_current_line(260, ng2);

LAB29:    xsi_set_current_line(261, ng2);
    t2 = (t0 + 7296);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t12 = (t0 + 9376);
    t13 = (t0 + 9376);
    t14 = (t13 + 72U);
    t16 = *((char **)t14);
    t17 = (t0 + 9376);
    t18 = (t17 + 64U);
    t20 = *((char **)t18);
    t21 = (t0 + 10656);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t3, t15, t16, t20, 2, 1, t24, 32, 1);
    t25 = (t3 + 4);
    t7 = *((unsigned int *)t25);
    t38 = (!(t7));
    t26 = (t15 + 4);
    t8 = *((unsigned int *)t26);
    t39 = (!(t8));
    t40 = (t38 && t39);
    if (t40 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(262, ng2);
    t1 = (t0 + 7456);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t0 + 9536);
    t12 = (t0 + 9536);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t16 = (t0 + 9536);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t20 = (t0 + 10656);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t3, t15, t14, t18, 2, 1, t22, 32, 1);
    t24 = (t3 + 4);
    t7 = *((unsigned int *)t24);
    t37 = (!(t7));
    t25 = (t15 + 4);
    t8 = *((unsigned int *)t25);
    t38 = (!(t8));
    t39 = (t37 && t38);
    if (t39 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(263, ng2);
    t1 = (t0 + 7616);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t0 + 9696);
    t12 = (t0 + 9696);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t16 = (t0 + 9696);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t20 = (t0 + 10656);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t3, t15, t14, t18, 2, 1, t22, 32, 1);
    t24 = (t3 + 4);
    t7 = *((unsigned int *)t24);
    t37 = (!(t7));
    t25 = (t15 + 4);
    t8 = *((unsigned int *)t25);
    t38 = (!(t8));
    t39 = (t37 && t38);
    if (t39 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(264, ng2);
    t1 = (t0 + 10656);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = ((char*)((ng10)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t5, 32, t6, 32);
    t12 = (t0 + 10656);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 32);
    xsi_set_current_line(265, ng2);
    t1 = (t0 + 9216);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = ((char*)((ng9)));
    memset(t3, 0, 8);
    xsi_vlog_unsigned_add(t3, 4, t5, 4, t6, 4);
    t12 = (t0 + 9216);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 4);
    goto LAB14;

LAB16:    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t15);
    t41 = (t9 - t10);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t14, t13, 0, *((unsigned int *)t15), t42);
    goto LAB17;

LAB18:    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t15);
    t40 = (t9 - t10);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t15), t41);
    goto LAB19;

LAB20:    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t15);
    t40 = (t9 - t10);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t15), t41);
    goto LAB21;

LAB23:    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t15);
    t41 = (t9 - t10);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t12, t6, 0, *((unsigned int *)t15), t42);
    goto LAB24;

LAB25:    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t15);
    t40 = (t9 - t10);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t15), t41);
    goto LAB26;

LAB27:    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t15);
    t40 = (t9 - t10);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t15), t41);
    goto LAB28;

LAB30:    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t15);
    t41 = (t9 - t10);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t12, t6, 0, *((unsigned int *)t15), t42);
    goto LAB31;

LAB32:    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t15);
    t40 = (t9 - t10);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t15), t41);
    goto LAB33;

LAB34:    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t15);
    t40 = (t9 - t10);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t15), t41);
    goto LAB35;

}

static void Always_280_3(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 12392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(280, ng2);
    t2 = (t0 + 17920);
    *((int *)t2) = 1;
    t3 = (t0 + 12424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(281, ng2);

LAB5:    xsi_set_current_line(282, ng2);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 10816);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(283, ng2);
    t2 = (t0 + 2576U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t2) == 0)
        goto LAB6;

LAB8:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB9:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(284, ng2);
    t2 = (t0 + 2896U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t2) == 0)
        goto LAB13;

LAB15:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB16:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(285, ng2);
    t2 = (t0 + 3216U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t2) == 0)
        goto LAB20;

LAB22:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB23:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB24;

LAB25:
LAB26:
LAB19:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(283, ng2);
    t17 = ((char*)((ng9)));
    t18 = (t0 + 7776);
    xsi_vlogvar_wait_assign_value(t18, t17, 0, 0, 3, 0LL);
    goto LAB12;

LAB13:    *((unsigned int *)t6) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(284, ng2);
    t17 = ((char*)((ng11)));
    t18 = (t0 + 7776);
    xsi_vlogvar_wait_assign_value(t18, t17, 0, 0, 3, 0LL);
    goto LAB19;

LAB20:    *((unsigned int *)t6) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(285, ng2);
    t17 = ((char*)((ng12)));
    t18 = (t0 + 7776);
    xsi_vlogvar_wait_assign_value(t18, t17, 0, 0, 3, 0LL);
    goto LAB26;

}

static void Always_291_4(char *t0)
{
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    int t15;
    char *t17;

LAB0:    t1 = (t0 + 12640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(291, ng2);
    t2 = (t0 + 17936);
    *((int *)t2) = 1;
    t3 = (t0 + 12672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(292, ng2);

LAB5:    xsi_set_current_line(293, ng2);
    t4 = (t0 + 10816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(294, ng2);

LAB9:    xsi_set_current_line(295, ng2);
    t13 = ((char*)((ng13)));
    t14 = (t0 + 10816);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    xsi_set_current_line(296, ng2);
    t2 = (t0 + 7776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB10:    t5 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng12)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t15 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB8;

LAB11:    xsi_set_current_line(297, ng2);
    t6 = (t0 + 10336);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    t14 = ((char*)((ng10)));
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t13, 32, t14, 32);
    t17 = (t0 + 10336);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 32);
    goto LAB17;

LAB13:    xsi_set_current_line(298, ng2);
    t3 = (t0 + 10496);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng10)));
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t6, 32, t7, 32);
    t13 = (t0 + 10496);
    xsi_vlogvar_assign_value(t13, t16, 0, 0, 32);
    goto LAB17;

LAB15:    xsi_set_current_line(299, ng2);
    t3 = (t0 + 10656);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng10)));
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t6, 32, t7, 32);
    t13 = (t0 + 10656);
    xsi_vlogvar_assign_value(t13, t16, 0, 0, 32);
    goto LAB17;

}

static void Always_308_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 12888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(308, ng2);
    t2 = (t0 + 17952);
    *((int *)t2) = 1;
    t3 = (t0 + 12920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(309, ng2);

LAB5:    xsi_set_current_line(310, ng2);
    t4 = (t0 + 7936);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(310, ng2);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB8:    xsi_set_current_line(311, ng2);
    t2 = (t0 + 8576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(311, ng2);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB11:    xsi_set_current_line(312, ng2);
    t2 = (t0 + 9216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(312, ng2);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(310, ng2);
    t13 = ((char*)((ng9)));
    t14 = (t0 + 6336);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    goto LAB8;

LAB9:    xsi_set_current_line(311, ng2);
    t6 = ((char*)((ng9)));
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB11;

LAB12:    xsi_set_current_line(312, ng2);
    t6 = ((char*)((ng9)));
    t7 = (t0 + 6656);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB14;

}

static void Always_316_6(char *t0)
{
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;

LAB0:    t1 = (t0 + 13136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(316, ng2);
    t2 = (t0 + 17968);
    *((int *)t2) = 1;
    t3 = (t0 + 13168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(317, ng2);

LAB5:    xsi_set_current_line(319, ng2);
    t4 = (t0 + 6336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(320, ng2);
    t2 = (t0 + 6496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(321, ng2);
    t2 = (t0 + 6656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(319, ng2);
    t13 = (t0 + 7936);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng9)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 4, t15, 4, t16, 4);
    t18 = (t0 + 7936);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 4);
    goto LAB8;

LAB9:    xsi_set_current_line(320, ng2);
    t6 = (t0 + 8576);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    t14 = ((char*)((ng9)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 4, t13, 4, t14, 4);
    t15 = (t0 + 8576);
    xsi_vlogvar_assign_value(t15, t17, 0, 0, 4);
    goto LAB11;

LAB12:    xsi_set_current_line(321, ng2);
    t6 = (t0 + 9216);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    t14 = ((char*)((ng9)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 4, t13, 4, t14, 4);
    t15 = (t0 + 9216);
    xsi_vlogvar_assign_value(t15, t17, 0, 0, 4);
    goto LAB14;

}

void Monitor_273_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 10016);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 13192);
    t5 = (t0 + 17984);
    xsi_vlog_fmonitor(*((unsigned int *)t3), (void *)Monitor_273_2_Func, t4, t5);

LAB1:    return;
}

static void impl1_execute(char *t0)
{
    char t4[16];
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 13632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 18000);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t3 = (t0 + 10976);
    t5 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t6 = ((char*)((ng1)));
    xsi_vlog_unsigned_multiply(t7, 64, t4, 64, t6, 32);
    xsi_vlogimplicitvar_assign_value(t3, t7, 64);
    goto LAB2;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 13880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8096);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 8096);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 8096);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 10336);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t6, 3, t5, t9, t12, 2, 1, t15, 32, 1);
    t16 = ((char*)((ng13)));
    xsi_vlogtype_concat(t3, 32, 32, 2U, t16, 29, t6, 3);
    t17 = (t0 + 18240);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t3, 8);
    xsi_driver_vfirst_trans(t17, 0, 31);
    t22 = (t0 + 18016);
    *((int *)t22) = 1;

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 14128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng9)));
    t3 = (t0 + 18304);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig3_execute(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 14376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 8416);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 8416);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 10336);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t5, 4, t4, t8, t11, 2, 1, t14, 32, 1);
    t15 = (t0 + 18368);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 15U;
    t21 = t20;
    t22 = (t5 + 4);
    t23 = *((unsigned int *)t5);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 0, 3);
    t28 = (t0 + 18032);
    *((int *)t28) = 1;

LAB1:    return;
}

static void implSig4_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 14624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng15)));
    t3 = (t0 + 18432);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig5_execute(char *t0)
{
    char t5[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 14872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 8256);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 8256);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 10336);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t5, 4, t4, t8, t11, 2, 1, t14, 32, 1);
    t16 = (t0 + 8256);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t15, 1, t5, t18, 2, t19, 32, 1);
    t20 = (t0 + 18496);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t15 + 4);
    t28 = *((unsigned int *)t15);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0);
    t33 = (t0 + 18048);
    *((int *)t33) = 1;

LAB1:    return;
}

static void implSig6_execute(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 15120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8736);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 8736);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 8736);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 10496);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t6, 3, t5, t9, t12, 2, 1, t15, 32, 1);
    t16 = ((char*)((ng13)));
    xsi_vlogtype_concat(t3, 32, 32, 2U, t16, 29, t6, 3);
    t17 = (t0 + 18560);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t3, 8);
    xsi_driver_vfirst_trans(t17, 0, 31);
    t22 = (t0 + 18064);
    *((int *)t22) = 1;

LAB1:    return;
}

static void implSig7_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 15368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng11)));
    t3 = (t0 + 18624);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig8_execute(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 15616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 9056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 9056);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 9056);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 10496);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t5, 4, t4, t8, t11, 2, 1, t14, 32, 1);
    t15 = (t0 + 18688);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 15U;
    t21 = t20;
    t22 = (t5 + 4);
    t23 = *((unsigned int *)t5);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 0, 3);
    t28 = (t0 + 18080);
    *((int *)t28) = 1;

LAB1:    return;
}

static void implSig9_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 15864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng16)));
    t3 = (t0 + 18752);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig10_execute(char *t0)
{
    char t5[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 16112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 8896);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 8896);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 10496);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t5, 4, t4, t8, t11, 2, 1, t14, 32, 1);
    t16 = (t0 + 8896);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t15, 1, t5, t18, 2, t19, 32, 1);
    t20 = (t0 + 18816);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t15 + 4);
    t28 = *((unsigned int *)t15);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0);
    t33 = (t0 + 18096);
    *((int *)t33) = 1;

LAB1:    return;
}

static void implSig11_execute(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 16360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 9376);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 9376);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 9376);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 10656);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t6, 3, t5, t9, t12, 2, 1, t15, 32, 1);
    t16 = ((char*)((ng13)));
    xsi_vlogtype_concat(t3, 32, 32, 2U, t16, 29, t6, 3);
    t17 = (t0 + 18880);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t3, 8);
    xsi_driver_vfirst_trans(t17, 0, 31);
    t22 = (t0 + 18112);
    *((int *)t22) = 1;

LAB1:    return;
}

static void implSig12_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 16608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng12)));
    t3 = (t0 + 18944);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig13_execute(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 16856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 9696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 9696);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 9696);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 10656);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t5, 4, t4, t8, t11, 2, 1, t14, 32, 1);
    t15 = (t0 + 19008);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 15U;
    t21 = t20;
    t22 = (t5 + 4);
    t23 = *((unsigned int *)t5);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 0, 3);
    t28 = (t0 + 18128);
    *((int *)t28) = 1;

LAB1:    return;
}

static void implSig14_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 17104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng17)));
    t3 = (t0 + 19072);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig15_execute(char *t0)
{
    char t5[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 17352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 9536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 9536);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 9536);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 10656);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t5, 4, t4, t8, t11, 2, 1, t14, 32, 1);
    t16 = (t0 + 9536);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t15, 1, t5, t18, 2, t19, 32, 1);
    t20 = (t0 + 19136);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t15 + 4);
    t28 = *((unsigned int *)t15);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0);
    t33 = (t0 + 18144);
    *((int *)t33) = 1;

LAB1:    return;
}

static void implSig16_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 17600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2416U);
    t4 = *((char **)t2);
    t2 = (t0 + 2736U);
    t5 = *((char **)t2);
    t2 = (t0 + 3056U);
    t6 = *((char **)t2);
    xsi_vlogtype_concat(t3, 3, 3, 3U, t6, 1, t5, 1, t4, 1);
    t2 = (t0 + 19200);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 7U;
    t12 = t11;
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t2, 0, 2);
    t19 = (t0 + 18160);
    *((int *)t19) = 1;

LAB1:    return;
}


extern void work_m_00000000001663083813_3717711333_init()
{
	static char *pe[] = {(void *)Always_201_0,(void *)Initial_235_1,(void *)Always_280_3,(void *)Always_291_4,(void *)Always_308_5,(void *)Always_316_6,(void *)Monitor_273_2,(void *)impl1_execute,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute,(void *)implSig4_execute,(void *)implSig5_execute,(void *)implSig6_execute,(void *)implSig7_execute,(void *)implSig8_execute,(void *)implSig9_execute,(void *)implSig10_execute,(void *)implSig11_execute,(void *)implSig12_execute,(void *)implSig13_execute,(void *)implSig14_execute,(void *)implSig15_execute,(void *)implSig16_execute};
	xsi_register_didat("work_m_00000000001663083813_3717711333", "isim/simoutput.exe.sim/work/m_00000000001663083813_3717711333.didat");
	xsi_register_executes(pe);
}
