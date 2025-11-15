// 函数: ___scrt_acquire_startup_lock
// 地址: 0x1000258c
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

if (___asan_report_present() == 0)
    int32_t eax
    eax.b = 0
    return eax

TEB* fsbase
void* StackBase = fsbase->NtTib.Self->NtTib.StackBase
int32_t eax_2

do
    eax_2 = 0
    
    if (0 == data_10016b8c)
        data_10016b8c = StackBase
    else
        eax_2 = data_10016b8c
    
    if (eax_2 == 0)
        eax_2.b = 0
        return eax_2
while (StackBase != eax_2)

eax_2.b = 1
return eax_2
