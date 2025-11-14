// 函数: sub_42ddd0
// 地址: 0x42ddd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71250b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
uint32_t result = *edi

if (result + 4 u> edi[1])
label_42dedb:
    result.b = 0
else
    uint32_t esi_7 =
        ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
        | zx.d(*result)
    uint32_t var_18_1 = esi_7
    *edi = result + 4
    uint32_t result_1 = 0
    
    if (esi_7 s> 0)
        do
            result = *edi
            
            if (result + 4 u> edi[1])
                goto label_42dedb
            
            uint32_t eax_3 = zx.d(*result)
            uint32_t edx_7 =
                (zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))
            *edi = result + 4
            int32_t ebp_1 = *(arg1 + 0x50)
            uint32_t var_20 = edx_7 << 8 | eax_3
            int32_t* var_14
            sub_42e070(arg1 + 0x4c, &var_14, &var_20)
            
            if (var_14 != ebp_1)
                goto label_42dedb
            
            struct partsengine::IKeyData::partsengine::CFlatKeyDataSound::VTable** ebp_2 =
                operator new(0x24)
            struct partsengine::IKeyData::partsengine::CFlatKeyDataSound::VTable** var_10_1 = ebp_2
            int32_t var_4 = 0
            
            if (ebp_2 == 0)
                ebp_2 = nullptr
            else
                *ebp_2 = &partsengine::CFlatKeyDataSound::`vftable'{for `partsengine::IKeyData'}
                ebp_2[1] = 1
                ebp_2[7] = 0xf
                ebp_2[6] = 0
                ebp_2[2].b = 0
                sub_401270(&ebp_2[2], nullptr, 0x72da35)
                esi_7 = var_18_1
                edi = arg2
            
            int32_t var_4_1 = 0xffffffff
            *sub_4ccf80(arg1 + 0x4c, &var_20) = ebp_2
            result = result_1 + 1
            result_1 = result
        while (result s< esi_7)
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
