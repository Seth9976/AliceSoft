// 函数: __updatetlocinfoEx_nolock
// 地址: 0x10008aef
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t edi
int32_t var_c = edi

if (arg2 == 0 || arg1 == 0)
    return nullptr

void* edi_1 = *arg1

if (edi_1 != arg2)
    *arg1 = arg2
    ___acrt_add_locale_ref(arg2)
    
    if (edi_1 != 0)
        ___acrt_release_locale_ref(edi_1)
        
        if (*(edi_1 + 0xc) == 0 && edi_1 != &data_10016578)
            ___acrt_free_locale(edi_1)

return arg2
