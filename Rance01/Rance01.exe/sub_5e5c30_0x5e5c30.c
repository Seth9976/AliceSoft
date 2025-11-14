// 函数: sub_5e5c30
// 地址: 0x5e5c30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = arg3 + 0x18
int32_t ebp = *ecx
int32_t* var_4 = ecx

if (ebp != 0xffffffff)
    int32_t edi_1 = *(arg1 + 0x30)
    int32_t var_8_1 = *(arg1 + 0x1c)
    int32_t var_c_1 = *(arg1 + 0x20)
    int32_t var_10_1 = *(arg1 + 0x2c)
    
    if (*(arg1 + 0xc0) != 0)
        int32_t edi_2 = ecx[1]
        var_8_1 = 0
        var_c_1 = 0
        
        if (edi_2 != 0)
            ecx = var_4
            var_10_1 = sub_5f9f40(ebp)
        else
            var_10_1 = 0
        
        if (edi_2 != 0)
            ecx = var_4
            edi_1 = sub_5f9f90(ebp)
        else
            edi_1 = 0
    
    int32_t ebx_1 = *(arg1 + 0x34)
    int32_t ebp_1 = *(arg1 + 0x38)
    int32_t esi_1 = *(arg1 + 0x3c)
    int32_t var_28_1 = esi_1
    int32_t var_2c_1 = ebp_1
    int32_t var_30_1 = ebx_1
    int32_t var_34_1 = edi_1
    int32_t var_38_1 = var_10_1
    int32_t var_3c_1 = var_c_1
    int32_t var_40_1 = var_8_1
    
    if (sub_5e9490(ecx) != 0)
        return 1
    
    int32_t var_28_2 = esi_1
    int32_t var_2c_2 = ebp_1
    int32_t var_30_2 = ebx_1
    int32_t var_34_2 = edi_1
    int32_t var_38_2 = var_10_1
    int32_t var_3c_2 = var_c_1
    int32_t var_40_2 = var_8_1
    sub_40da60(0x736338)

arg1.b = 0
return arg1
