// 函数: sub_4b5b80
// 地址: 0x4b5b80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

for (int32_t* i = *(arg1 + 0x14); i != *(arg1 + 0x18); i = &i[1])
    void var_48
    sub_51a3e0(*i + 0xc, &var_48)
    void* edi_1 = *i
    int32_t eax_3 = *(edi_1 + 8)
    
    if (eax_3 == 0xffffffff)
        int32_t var_44
        *(edi_1 + 0x30) = var_44
        int32_t var_40
        *(edi_1 + 0x34) = var_40
        int32_t var_3c
        *(edi_1 + 0x38) = var_3c
        int32_t var_34
        *(edi_1 + 0x40) = var_34
        int32_t var_38
        *(edi_1 + 0x3c) = var_38
        int32_t var_30
        *(edi_1 + 0x44) = var_30
        int32_t var_2c
        *(edi_1 + 0x48) = var_2c
        int32_t var_28
        *(edi_1 + 0x4c) = var_28
    else
        struct sealengine::CDualQuaternion::VTable* var_24
        struct sealengine::CDualQuaternion::VTable** eax_5 =
            sub_4b99f0(&var_24, &var_48, eax_3 * 0xac + *(arg1 + 4) + 0x2c)
        *(edi_1 + 0x30) = eax_5[1]
        *(edi_1 + 0x34) = eax_5[2]
        *(edi_1 + 0x38) = eax_5[3]
        *(edi_1 + 0x3c) = eax_5[4]
        *(edi_1 + 0x40) = eax_5[5]
        *(edi_1 + 0x44) = eax_5[6]
        *(edi_1 + 0x48) = eax_5[7]
        *(edi_1 + 0x4c) = eax_5[8]
