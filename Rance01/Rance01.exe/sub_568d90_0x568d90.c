// 函数: sub_568d90
// 地址: 0x568d90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg2

if (*(ebp + 0x2a1) != 0)
    return DefWindowProcA(arg1, 0x214, arg3, arg4)

if ((*(*(ebp + 0x128) + 0x10))() s<= 0)
    return DefWindowProcA(arg1, 0x214, arg3, arg4)

int32_t* lParam = arg4

if ((*(*(ebp + 0x128) + 0x14))() s<= 0)
    return DefWindowProcA(arg1, 0x214, arg3, lParam)

int32_t edi_1 = *lParam
void* edx_3 = lParam[2]
int32_t ebx = lParam[1]
int32_t eax_8 = lParam[3]
int32_t var_c = edi_1
arg2 = edx_3
int32_t var_10 = ebx
int32_t var_14 = eax_8
int32_t eax_9 = GetSystemMetrics(SM_YVIRTUALSCREEN)

if (ebx s< eax_9)
    var_14 += eax_9 - ebx
    var_10 = eax_9
    ebx = eax_9

int32_t eax_10 = GetSystemMetrics(SM_XVIRTUALSCREEN)

if (edi_1 s< eax_10)
    arg2 += eax_10 - edi_1
    var_c = eax_10
    edi_1 = eax_10

int32_t var_8
int32_t var_4
sub_567ba0(var_14 - ebx, arg2 - edi_1, &var_4, &var_8)
int32_t ebx_1
int32_t edi_3

if (*(ebp + 0xa4) != 0)
    edi_3 = var_8
    ebx_1 = var_4
else
    int32_t eax_14 = (*(*(ebp + 0x128) + 0x10))()
    ebx_1 = var_4
    
    if (ebx_1 s< eax_14)
        if (arg3 == 1 || arg3 == 4 || arg3 == 7)
            var_c = edi_1 + ebx_1 - (*(*(ebp + 0x128) + 0x10))()
        else
            int32_t eax_21 = (*(*(ebp + 0x128) + 0x10))() - ebx_1
            arg2 += eax_21
        
        ebx_1 = (*(*(ebp + 0x128) + 0x10))()
    
    int32_t eax_27 = (*(*(ebp + 0x128) + 0x14))()
    edi_3 = var_8
    
    if (edi_3 s< eax_27)
        if (arg3 u< 3 || arg3 u> 5)
            int32_t eax_33 = (*(*(ebp + 0x128) + 0x14))() - edi_3
            var_14 += eax_33
        else
            int32_t edi_4 = edi_3 - (*(*(ebp + 0x128) + 0x14))()
            var_10 += edi_4
        
        edi_3 = (*(*(ebp + 0x128) + 0x14))()

char var_38_3
char var_38_4
int32_t* var_34_5
int32_t* var_34_8
int32_t* var_30_7
int32_t* var_30_10
int32_t* var_2c_6
int32_t* var_2c_9
int32_t* var_28_7
int32_t* var_28_10
int32_t eax_93
int32_t eax_125

