// 函数: __getenv_helper_nolock
// 地址: 0x6c2cb2
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = data_796ec8

if (data_798214 == 0)
    return nullptr

int32_t edi
int32_t var_c_1 = edi
void* result

if (esi != 0)
    if (arg1 == 0)
    labelid_3:
        result = nullptr
    else
    label_6c2cf4:
        void* eax_2 = _strlen(arg1)
        
        while (true)
            char* eax_6 = *esi
            
            if (eax_6 == 0)
                goto label_6c2d2b_2
            
            if (_strlen(eax_6) u> eax_2)
                char* eax_4 = *esi
                
                if (*(eax_4 + eax_2) == 0x3d && __mbsnicoll(eax_4, arg1, eax_2) == 0)
                    result = *esi + eax_2 + 1
                    break
            
            esi = &esi[1]
else
    PSTR ecx
    
    if (data_796ed0 == esi)
    label_6c2d2b:
        result = nullptr
    else if (sub_6c4f23(ecx) != 0)
    label_6c2d2b_1:
        result = nullptr
    else
        esi = data_796ec8
        
        if (esi != 0 && arg1 != 0)
            goto label_6c2cf4
        
    label_6c2d2b_2:
        result = nullptr

return result
