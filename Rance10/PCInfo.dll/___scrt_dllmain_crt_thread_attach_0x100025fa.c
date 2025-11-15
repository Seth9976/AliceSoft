// 函数: ___scrt_dllmain_crt_thread_attach
// 地址: 0x100025fa
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

if (___vcrt_thread_attach() != 0)
    if (sub_10006215() != 0)
        return 1
    
    ___vcrt_thread_detach()

return 0
