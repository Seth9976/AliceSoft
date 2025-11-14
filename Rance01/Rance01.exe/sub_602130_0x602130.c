// 函数: sub_602130
// 地址: 0x602130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hObject_1 = 0xffffffff
int32_t var_8 = 0
int32_t result = 0
int32_t* edi
bool cond:0 = sub_601f00(&hObject_1, edi) != 0
HANDLE hObject = hObject_1

if (cond:0)
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    return result

if (hObject != 0xffffffff)
    CloseHandle(hObject)

return 0
