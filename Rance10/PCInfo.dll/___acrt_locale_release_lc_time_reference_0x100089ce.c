// 函数: ___acrt_locale_release_lc_time_reference
// 地址: 0x100089ce
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

if (arg1 == 0 || arg1 == &data_10010638)
    return 0x7fffffff

int32_t eax = *(arg1 + 0xb0)
*(arg1 + 0xb0) -= 1
return eax - 1
