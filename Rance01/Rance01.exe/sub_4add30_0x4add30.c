// 函数: sub_4add30
// 地址: 0x4add30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = arg4[1]
int32_t edx = *arg4
int32_t eax_2 = (ecx - edx) s>> 4

if (eax_2 u> arg1)
    eax_2 = edx + arg1 * 0x10
    
    if (eax_2 != ecx)
        int32_t var_c_1 = arg3
        int32_t* eax_3 = sub_4f2850(eax_2, arg3, ecx, ecx)
        int32_t eax_6 = sub_663180(eax_3, arg4[1])
        arg4[1] = eax_3
        return eax_6
else if (eax_2 u< arg1)
    sub_65a110(arg4, arg1 - eax_2)
    int32_t* eax_7 = arg4[1]
    int32_t var_c_3 = arg3
    int32_t edx_6 = (eax_7 - *arg4) s>> 4
    sub_581330(eax_7, edx_6, arg1 - edx_6, eax_7)
    eax_2 = arg4[1]
    arg4[1] = ((arg1 - ((eax_2 - *arg4) s>> 4)) << 4) + eax_2

return eax_2
