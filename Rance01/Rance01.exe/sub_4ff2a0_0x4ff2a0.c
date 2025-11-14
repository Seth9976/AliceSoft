// 函数: sub_4ff2a0
// 地址: 0x4ff2a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg4 + arg5 == 2)
    void* result = *arg1
    void* esi = *arg2
    int32_t ecx = *(esi + 0x1c)
    int32_t edx = *(result + 0x1c)
    
    if (ecx s>= edx)
        if (ecx s> edx)
            return result
        
        int32_t ecx_1 = *(esi + 0x20)
        int32_t edx_1 = *(result + 0x20)
        
        if (ecx_1 s>= edx_1)
            if (ecx_1 s> edx_1)
                return result
            
            ecx_1.b = *(esi + 0x7b)
            edx_1.b = *(result + 0x7b)
            
            if (ecx_1.b u>= edx_1.b)
                if (ecx_1.b u> edx_1.b)
                    return result
                
                ecx_1.b = *(esi + 0x26)
                
                if (ecx_1.b u>= *(result + 0x26))
                    return result
    
    *arg1 = esi
    *arg2 = result
    return result

int32_t* var_44
int32_t var_14

if (arg4 s<= arg5 && arg4 s<= sub_4dccc0(arg6))
    int32_t* eax_2 = *(arg6 + 0x10)
    int32_t ecx_2 = *eax_2
    void** ebx_2 = arg1
    eax_2[1] = ecx_2
    var_44 = nullptr
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0
    int32_t var_38_1 = 0
    int32_t var_34_1 = *(arg6 + 0x10)
    arg4 = &var_44
    sub_4dd2c0(&var_14, arg2, ecx_2, ebx_2)
    int32_t eax_4 = var_14
    
    if (eax_4 != 0)
        int32_t var_34_2 = eax_4
        sub_6b4d5b()
    
    int32_t* esi_2 = *(arg6 + 0x10)
    int32_t* edx_4 = esi_2[1]
    int32_t* var_34_3 = arg7
    int32_t* var_38_2 = arg3
    int32_t* var_3c_2 = arg2
    var_44 = *esi_2
    return sub_4ff760(ebx_2, edx_4, arg3, var_44, edx_4)

if (arg5 s<= sub_4dccc0(arg6))
    int32_t* eax_10 = *(arg6 + 0x10)
    int32_t ecx_4 = *eax_10
    eax_10[1] = ecx_4
    var_44 = nullptr
    int32_t var_40_3 = 0
    int32_t var_3c_3 = 0
    int32_t var_38_3 = 0
    int32_t var_34_4 = *(arg6 + 0x10)
    arg4 = &var_44
    sub_4dd2c0(&var_14, arg3, ecx_4, arg2)
    int32_t eax_12 = var_14
    
    if (eax_12 != 0)
        int32_t var_34_5 = eax_12
        sub_6b4d5b()
    
    int128_t** esi_3 = *(arg6 + 0x10)
    int128_t* ecx_5 = esi_3[1]
    int128_t* edx_7 = *esi_3
    int32_t* var_34_6 = arg7
    int32_t* var_38_4 = arg3
    int128_t* var_3c_4 = ecx_5
    void** var_40_4 = edx_7
    var_44 = arg1
    return sub_4ff800(arg2, edx_7, ecx_5, var_44, var_40_4)

void* var_1c_1
void* eax_24
int128_t* edx_10
int32_t ebx_5
int32_t* ebp_3
int32_t edi_4

if (arg5 s>= arg4)
    int32_t eax_26
    int32_t edx_11
    edx_11:eax_26 = sx.q(arg5)
    edi_4 = (eax_26 - edx_11) s>> 1
    int32_t* var_34_8 = arg7
    ebp_3 = &arg2[edi_4]
    int32_t* var_38_6 = ebp_3
    int32_t* var_3c_6 = arg1
    eax_24, edx_10 = sub_4ffc70(arg2, arg1, arg7)
    var_1c_1 = eax_24
    ebx_5 = (eax_24 - arg1) s>> 2
else
    int32_t eax_18
    int32_t edx_8
    edx_8:eax_18 = sx.q(arg4)
    ebx_5 = (eax_18 - edx_8) s>> 1
    void* eax_20 = &arg1[ebx_5]
    int32_t* var_34_7 = arg7
    void* var_38_5 = eax_20
    var_1c_1 = eax_20
    int32_t* var_3c_5 = arg2
    int32_t* eax_23
    eax_23, edx_10 = sub_4ffc00(arg3, arg7, arg1)
    ebp_3 = eax_23
    eax_24 = var_1c_1
    edi_4 = (ebp_3 - arg2) s>> 2

void* ecx_9 = arg4 - ebx_5
int32_t var_34_9 = edi_4
void* var_38_7 = ecx_9
var_44 = eax_24
void* eax_30 = sub_4ff8b0(arg6, edx_10, arg2, var_44, arg2, ebp_3)
var_44 = eax_30
sub_4ff2a0(arg1, var_1c_1, var_44, ebx_5, edi_4, arg6, arg7)
var_44 = arg3
return sub_4ff2a0(eax_30, ebp_3, var_44, ecx_9, arg5 - edi_4, arg6, arg7)
