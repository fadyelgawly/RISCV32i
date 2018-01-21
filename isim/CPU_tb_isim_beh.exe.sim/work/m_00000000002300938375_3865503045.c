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
static const char *ng0 = "C:/.Xilinx/RiscV_CPU_G7/ClockDivider.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {2, 0};
static unsigned int ng3[] = {1U, 0U};



static void Always_14_0(char *t0)
{
    char t16[8];
    char t17[8];
    char t18[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 3896);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng0);

LAB5:    xsi_set_current_line(15, ng0);
    t4 = (t0 + 1616U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(34, ng0);

LAB42:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2176);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2336);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2496);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2656);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(15, ng0);

LAB9:    xsi_set_current_line(16, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2176);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(18, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB10:    xsi_set_current_line(20, ng0);

LAB13:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 2496);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 472);
    t13 = *((char **)t12);
    t12 = ((char*)((ng2)));
    t14 = (t0 + 608);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_multiply(t16, 32, t12, 32, t15, 32);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_divide(t17, 32, t13, 32, t16, 32);
    memset(t18, 0, 8);
    t14 = (t11 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t17);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t14);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB17;

LAB14:    if (t29 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t18) = 1;

LAB17:    t33 = (t18 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t18);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t4, 32, t5, 32);
    t11 = (t0 + 2496);
    xsi_vlogvar_assign_value(t11, t16, 0, 0, 32);

LAB20:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t11 = *((char **)t5);
    t5 = ((char*)((ng2)));
    t12 = (t0 + 744);
    t13 = *((char **)t12);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_multiply(t16, 32, t5, 32, t13, 32);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_divide(t17, 32, t11, 32, t16, 32);
    memset(t18, 0, 8);
    t12 = (t4 + 4);
    t14 = (t17 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t17);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t20 = (t9 ^ t10);
    t21 = (t8 | t20);
    t22 = *((unsigned int *)t12);
    t23 = *((unsigned int *)t14);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB31;

LAB28:    if (t24 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t18) = 1;

LAB31:    t19 = (t18 + 4);
    t27 = *((unsigned int *)t19);
    t28 = (~(t27));
    t29 = *((unsigned int *)t18);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t4, 32, t5, 32);
    t11 = (t0 + 2656);
    xsi_vlogvar_assign_value(t11, t16, 0, 0, 32);

LAB34:    goto LAB12;

LAB16:    t32 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(21, ng0);

LAB21:    xsi_set_current_line(22, ng0);
    t40 = (t0 + 2176);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t39, 0, 8);
    t43 = (t42 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t43) == 0)
        goto LAB22;

LAB24:    t49 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t49) = 1;

LAB25:    t50 = (t39 + 4);
    t51 = (t42 + 4);
    t52 = *((unsigned int *)t42);
    t53 = (~(t52));
    *((unsigned int *)t39) = t53;
    *((unsigned int *)t50) = 0;
    if (*((unsigned int *)t51) != 0)
        goto LAB27;

LAB26:    t58 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t58 & 1U);
    t59 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t59 & 1U);
    t60 = (t0 + 2176);
    xsi_vlogvar_assign_value(t60, t39, 0, 0, 1);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB20;

LAB22:    *((unsigned int *)t39) = 1;
    goto LAB25;

LAB27:    t54 = *((unsigned int *)t39);
    t55 = *((unsigned int *)t51);
    *((unsigned int *)t39) = (t54 | t55);
    t56 = *((unsigned int *)t50);
    t57 = *((unsigned int *)t51);
    *((unsigned int *)t50) = (t56 | t57);
    goto LAB26;

LAB30:    t15 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(27, ng0);

LAB35:    xsi_set_current_line(28, ng0);
    t32 = (t0 + 2336);
    t33 = (t32 + 56U);
    t40 = *((char **)t33);
    memset(t39, 0, 8);
    t41 = (t40 + 4);
    t34 = *((unsigned int *)t41);
    t35 = (~(t34));
    t36 = *((unsigned int *)t40);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t41) == 0)
        goto LAB36;

LAB38:    t42 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t42) = 1;

LAB39:    t43 = (t39 + 4);
    t49 = (t40 + 4);
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    *((unsigned int *)t39) = t45;
    *((unsigned int *)t43) = 0;
    if (*((unsigned int *)t49) != 0)
        goto LAB41;

LAB40:    t53 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t53 & 1U);
    t54 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t54 & 1U);
    t50 = (t0 + 2336);
    xsi_vlogvar_assign_value(t50, t39, 0, 0, 1);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB34;

LAB36:    *((unsigned int *)t39) = 1;
    goto LAB39;

LAB41:    t46 = *((unsigned int *)t39);
    t47 = *((unsigned int *)t49);
    *((unsigned int *)t39) = (t46 | t47);
    t48 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t48 | t52);
    goto LAB40;

}


extern void work_m_00000000002300938375_3865503045_init()
{
	static char *pe[] = {(void *)Always_14_0};
	xsi_register_didat("work_m_00000000002300938375_3865503045", "isim/CPU_tb_isim_beh.exe.sim/work/m_00000000002300938375_3865503045.didat");
	xsi_register_executes(pe);
}
