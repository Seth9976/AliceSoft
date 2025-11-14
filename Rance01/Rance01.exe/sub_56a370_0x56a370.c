// 函数: sub_56a370
// 地址: 0x56a370
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* edi = *(arg1 + 0x1ec)
float ecx

if (edi != 0)
    ecx = sub_4258c0(arg2, edi)

void* var_24 = arg1
sub_56ae20(ecx)

if ((**(arg1 + 0xc0))() == 0)
    HWND hWnd = GetActiveWindow()
    uint32_t lpdwProcessId
    
    if (hWnd != 0)
        lpdwProcessId = 0xffffffff
        GetWindowThreadProcessId(hWnd, &lpdwProcessId)
    
    if (hWnd == 0 || lpdwProcessId != *(arg1 + 0xa8))
        void* eax_3 = data_797d94
        
        if (eax_3 != 0 && *(eax_3 + 4) != 0)
            void* ecx_2 = *(eax_3 + 0x38)
            *(eax_3 + 4) = 0
            
            if (ecx_2 != 0)
                *(ecx_2 + 0x36) = 0
                sub_5d7f70(*(eax_3 + 0x38))
            
            void* eax_5 = *(eax_3 + 0x3c)
            
            if (eax_5 != 0)
                *(eax_5 + 0x3a) = 0
                sub_5d9010(*(eax_3 + 0x3c))

if (*(arg1 + 0x2a1) != 0 && GetForegroundWindow() == arg2)
    POINT point
    GetCursorPos(&point)
    ScreenToClient(arg2, &point)
    
    if (point.y != 0)
        *(arg1 + 0x384) = 0
    else
        if (*(arg1 + 0x384) == 0)
            *(arg1 + 0x384) = 1
            uint32_t eax_11 = timeGetTime()
            uint32_t ecx_7 = data_797e3c
            
            if (eax_11 u< ecx_7)
                eax_11 = ecx_7
            
            data_797e3c = eax_11
            *(arg1 + 0x388) = eax_11
            return 0
        
        uint32_t eax_7 = timeGetTime()
        uint32_t ecx_4 = data_797e3c
        
        if (eax_7 u< ecx_4)
            eax_7 = ecx_4
        
        data_797e3c = eax_7
        
        if (eax_7 - *(arg1 + 0x388) u>= *(arg1 + 0x38c))
            HICON eax_9 = LoadIconA(*(arg1 + 0x98), 0x66)
            sub_562ec0(arg2, arg1 + 0x2a4, arg1, *(arg1 + 0x394), eax_9)

return 0
