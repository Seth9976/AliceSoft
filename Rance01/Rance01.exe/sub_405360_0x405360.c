// 函数: sub_405360
// 地址: 0x405360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 == 0)
    return arg3

void** ebx = arg1
int32_t edi = ebx[4]

if (edi != 0 && arg3 u<= edi)
    int32_t edi_1 = edi + 1 - arg3
    
    if (ebx[5] u>= 0x10)
        ebx = *ebx
    
    for (void* i = _memchr(ebx, *arg2, edi_1); i != 0; i = _memchr(ebx, *arg2, edi_1))
        if (sub_402320(arg3, i, arg2, arg3) == 0)
            void** ecx_4 = arg1
            
            if (ecx_4[5] u>= 0x10)
                ecx_4 = *ecx_4
            
            return i - ecx_4
        
        edi_1 = edi_1 + ebx - i - 1
        ebx = i + 1

return 0xffffffff
