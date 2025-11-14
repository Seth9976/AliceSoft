// 函数: sub_54d000
// 地址: 0x54d000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t esi = **(arg1 + 0x2b0)
int32_t* result

if (esi != 0xffffffff && sub_552880(arg1 + 0x1dc, esi).b == 0)
    result = sub_53d0e0(arg1, 0x750fac, esi, arg5, arg4, arg3, __return_addr)
    
    if (result.b == 0)
        return result

result.b = 1
return result
