// 函数: sub_4f8530
// 地址: 0x4f8530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_4f8630(arg2)
sub_401180(&arg2[0x20], 0xffffffff, arg6, 0)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (sub_4f9240(arg2, arg3, arg4).b != 0)
    if (sub_5015b0(&arg2[0xb]) != 0)
        sub_4fae90(arg2)
    
    if (arg5 != 0 && arg1 s> 0)
        sub_4f8820(arg5, arg1, arg2)
    
    result = sub_4fb230(arg8, arg2, arg7)
    unimplemented  {call 0x4fb230}
    
    if (result.b != 0)
        int128_t* esi_1 = arg2[0x15]
        uint32_t edi_1 = arg2[0x14]
        
        if (edi_1 != esi_1)
            sub_4fe6c0(esi_1, edi_1, nullptr)
        
        sub_4fbc30(arg2)
        result = arg2[0x14]
        int32_t ecx_4 = arg2[0x15]
        
        if (result == ecx_4)
            result.b = 1
            return result
        
        while ((*result)->__offset(0x70).b == 0)
            result = &result[1]
            
            if (result == ecx_4)
                result.b = 1
                return result
        
        sub_4c2050(ecx_4, &arg2[0x2d])
        
        if (sub_4c20d0(&arg2[0x2d], arg2).b != 0)
            result = sub_4c2170(&arg2[0x2d])
            unimplemented  {call 0x4c2170}
            
            if (result.b != 0)
                arg2[0x2d].b = 1
                result.b = 1
                return result

result.b = 0
return result
