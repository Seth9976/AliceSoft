// 函数: sub_5e5d00
// 地址: 0x5e5d00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg3 + 0x18) == 0xffffffff)
    arg1.b = 0
    return arg1

int32_t edx = *(arg1 + 0x38)
int32_t ecx_1 = *(arg1 + 0x34)
int32_t ebx = *(arg1 + 0x24)
int32_t ebp = *(arg1 + 0x28)
int32_t esi = *(arg1 + 0x1c)
int32_t edi = *(arg1 + 0x20)
int32_t edx_1 = *(arg1 + 0x3c)
int32_t eax = *(arg1 + 0x40)
int32_t var_28 = edx_1
int32_t var_2c = edx
int32_t var_30 = ecx_1
int32_t var_34 = ebp
int32_t var_38 = ebx
int32_t var_3c = edi
int32_t var_40 = esi

if (sub_5e9680(arg3 + 0x18) == 0)
    int32_t var_28_1 = eax
    int32_t var_2c_1 = edx_1
    int32_t var_30_1 = edx
    int32_t var_34_1 = ecx_1
    int32_t var_38_1 = ebp
    int32_t var_3c_1 = ebx
    int32_t var_40_1 = edi
    int32_t var_44 = esi
    sub_40da60(0x7363a8)
    void* eax_5
    eax_5.b = 0
    return eax_5

int32_t* eax_6

if (*(arg3 + 0x1c) != 0)
    eax_6 = *(arg3 + 0x18)
    
    if (eax_6 != 0xffffffff)
        eax_6 = sub_5f9dd0(eax_6)
        
        if (eax_6 != 0 && (*(*eax_6 + 0x28))().b != 0)
            int32_t var_28_2 = eax
            int32_t var_2c_2 = ebp
            int32_t var_30_2 = ebx
            int32_t var_34_2 = edi
            int32_t var_38_2 = esi
            
            if (sub_5e9990(arg3 + 0x18).b == 0)
                int32_t var_28_3 = eax
                int32_t var_2c_3 = edx_1
                int32_t var_30_3 = edx
                int32_t var_34_3 = ecx_1
                int32_t var_38_3 = ebp
                int32_t var_3c_2 = ebx
                int32_t var_40_2 = edi
                int32_t var_44_1 = esi
                sub_40da60(0x736418)
                void* eax_10
                eax_10.b = 0
                return eax_10

eax_6.b = 1
return eax_6
