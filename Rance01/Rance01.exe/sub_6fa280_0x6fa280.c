// 函数: sub_6fa280
// 地址: 0x6fa280
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = arg2[2]
*arg1 = 0
int32_t eax_1 = arg4[5]

if (eax_1 == 0)
    int32_t ecx = *(eax + 0x28)
    *(eax + 0x48) = *(eax + 0x24)
    int32_t esi = *(eax + 0x2c)
    int32_t edi = *(eax + 0x30)
    *(eax + 0x4c) = ecx
    int32_t edx_2 = *(eax + 0x108)
    *(eax + 0x50) = esi
    *(eax + 0x54) = edi
    *(eax + 0x110) = edx_2
else if (eax_1 != 1)
    int32_t ecx_2 = *(eax + 0x28)
    *(eax + 0x48) = *(eax + 0x24)
    int32_t esi_2 = *(eax + 0x2c)
    int32_t edi_2 = *(eax + 0x30)
    *(eax + 0x4c) = ecx_2
    int32_t edx_6 = *(eax + 0x108)
    *(eax + 0x50) = esi_2
    *(eax + 0x54) = edi_2
    *(eax + 0x110) = edx_6
else
    int32_t ecx_1 = *(eax + 0x38)
    *(eax + 0x48) = *(eax + 0x34)
    int32_t esi_1 = *(eax + 0x3c)
    int32_t edi_1 = *(eax + 0x40)
    *(eax + 0x4c) = ecx_1
    int32_t edx_4 = *(eax + 0x10c)
    *(eax + 0x50) = esi_1
    *(eax + 0x54) = edi_1
    *(eax + 0x110) = edx_4

int32_t edi_3 = arg4[3]
int32_t esi_3 = arg4[0x13]
int32_t* var_2c
int32_t* var_28
int32_t* var_24
int32_t var_20
int32_t result
int32_t var_14
int32_t eax_6
int32_t ecx_3
int32_t edx_7

if (edi_3 s>= esi_3 || edi_3 == 0)
    int32_t eax_7 = arg4[4]
    ecx_3 = arg4[0x14]
    var_14 = eax_7
    
    if (eax_7 s< ecx_3 && eax_7 != 0)
        edx_7 = arg4[2]
        eax_6 = arg4[1]
        goto label_6fa372
    
    edx_7 = arg4[2]
    
    if (edx_7 s> 0)
        eax_6 = arg4[1]
        goto label_6fa372
    
    eax_6 = arg4[1]
    
    if (eax_6 s> 0)
        goto label_6fa372
    
    int32_t eax_38 = *arg4
    
    if (eax_38 == 0x12 || eax_38 == 0x13)
        if (arg4[0x1378] != 0)
            var_2c = arg2
            var_28 = arg3
            var_24 = arg4
            var_20 = 8
            result = sub_6f5bd0(var_2c, var_28, var_24, 8)
        else
            var_2c = arg2
            var_28 = arg3
            var_24 = arg4
            var_20 = 8
            result = sub_6f82e0(var_2c, var_28, var_24, 8)
    else if (eax_38 == 0x10 || eax_38 == 0x11)
        if (arg4[0x1378] != 0)
            var_2c = arg2
            var_28 = arg3
            var_24 = arg4
            var_20 = 4
            result = sub_6f5bd0(var_2c, var_28, var_24, 4)
        else
            var_2c = arg2
            var_28 = arg3
            var_24 = arg4
            var_20 = 4
            result = sub_6f82e0(var_2c, var_28, var_24, 4)
    else if (eax_38 == 0xe || eax_38 == 0xf)
        if (arg4[0x1378] != 0)
            var_2c = arg2
            var_28 = arg3
            var_24 = arg4
            var_20 = 2
            result = sub_6f5bd0(var_2c, var_28, var_24, 2)
        else
            var_2c = arg2
            var_28 = arg3
            var_24 = arg4
            var_20 = 2
            result = sub_6f82e0(var_2c, var_28, var_24, 2)
    else if (arg4[0x1378] != 0)
        var_2c = arg2
        var_28 = arg3
        var_24 = arg4
        var_20 = 1
        result = sub_6f5bd0(var_2c, var_28, var_24, 1)
    else
        var_2c = arg2
        var_28 = arg3
        var_24 = arg4
        var_20 = 1
        result = sub_6f82e0(var_2c, var_28, var_24, 1)
