// 函数: sub_6f35f0
// 地址: 0x6f35f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0x79bac4
int32_t var_10 = 0x70c1a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_44
uint32_t* var_1c = &var_44
var_44 = 0
int32_t var_40 = 0
void* var_3c = nullptr
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_8_1 = 0
int32_t result_1 = sub_6f2b00(arg1 + 0x37e8, &var_44)
int32_t result = result_1

if (result_1 == 0)
    uint32_t ebx_1 = var_44
    
    if (ebx_1 s>= 2)
        var_44 = ebx_1 - 2
        uint32_t* var_48_2 = &var_44
        int32_t result_2 = sub_6f2920(arg1 + 0x37e8, ebx_1 - 2, &var_38, &var_3c, &var_34)
        result = result_2
        
        if (result_2 != 0)
            result = 0xffffffeb
        else if (*(arg1 + 0x37dc) != 0)
            int32_t edx_2 = *(arg1 + 0x4e04)
            
            if (edx_2 != 0)
                uint32_t esi_3 = var_44
                uint32_t ebx_3 = zx.d(*(arg1 + 0x4e08))
                
                if (esi_3 s<= ebx_3)
                    char* eax_7 = nullptr
                    int32_t var_30_3 = 0
                    
                    if (esi_3 s> 0)
                        while (true)
                            void* edi_2 = var_3c
                            var_3c = edi_2 + 1
                            ebx_3.b = *edi_2
                            eax_7[edx_2] = ebx_3.b
                            eax_7 = &eax_7[1]
                            char* var_30_4 = eax_7
                            esi_3 = var_44
                            
                            if (eax_7 s>= esi_3)
                                break
                            
                            edx_2 = *(arg1 + 0x4e04)
                    
                    *(arg1 + 0x4e08) = esi_3.w
                else
                    char* eax_6 = nullptr
                    int32_t var_30_1 = 0
                    
                    if (ebx_3 s> 0)
                        while (true)
                            char* edi_1 = var_3c
                            var_3c = &edi_1[1]
                            ebx_3.b = *edi_1
                            eax_6[edx_2] = ebx_3.b
                            eax_6 = &eax_6[1]
                            char* var_30_2 = eax_6
                            
                            if (eax_6 s>= zx.d(*(arg1 + 0x4e08)))
                                break
                            
                            edx_2 = *(arg1 + 0x4e04)
                        
                        esi_3 = var_44
                    
                    *(arg1 + 0x4e08) = esi_3.w
                    result = 0xffffffe2
                
                int32_t var_8_2 = 0xffffffff
    else
        result = 0xffffffeb

if (var_34 != 0 && var_38 != 0)
    uint32_t* var_48_1 = &var_44
    int32_t var_4c_1 = var_38
    sub_6b4d5b()
    var_38 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
