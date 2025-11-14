// 函数: sub_616930
// 地址: 0x616930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL result = arg4
int32_t ebx = 0
HDC hdc = result
char* lpString_1 = arg2
int32_t var_48 = 0

if (*arg2 != 0)
    while (true)
        void* eax_5 = sub_616b90(arg2)
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        sub_401270(&var_2c, eax_5 - arg2, arg2)
        int32_t var_4 = 0
        result = (*(*arg3 + 0xa0))(&var_2c)
        int32_t var_4_1 = 0xffffffff
        char var_49_1 = result.b
        
        if (var_18_1 u>= 0x10)
            int32_t var_64_3 = var_2c.d
            result = sub_6b4d5b()
        
        COLORREF color
        
        if (var_49_1 == 0)
            color = arg3[0x2c]
        else
            color = 0xff0000
        
        char* lpString = lpString_1
        COLORREF color_1 = arg3[0x2c]
        
        if (lpString u< eax_5)
            do
                if ((*(*arg3 + 0xa4))(lpString) == 0)
                    if (arg3[0x2c] != color)
                        SetTextColor(arg3[0x29], color)
                        arg3[0x2c] = color
                else if (arg3[0x2c] != 0x8000)
                    SetTextColor(arg3[0x29], 0x8000)
                    arg3[0x2c] = 0x8000
                
                char eax_8 = *lpString
                
                if (eax_8 u< 0x81)
                    if (eax_8 u< 0xe0)
                        goto label_616aa7
                    
                    goto label_616a8c
                
                if (eax_8 u<= 0x9f || eax_8 u>= 0xe0)
                label_616a8c:
                    result = TextOutA(hdc, ebx + arg5, arg6, lpString, 2)
                    ebx += arg3[0x2d]
                    lpString = &lpString[2]
                    var_48 += 2
                else
                label_616aa7:
                    
                    if (eax_8 != 9)
                        TextOutA(hdc, ebx + arg5, arg6, lpString, 1)
                        int32_t eax_17
                        int32_t edx_9
                        edx_9:eax_17 = sx.q(arg3[0x2d])
                        result = (eax_17 - edx_9) s>> 1
                        ebx += result
                        lpString = &lpString[1]
                        var_48 += 1
                    else
                        result = 4 - (var_48 & 3)
                        int16_t string = 0x20
                        
                        if (result s> 0)
                            var_48 += result
                            BOOL esi_3 = result
                            BOOL i
                            
                            do
                                TextOutA(hdc, ebx + arg5, arg6, &string, 1)
                                int32_t eax_13
                                int32_t edx_6
                                edx_6:eax_13 = sx.q(arg3[0x2d])
                                result = (eax_13 - edx_6) s>> 1
                                ebx += result
                                i = esi_3
                                esi_3 -= 1
                            while (i != 1)
                        
                        lpString = &lpString[1]
            while (lpString u< eax_5)
            
            lpString_1 = lpString
        
        if (arg3[0x2c] != color_1)
            result = SetTextColor(arg3[0x29], color_1)
            arg3[0x2c] = color_1
        
        if (*lpString == 0)
            break
        
        arg2 = lpString_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