if (*(ebp + 0xa4) == 0 && arg3 - 1 u<= 7)
    switch (arg3)
        case 1, 2
            var_4 = (*(*(ebp + 0x128) + 0x14))()
            int32_t eax_41 = (*(*(ebp + 0x128) + 0x10))()
            int32_t temp0_1 = divs.dp.d(sx.q(var_4 * ebx_1), eax_41)
            var_14 += temp0_1 - edi_3
            sub_569520(ebp, ebx_1, temp0_1, arg3 == 1, &var_c, &arg2, &var_10, &var_14)
        case 3, 6
            var_4 = (*(*(ebp + 0x128) + 0x10))()
            int32_t eax_49 = (*(*(ebp + 0x128) + 0x14))()
            int32_t temp0_2 = divs.dp.d(sx.q(var_4 * edi_3), eax_49)
            arg2 += temp0_2 - ebx_1
            sub_569660(ebp, edi_3, temp0_2, arg3 == 3, &var_c, &arg2, &var_10, &var_14)
        case 4
            if (divs.dp.d(sx.q((*(*(ebp + 0x128) + 0x14))() * ebx_1), (*(*(ebp + 0x128) + 0x10))())
                    s>= edi_3)
                eax_125 = divs.dp.d(sx.q((*(*(ebp + 0x128) + 0x14))() * ebx_1), 
                    (*(*(ebp + 0x128) + 0x10))())
                var_28_10 = &var_14
                var_2c_9 = &var_10
                var_30_10 = &arg2
                var_34_8 = &var_c
                var_38_4 = 1
                goto label_569405
            
            eax_93 =
                divs.dp.d(sx.q((*(*(ebp + 0x128) + 0x10))() * edi_3), (*(*(ebp + 0x128) + 0x14))())
            var_28_7 = &var_14
            var_2c_6 = &var_10
            var_30_7 = &arg2
            var_34_5 = &var_c
            var_38_3 = 1
            goto label_569397
        case 5
            if (divs.dp.d(sx.q((*(*(ebp + 0x128) + 0x14))() * ebx_1), (*(*(ebp + 0x128) + 0x10))())
                    s>= edi_3)
                eax_125 = divs.dp.d(sx.q((*(*(ebp + 0x128) + 0x14))() * ebx_1), 
                    (*(*(ebp + 0x128) + 0x10))())
                var_28_10 = &var_14
                var_2c_9 = &var_10
                var_30_10 = &arg2
                var_34_8 = &var_c
                var_38_4 = 0
            label_569405:
                var_10 += edi_3 - eax_125
                sub_569480(ebp, ebx_1, eax_125, var_38_4, var_34_8, var_30_10, var_2c_9, var_28_10)
                int32_t eax_149 = GetSystemMetrics(SM_YVIRTUALSCREEN)
                int32_t ecx_56 = var_10
                
                if (ecx_56 s< eax_149)
                    var_14 += eax_149 - ecx_56
                    var_10 = eax_149
            else
                int32_t temp0_10 = divs.dp.d(sx.q((*(*(ebp + 0x128) + 0x10))() * edi_3), 
                    (*(*(ebp + 0x128) + 0x14))())
                arg2 += temp0_10 - ebx_1
                sub_569660(ebp, edi_3, temp0_10, 1, &var_c, &arg2, &var_10, &var_14)
        case 7
            if (divs.dp.d(sx.q((*(*(ebp + 0x128) + 0x14))() * ebx_1), (*(*(ebp + 0x128) + 0x10))())
                    s>= edi_3)
                int32_t temp0_8 = divs.dp.d(sx.q((*(*(ebp + 0x128) + 0x14))() * ebx_1), 
                    (*(*(ebp + 0x128) + 0x10))())
                var_14 += temp0_8 - edi_3
                sub_569520(ebp, ebx_1, temp0_8, 1, &var_c, &arg2, &var_10, &var_14)
            else
                eax_93 = divs.dp.d(sx.q((*(*(ebp + 0x128) + 0x10))() * edi_3), 
                    (*(*(ebp + 0x128) + 0x14))())
                var_28_7 = &var_14
                var_2c_6 = &var_10
                var_30_7 = &arg2
                var_34_5 = &var_c
                var_38_3 = 0
            label_569397:
                var_c += ebx_1 - eax_93
                sub_5695c0(ebp, edi_3, eax_93, var_38_3, var_34_5, var_30_7, var_2c_6, var_28_7)
                int32_t eax_141 = GetSystemMetrics(SM_XVIRTUALSCREEN)
                int32_t ecx_53 = var_c
                
                if (ecx_53 s< eax_141)
                    arg2 += eax_141 - ecx_53
                    var_c = eax_141
        case 8
            if (divs.dp.d(sx.q((*(*(ebp + 0x128) + 0x14))() * ebx_1), (*(*(ebp + 0x128) + 0x10))())
                    s>= edi_3)
                int32_t temp0_5 = divs.dp.d(sx.q((*(*(ebp + 0x128) + 0x14))() * ebx_1), 
                    (*(*(ebp + 0x128) + 0x10))())
                var_14 += temp0_5 - edi_3
                sub_569520(ebp, ebx_1, temp0_5, 0, &var_c, &arg2, &var_10, &var_14)
            else
                int32_t temp0_4 = divs.dp.d(sx.q((*(*(ebp + 0x128) + 0x10))() * edi_3), 
                    (*(*(ebp + 0x128) + 0x14))())
                arg2 += temp0_4 - ebx_1
                sub_569660(ebp, edi_3, temp0_4, 0, &var_c, &arg2, &var_10, &var_14)
void* edx_80 = arg2
*arg4 = var_c
int32_t ecx_58 = var_10
*(arg4 + 8) = edx_80
int32_t edx_81 = var_14
*(arg4 + 4) = ecx_58
*(arg4 + 0xc) = edx_81
return 1
