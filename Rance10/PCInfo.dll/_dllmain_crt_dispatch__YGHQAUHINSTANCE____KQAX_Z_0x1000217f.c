// 函数: ?dllmain_crt_dispatch@@YGHQAUHINSTANCE__@@KQAX@Z
// 地址: 0x1000217f
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

uint32_t result

if (arg2 == 0)
    int32_t eax_1
    eax_1.b = arg3 != 0
    result = dllmain_crt_process_detach(zx.d(eax_1.b))
else
    if (arg2 != 1)
        char eax_5
        
        if (arg2 == 2)
            eax_5 = ___scrt_dllmain_crt_thread_attach()
        else
            if (arg2 != 3)
                return 1
            
            eax_5 = sub_10002619()
        
        return zx.d(eax_5)
    
    result = dllmain_crt_process_attach(arg1, arg3)

return result
