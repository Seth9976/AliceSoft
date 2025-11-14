// 函数: sub_6d1170
// 地址: 0x6d1170
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ebx = arg2
int32_t* result = arg3
int32_t ecx = *result

if (ecx != 0 && ecx s> 0)
    int32_t* result_1 = result
    int32_t i
    
    do
        if (arg1[0xf] != 0)
            result = sub_6d0080(arg1, zx.d(*ebx), 1)
        else
            result = sub_6cffa0(arg1, zx.d(*ebx), 1)
        
        if (result != 0)
            break
        
        ebx = &ebx[1]
        i = *result_1 - 1
        *result_1 = i
    while (i s> 0)

return result
