// 函数: sub_6b2e90
// 地址: 0x6b2e90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = GetSystemMetrics(SM_CXSCREEN)
int32_t eax_1

if (arg1 == eax)
    eax_1 = GetSystemMetrics(SM_CYSCREEN)

if (arg1 != eax || arg4 != eax_1)
    arg2->dmPelsWidth = arg1
    arg2->dmPelsHeight = arg4
    arg2->dmFields = 0x180000
    int32_t edi_1 = 0
    
    while (true)
        enum DISP_CHANGE eax_2 = ChangeDisplaySettingsA(arg2, CDS_FULLSCREEN)
        
        if (eax_2 == DISP_CHANGE_SUCCESSFUL)
            eax_1 = arg3
            *(eax_1 + 8) = 1
            *(eax_1 + 0xc) = 1
            break
        
        edi_1 += 1
        
        if (edi_1 s>= 3)
            return eax_2

return eax_1
