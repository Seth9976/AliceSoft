// 函数: sub_41d470
// 地址: 0x41d470
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = fconvert.t(arg5)
int32_t eax = sub_70c710(fconvert.t(0.20000000298023224) * x87_r7)
int32_t eax_1 = sub_70c710(fconvert.t(arg4) * fconvert.t(0.30000001192092896))
int32_t var_10 = 0

if (eax_1 s> 0)
    int32_t eax_10
    
    do
        void* eax_3 = sub_5f7370(*data_797da0, arg1)
        
        if (eax_3 != 0)
            void* eax_4 = sub_5f3790(eax_3, arg9)
            
            if (eax_4 != 0)
                long double x87_r7_2 = fconvert.t(fconvert.s(float.t(var_10)))
                long double x87_r7_4 =
                    x87_r7_2 + fconvert.t(fconvert.s(fconvert.t(0.5) * x87_r7 + fconvert.t(arg3)))
                int32_t eax_5 = sub_70c710(x87_r7_2 + fconvert.t(arg2))
                int32_t eax_7 = sub_70c710(float.t(eax) + x87_r7_4)
                sub_5e3db0(eax_4, eax_5, sub_70c710(x87_r7_4), eax_5, eax_7, arg6, arg7, arg8, 0xff)
        
        eax_10 = var_10 + 1
        var_10 = eax_10
    while (eax_10 s< eax_1)
    x87_r7 = fconvert.t(arg5)

int32_t ebx_2 = sub_70c710(fconvert.t(arg4) * fconvert.t(0.69999998807907104))
int32_t var_4_1 = ebx_2
float ebp_1 = 0f
arg2 = sub_70c710(float.t(var_10) + fconvert.t(arg2))
arg5 = 0f

if (ebx_2 s<= 0)
    return 

do
    void* eax_13 = sub_5f7370(*data_797da0, arg1)
    
    if (eax_13 != 0)
        void* eax_14 = sub_5f3790(eax_13, arg9)
        
        if (eax_14 != 0)
            long double x87_r7_8 =
                fconvert.t(fconvert.s(x87_r7 * fconvert.t(0.80000001192092896) + fconvert.t(arg3)))
                - float.t(arg5)
            int32_t ebx_4 = arg2 i+ ebp_1
            int32_t eax_16 = sub_70c710(float.t(eax) + x87_r7_8)
            sub_5e3db0(eax_14, ebx_4, sub_70c710(x87_r7_8), ebx_4, eax_16, arg6, arg7, arg8, 0xff)
            ebx_2 = var_4_1
    
    ebp_1 += 1
    arg5 = ebp_1
while (ebp_1 s< ebx_2)
