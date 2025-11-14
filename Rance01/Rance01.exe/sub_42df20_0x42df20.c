// 函数: sub_42df20
// 地址: 0x42df20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t** eax = *arg1

if (&eax[1] u> arg1[1])
label_42e023:
    eax.b = 0
    return eax

uint32_t ebp_7 =
    ((zx.d(*(eax + 3)) << 8 | zx.d(*(eax + 2))) << 8 | zx.d(*(eax + 1))) << 8 | zx.d(*eax)
*arg1 = &eax[1]
uint32_t var_8_1 = 0
uint32_t eax_1

if (ebp_7 s> 0)
    do
        eax = *arg1
        
        if (&eax[1] u> arg1[1])
            goto label_42e023
        
        uint32_t eax_2 = zx.d(*eax)
        uint32_t edx_7 = (zx.d(*(eax + 3)) << 8 | zx.d(*(eax + 2))) << 8 | zx.d(*(eax + 1))
        *arg1 = &eax[1]
        uint32_t var_c = edx_7 << 8 | eax_2
        int32_t* var_4
        sub_42e070(arg2 + 0x4c, &var_4, &var_c)
        
        if (var_4 != *(arg2 + 0x50))
            goto label_42e023
        
        struct partsengine::IKeyData::partsengine::CFlatKeyDataScript::VTable** eax_3 =
            operator new(0x10)
        struct partsengine::IKeyData::partsengine::CFlatKeyDataScript::VTable** esi_4
        
        if (eax_3 == 0)
            esi_4 = nullptr
        else
            *eax_3 = &partsengine::CFlatKeyDataScript::`vftable'{for `partsengine::IKeyData'}
            eax_3[1] = 1
            eax_3[2] = 0xffffffff
            eax_3[3].b = 0
            esi_4 = eax_3
        
        if (sub_430d70(arg1, esi_4) == 0)
            (*esi_4)->vFunc_1()
            goto label_42e023
        
        *sub_4ccf80(arg2 + 0x4c, &var_c) = esi_4
        eax_1 = var_8_1 + 1
        var_8_1 = eax_1
    while (eax_1 s< ebp_7)

eax_1.b = 1
return eax_1
