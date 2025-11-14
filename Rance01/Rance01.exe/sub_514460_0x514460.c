// 函数: sub_514460
// 地址: 0x514460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

(*(*arg1 + 0x94))(0)
(*(*arg1 + 0x98))(0)
(*(*arg1 + 0xa0))(0)
(*(*arg1 + 0x84))(6)
(*(*arg1 + 0x8c))(0, 5)
(*(*arg1 + 0x90))(0, 5)
(*(*arg1 + 0x7c))(0, 1, 0)
int32_t* ecx_7

if (*(arg2 + 0xac) != 0)
    ecx_7 = *(arg2 + 0x64)
else
    ecx_7 = *(arg2 + 0xc)

if (ecx_7 != 0 && (*(*ecx_7 + 0x24))(0) != 0)
    int32_t* ecx_8 = *(arg2 + 0x24)
    
    if (ecx_8 != 0 && (*(*ecx_8 + 0x20))() != 0 && (*(**(arg2 + 0x24) + 0x2c))() != 0)
        (*(*arg1 + 0x94))(1)
        (*(*arg1 + 0x98))(1)
        (*(*arg1 + 0xa0))(1)
        (*(*arg1 + 0x84))(0)
        (*(*arg1 + 0x8c))(0, 1)
        (*(*arg1 + 0x90))(0, 1)
        int32_t result
        result.b = 1
        return result

return 0
