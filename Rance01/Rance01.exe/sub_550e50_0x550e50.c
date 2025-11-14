// 函数: sub_550e50
// 地址: 0x550e50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg1

if (esi[0x10].b == 0 && sub_550c40(1, esi).b != 0)
    int32_t eax_1 = esi[0xd] - 0x10
    esi[0xc] = 0
    esi[0xf] = 1
    
    switch (eax_1)
        case 0, 8
            if (sub_550ef0(esi, 1).b != 0)
                goto label_550ec1
        case 1, 9
            arg1 = sub_551110(esi, 1, esi[0xe], 1)
            
            if (arg1.b == 0)
                return arg1
            
            goto label_550ec1
        default
            sub_54fa30(esi)
        label_550ec1:
            esi[0x10].b = 1
            arg1.b = 1
            return arg1

arg1.b = 0
return arg1