else
    ecx_3 = arg4[0x14]
    edx_7 = arg4[2]
    var_14 = arg4[4]
    eax_6 = arg4[1]
label_6fa372:
    
    if (esi_3 s>= edi_3)
        esi_3 = edi_3
    
    arg4[3] = esi_3
    
    if (ecx_3 s>= var_14)
        ecx_3 = var_14
    
    arg4[4] = ecx_3
    
    if (eax_6 s< 0)
        eax_6 = 0
    
    arg4[1] = eax_6
    
    if (edx_7 s< 0)
        edx_7 = 0
    
    arg4[2] = edx_7
    
    if (arg4[0x120c] == 0)
        int32_t* eax_31 = operator new(0x50000)
        arg4[0x120c] = eax_31
        
        if (eax_31 == 0)
            return 0xfffffffb
        
        int32_t edx_9 = *arg4
        
        if (edx_9 == 2 || edx_9 == 6 || edx_9 == 0xe || edx_9 == 0x10 || edx_9 == 0x12)
            *eax_31 = arg2[7]
        else
            *eax_31 = arg2[4]
        
        *(arg4[0x120c] + 4) = 0
        *(arg4[0x120c] + 8) = 0
        *(arg4[0x120c] + 0xc) = 0
        *(arg4[0x120c] + 0x10) = 0
        void* eax_33 = arg4[0x120c]
        *(eax_33 + 0x18) = 0
        *(eax_33 + 0x1c) = 0
        *(arg4[0x120c] + 0x20) = 0
        void* eax_34
        eax_34.b = arg2[0xc].b
        *(arg4[0x120c] + 0x24) = eax_34.b
        int32_t i = 1
        int32_t* eax_35 = 0x28
        
        do
            i += 5
            *(eax_35 + arg4[0x120c]) = 0xffffffff
            *(eax_35 + arg4[0x120c] + 0x28) = 0xffffffff
            *(eax_35 + arg4[0x120c] + 0x50) = 0xffffffff
            *(eax_35 + arg4[0x120c] + 0x78) = 0xffffffff
            *(eax_35 + arg4[0x120c] + 0xa0) = 0xffffffff
            eax_35 = &eax_35[0x32]
        while (i s< 0x1ffb)
        
        *(i * 0x28 + arg4[0x120c]) = 0xffffffff
    
    int32_t eax_9 = *arg4
    
    if (eax_9 == 0x12 || eax_9 == 0x13)
        if (arg4[0x1378] != 0)
            var_2c = arg2
            var_28 = arg3
            var_24 = arg4
            var_20 = 8
            result = sub_6f6f80(var_2c, var_28, var_24, 8)
        else
            var_2c = arg2
            var_28 = arg3
            var_24 = arg4
            var_20 = 8
            result = sub_6f8de0(var_2c, var_28, var_24, 8)
    else if (eax_9 == 0x10 || eax_9 == 0x11)
        if (arg4[0x1378] != 0)
            var_2c = arg2
            var_28 = arg3
            var_24 = arg4
            var_20 = 4
            result = sub_6f6f80(var_2c, var_28, var_24, 4)
        else
            var_2c = arg2
            var_28 = arg3
            var_24 = arg4
            var_20 = 4
            result = sub_6f8de0(var_2c, var_28, var_24, 4)
    else if (eax_9 == 0xe || eax_9 == 0xf)
        if (arg4[0x1378] != 0)
            var_2c = arg2
            var_28 = arg3
            var_24 = arg4
            var_20 = 2
            result = sub_6f6f80(var_2c, var_28, var_24, 2)
        else
            var_2c = arg2
            var_28 = arg3
            var_24 = arg4
            var_20 = 2
            result = sub_6f8de0(var_2c, var_28, var_24, 2)
    else if (arg4[0x1378] != 0)
        var_2c = arg2
        var_28 = arg3
        var_24 = arg4
        var_20 = 1
        result = sub_6f6f80(var_2c, var_28, var_24, 1)
    else
        var_2c = arg2
        var_28 = arg3
        var_24 = arg4
        var_20 = 1
        result = sub_6f8de0(var_2c, var_28, var_24, 1)

if (result == 0)
    var_2c = arg2
    sub_6fa8f0(var_2c)

(*(eax + 0x18))(var_2c, var_28, var_24, var_20)
return result
