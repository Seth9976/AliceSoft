// 函数: sub_6bf4ae
// 地址: 0x6bf4ae
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* i = &data_78d008
int32_t edi
int32_t var_c = edi

do
    CRITICAL_SECTION* lpCriticalSection_1 = *i
    
    if (lpCriticalSection_1 != 0 && *(i + 4) != 1)
        DeleteCriticalSection(lpCriticalSection_1)
        __free_base(lpCriticalSection_1)
        *i = 0
    
    i += 8
while (i s< 0x78d128)

CRITICAL_SECTION* lpCriticalSection

for (void* i_1 = &data_78d008; i_1 s< 0x78d128; i_1 += 8)
    lpCriticalSection = *i_1
    
    if (lpCriticalSection != 0 && *(i_1 + 4) == 1)
        lpCriticalSection = DeleteCriticalSection(lpCriticalSection)

return lpCriticalSection
