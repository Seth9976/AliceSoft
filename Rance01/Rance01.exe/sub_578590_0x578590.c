// 函数: sub_578590
// 地址: 0x578590
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

(*(*arg3 + 0x24))(0)
(*(*arg1 + 0x94))(0)
(*(*arg1 + 0x98))(0)
(*(*arg1 + 0x8c))(0, 1)
(*(*arg1 + 0x84))(0)
(*(*arg1 + 0x90))(0, 0)
(*(*arg1 + 0x7c))(0, 0, 0)
int32_t* ecx_6 = *(arg4 + 4)

if (ecx_6 != 0 && (*(*ecx_6 + 0x20))() != 0)
    int32_t* ecx_7 = *(arg4 + 4)
    
    if (ecx_7 != 0)
        void* esi_1 = *ecx_7
        int32_t eax_11
        int32_t edx_8
        edx_8:eax_11 = muls.dp.d(0x55555556, (*(esi_1 + 0x1c))())
        *(arg4 + 4)
        (*(esi_1 + 0x24))(0, (edx_8 u>> 0x1f) + edx_8)
    
    return 1

return 0
