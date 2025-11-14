// 函数: sub_50fcd0
// 地址: 0x50fcd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_58
int32_t eax_1 = data_78c474 ^ &var_58
int128_t* esi = *arg2
int128_t* eax_3 = arg2[1]

if (esi != eax_3)
    void* edi_2 = 0
    sub_6b49d0(esi, eax_3, edi_2)
    arg2[1] = edi_2 + esi

void* eax_4 = &arg2[4]
bool cond:0 = *(eax_4 + 0x14) u< 0x10
void* var_44 = eax_4
*(eax_4 + 0x10) = 0

if (not(cond:0))
    eax_4 = *eax_4

*eax_4 = 0

if (*arg3 != arg3[1])
    int32_t var_28_1 = 0xf
    int32_t var_2c_1 = 0
    char var_3c = 0
    sub_401270(&var_3c, 0x12, "ShaderCompiler.dll")
    char* lpModuleName = var_3c.d
    
    if (var_28_1 u< 0x10)
        lpModuleName = &var_3c
    
    void* hModule = GetModuleHandleA(lpModuleName)
    eax_4.b = hModule != 0
    bool var_55_1 = eax_4.b == 0
    
    if (var_28_1 u>= 0x10)
        int32_t var_6c_3 = var_3c.d
        sub_6b4d5b()
    
    int32_t var_28_2 = 0xf
    int32_t var_2c_2 = 0
    var_3c = 0
    
    if (var_55_1 == 0)
        int32_t var_10_1 = 0
        int32_t var_c_1 = 0xf
        char var_20 = 0
        sub_401270(&var_20, 0xf, "CreateInterface")
        void* edi_4
        
        if (hModule != 0)
            PSTR lpProcName = var_20.d
            
            if (var_c_1 u< 0x10)
                lpProcName = &var_20
            
            edi_4 = GetProcAddress(hModule, lpProcName)
        else
            edi_4 = nullptr
        
        if (var_c_1 u>= 0x10)
            int32_t var_6c_5 = var_20.d
            sub_6b4d5b()
        
        int32_t var_c_2 = 0xf
        int32_t var_10_2 = 0
        var_20 = 0
        
        if (edi_4 != 0)
            eax_4 = edi_4(0x753fa4)
            
            if (eax_4 != 0)
                int32_t* var_54 = nullptr
                int32_t* var_50 = nullptr
                int32_t* var_4c_1
                
                if (arg1[5] u< 0x10)
                    var_4c_1 = arg1
                else
                    var_4c_1 = *arg1
                
                void** edx_2 = arg4
                
                if (edx_2[5] u>= 0x10)
                    edx_2 = *edx_2
                
                int32_t ecx_1 = *arg3
                
                if ((*(*eax_4 + 8))(ecx_1, arg3[1] - ecx_1, edx_2, var_4c_1, 0x20, &var_54, &var_50)
                        != 0)
                    int32_t* ecx_10 = var_50
                    
                    if (ecx_10 != 0)
                        (*(*ecx_10 + 4))()
                    
                    int32_t* ecx_11 = var_54
                    
                    if (ecx_11 != 0 && (*(*ecx_11 + 0x14))() s> 0)
                        sub_404f60((*(*var_54 + 0x14))(), arg2)
                        sub_6c02a0(*arg2, (*(*var_54 + 0x18))((*(*var_54 + 0x14))()))
                        (*(*eax_4 + 4))()
                        int32_t eax_27
                        eax_27.b = 1
                        sub_6b4885(eax_1 ^ &var_58)
                        return eax_27
                else
                    int32_t* ecx_3 = var_54
                    
                    if (ecx_3 != 0)
                        (*(*ecx_3 + 4))()
                    
                    int32_t* ecx_4 = var_50
                    
                    if (ecx_4 != 0)
                        sub_401140(var_44.b, (*(*ecx_4 + 0x18))(), var_44)
                        (*(*var_50 + 4))()
                
                (*(*eax_4 + 4))()

eax_4.b = 0
sub_6b4885(eax_1 ^ &var_58)
return eax_4
