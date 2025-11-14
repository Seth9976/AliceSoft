// 函数: sub_6cc4f0
// 地址: 0x6cc4f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0x79b14c
int32_t var_10 = 0x70c1a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_3c
int32_t* var_1c = &var_3c
var_3c = nullptr
int32_t var_8_1 = 0
int32_t var_38 = 0
void* ebx = arg1
void* ecx = ebx + 0x37e8
void* var_34 = ecx
var_3c = nullptr
int32_t* edx = *(ebx + 0x37e0)
int32_t result

if (edx == 0)
    int32_t** var_40_11 = &var_3c
    int32_t* eax_18 = operator new(0x38)
    var_3c = eax_18
    
    if (eax_18 != 0)
        int32_t ebx_1 = *(arg1 + 0x54)
        *eax_18 = ebx_1
        eax_18[1] = 0
        eax_18[2] = 1
        eax_18[3] = 0x3f
        __builtin_memset(&eax_18[4], 0, 0x24)
        int32_t** var_40_12 = &var_3c
        int32_t eax_21 = operator new(ebx_1 * 0x18)
        int32_t* esi_2 = var_3c
        esi_2[0xd] = eax_21
        
        if (eax_21 == 0)
            result = 0xfffffffb
        else
            int32_t ebx_2 = 0
            int32_t var_30_1 = 0
            void* var_20_1
            
            if (*esi_2 s<= 0)
                var_20_1 = arg1
            else
                var_20_1 = arg1
                
                while (true)
                    int32_t ecx_3 = ebx_2 * 0x18
                    *(ecx_3 + eax_21) = ebx_2
                    int32_t edx_12 = ebx_2 << 4
                    *(ecx_3 + esi_2[0xd] + 4) = *(edx_12 + *(var_20_1 + 0x37cc) + 4)
                    *(ecx_3 + esi_2[0xd] + 8) = *(edx_12 + *(var_20_1 + 0x37cc) + 8)
                    *(ecx_3 + esi_2[0xd] + 0xc) = 0
                    *(ecx_3 + esi_2[0xd] + 0x10) = 0
                    *(ecx_3 + esi_2[0xd] + 0x14) = 0
                    ebx_2 += 1
                    int32_t var_30_2 = ebx_2
                    
                    if (ebx_2 s>= *esi_2)
                        break
                    
                    eax_21 = esi_2[0xd]
            
            int32_t result_3 = sub_6fbc10(var_34, var_20_1 + 0x37a4)
            result = result_3
            
            if (result_3 == 0)
                void* ebx_3 = arg1
                int32_t edx_18 = *(ebx_3 + 0x37d0)
                
                if (edx_18 == 0)
                    goto label_6cc82b
                
                int32_t result_7 = sub_6fcc90(edx_18, var_34)
                result = result_7
                
                if (result_7 == 0)
                    ebx_3 = arg1
                label_6cc82b:
                    int32_t result_4 =
                        sub_6fc920(var_34, *(ebx_3 + 0x54), ebx_3 + 0x37a0, ebx_3 + 0x379c)
                    result = result_4
                    
                    if (result_4 == 0)
                        int32_t** var_40_15 = &var_3c
                        int32_t result_5 = sub_6d3c40(var_34)
                        result = result_5
                        
                        if (result_5 == 0)
                            int32_t** var_40_16 = &var_3c
                            int32_t result_6 = sub_6d3d10(arg1)
                            result = result_6
                            
                            if (result_6 == 0)
                                edx = var_3c
                                ecx = var_34
                                ebx = arg1
                                goto label_6cc557
    else
        result = 0xfffffffb
else
    var_3c = edx
label_6cc557:
    int32_t result_1
    
    if (*(ebx + 0x37d0) != 0)
        int32_t** var_40_10 = &var_3c
        result_1 = sub_6fe4d0(ebx, ecx, edx)
        result = result_1
    else
        int32_t* var_40_1 = &var_3c
        result_1 = sub_6fcea0(ebx, ecx, edx)
        result = result_1
    
    if (result_1 == 1 || result_1 == 2)
        *(arg1 + 0x1c) = 0
        *(arg1 + 0x37e0) = var_3c
    else if (result_1 == 0)
        if (result_1 == 0)
            int32_t* edx_1 = var_3c
            void* ecx_1
            
            if (edx_1 == 0)
                ecx_1 = *(arg1 + 0x37e0)
            else
                int32_t eax_2 = edx_1[0xd]
                
                if (eax_2 != 0)
                    int32_t* var_40_2 = &var_3c
                    int32_t var_44_2 = eax_2
                    sub_6b4d5b()
                    edx_1 = var_3c
                    edx_1[0xd] = 0
                
                void** var_40_3 = &var_3c
                int32_t* var_44_3 = edx_1
                sub_6b4d5b()
                var_3c = nullptr
                ecx_1 = nullptr
                *(arg1 + 0x37e0) = 0
            
            if (ecx_1 != 0)
                int32_t eax_3 = *(ecx_1 + 0x34)
                
                if (eax_3 != 0)
                    void** var_40_4 = &var_3c
                    int32_t var_44_4 = eax_3
                    sub_6b4d5b()
                    *(*(arg1 + 0x37e0) + 0x34) = 0
                    ecx_1 = *(arg1 + 0x37e0)
                
                void** var_40_5 = &var_3c
                void* var_44_5 = ecx_1
                sub_6b4d5b()
                *(arg1 + 0x37e0) = 0
        
        int32_t** var_40_6 = &var_3c
        int32_t result_2 = sub_6fbbc0(var_34)
        result = result_2
        
        if (result_2 == 0)
            int32_t** var_40_9 = &var_3c
            result = sub_6d3c40(var_34)
            int32_t var_8_2 = 0xffffffff

if (result s< 0 && var_3c != 0)
    if (var_3c[0xd] != 0)
        int32_t** var_40_7 = &var_3c
        int32_t var_44_7 = var_3c[0xd]
        sub_6b4d5b()
        var_3c[0xd] = 0
    
    int32_t** var_40_8 = &var_3c
    int32_t* var_44_8 = var_3c
    sub_6b4d5b()
    var_3c = nullptr
    *(arg1 + 0x37e0) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
