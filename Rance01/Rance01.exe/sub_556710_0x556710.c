// 函数: sub_556710
// 地址: 0x556710
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL hObject_2 = 0xffffffff
int32_t var_8 = 0
int32_t var_4 = 0

if (sub_601f00(&hObject_2, arg1) != 0)
    BOOL eax_1 = sub_427ad0(arg2, var_4)
    
    if (eax_1.b != 0)
        uint32_t edi_2 = arg2[1]
        
        if (edi_2 != 0)
            eax_1 = sub_6021f0(&hObject_2, edi_2, *arg2)
        
        if (edi_2 == 0 || eax_1.b != 0)
            BOOL hObject_1 = hObject_2
            
            if (hObject_1 != 0xffffffff && CloseHandle(hObject_1) != 0)
                hObject_1 = 0xffffffff
            
            arg2[3] = 0
            
            if (hObject_1 != 0xffffffff)
                CloseHandle(hObject_1)
            
            eax_1.b = 1
            return eax_1

BOOL hObject = hObject_2

if (hObject != 0xffffffff)
    CloseHandle(hObject)

hObject.b = 0
return hObject
