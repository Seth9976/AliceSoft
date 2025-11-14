// 函数: sub_6c1530
// 地址: 0x6c1530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t eax_1 = data_78c474 ^ &__saved_ebp
int32_t edi
int32_t var_34 = edi
int32_t eax_4 = sub_6bb7eb()
int32_t var_18 = 0
int32_t result

if (data_797bd8 != 0)
label_6c15e3:
    int32_t eax_15 = data_797be4
    
    if (eax_15 == eax_4 || data_797be8 == eax_4)
    label_6c163c:
        int32_t eax_20 = data_797bdc
        
        if (eax_20 != eax_4)
            int32_t eax_21 = DecodePointer(eax_20)
            
            if (eax_21 != 0)
                int32_t eax_22 = eax_21()
                var_18 = eax_22
                
                if (eax_22 != 0)
                    int32_t eax_23 = data_797be0
                    
                    if (eax_23 != eax_4)
                        int32_t eax_24 = DecodePointer(eax_23)
                        
                        if (eax_24 != 0)
                            var_18 = eax_24(var_18)
    else
        int32_t eax_16 = DecodePointer(eax_15)
        int32_t eax_17 = DecodePointer(data_797be8)
        
        if (eax_16 == 0 || eax_17 == 0)
            goto label_6c163c
        
        int32_t eax_18 = eax_16()
        int32_t eax_19
        void var_28
        void var_14
        
        if (eax_18 != 0)
            eax_19 = eax_17(eax_18, 1, &var_14, 0xc, &var_28)
        char var_c
        
        if (eax_18 != 0 && eax_19 != 0 && (var_c & 1) != 0)
            goto label_6c163c
        
        arg3 |= 0x200000
    
    int32_t eax_26 = DecodePointer(data_797bd8)
    
    if (eax_26 == 0)
        result = 0
    else
        result = eax_26(var_18, arg1, arg2, arg3)
else
    HMODULE hModule = LoadLibraryW(u"USER32.DLL")
    
    if (hModule == 0)
        result = 0
    else
        int32_t eax_5 = GetProcAddress(hModule, "MessageBoxW")
        
        if (eax_5 != 0)
            data_797bd8 = EncodePointer(eax_5)
            data_797bdc = EncodePointer(GetProcAddress(hModule, "GetActiveWindow"))
            data_797be0 = EncodePointer(GetProcAddress(hModule, "GetLastActivePopup"))
            int32_t eax_12 = EncodePointer(GetProcAddress(hModule, "GetUserObjectInformationW"))
            data_797be8 = eax_12
            
            if (eax_12 != 0)
                data_797be4 = EncodePointer(GetProcAddress(hModule, "GetProcessWindowStation"))
            
            goto label_6c15e3
        
        result = 0

sub_6b4885(eax_1 ^ &__saved_ebp)
return result
