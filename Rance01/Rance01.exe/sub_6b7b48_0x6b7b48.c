// 函数: sub_6b7b48
// 地址: 0x6b7b48
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t eax_1 = data_78c474 ^ &__saved_ebp
int32_t edi
int32_t var_20c = edi
uint32_t hFile = sub_6b7b22(arg1)
uint32_t edi_1 = hFile
uint32_t numberOfBytesWritten = edi_1

if (edi_1 != 0)
    int32_t eax_2 = __set_error_mode(3)
    
    if (eax_2 != 1)
        hFile = __set_error_mode(3)
    
    if (eax_2 == 1 || (hFile == 0 && data_78c470 == 1))
        hFile = GetStdHandle(STD_ERROR_HANDLE)
        
        if (hFile != 0 && hFile != 0xffffffff)
            char buffer[0x1f3]
            
            for (int32_t i = 0; i u< 0x1f4; i += 1)
                buffer[i] = *(edi_1 + (i << 1))
                
                if (*(edi_1 + (i << 1)) == 0)
                    break
            
            char var_9_1 = 0
            hFile = WriteFile(hFile, &buffer, _strlen(&buffer), &numberOfBytesWritten, nullptr)
    else if (arg1 != 0xfc)
        int32_t eax_3 = sub_6c17f9(0x797220, 0x314, u"Runtime Error!\n\nProgram: ")
        
        if (eax_3 != 0)
            int32_t var_220_3
            __builtin_memset(&var_220_3, 0, 0x14)
            sub_6b86b7()
            noreturn
        
        data_79745a = eax_3.w
        uint32_t eax_4 = GetModuleFileNameW(nullptr, &data_797252, 0x104)
        int32_t eax_5
        
        if (eax_4 == 0)
            eax_5 = sub_6c17f9(&data_797252, 0x2fb, u"<program name unknown>")
        
        if (eax_4 == 0 && eax_5 != 0)
        label_6b7c0c:
            int32_t var_220_1
            __builtin_memset(&var_220_1, 0, 0x14)
            sub_6b86b7()
            noreturn
        
        int32_t eax_7 = _wcslen(&data_797252) + 1
        int32_t eax_10
        
        if (eax_7 u> 0x3c)
            void* eax_9 = (_wcslen(&data_797252) << 1) + &data_7971dc
            eax_10 = sub_6c1711(eax_9, 0x2fb - ((eax_9 - &data_797252) s>> 1), &data_72b024, 3)
        
        if (eax_7 u> 0x3c && eax_10 != 0)
            goto label_6b7c0c
        
        if (sub_6c169c(0x797220, 0x314, &data_72b01c) != 0)
            goto label_6b7c0c
        
        if (sub_6c169c(0x797220, 0x314, numberOfBytesWritten) != 0)
            goto label_6b7c0c
        
        hFile = sub_6c1530(0x797220, u"Microsoft Visual C++ Runtime Library", 0x12010)

sub_6b4885(eax_1 ^ &__saved_ebp)
return hFile
