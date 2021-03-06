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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    xilinxcorelib_ver_m_00000000001358910285_1942005516_init();
    xilinxcorelib_ver_m_00000000001687936702_3218604958_init();
    xilinxcorelib_ver_m_00000000000277421008_2920749608_init();
    xilinxcorelib_ver_m_00000000001603977570_3776367487_init();
    work_m_00000000002489990758_0317860448_init();
    work_m_00000000001045438096_0301420127_init();
    work_m_00000000004252758818_0254784918_init();
    work_m_00000000003874899889_1938225339_init();
    work_m_00000000004288248229_3459862827_init();
    work_m_00000000002160259750_0886308060_init();
    work_m_00000000000390974477_0111454911_init();
    work_m_00000000002445338456_3984864128_init();
    work_m_00000000002906335632_3979377396_init();
    work_m_00000000002300938375_3865503045_init();
    work_m_00000000003065592373_4251429752_init();
    work_m_00000000001519432258_3647734634_init();
    work_m_00000000003065592373_0460957459_init();
    work_m_00000000000275179109_3761326277_init();
    work_m_00000000002432989009_3508565487_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002432989009_3508565487");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
