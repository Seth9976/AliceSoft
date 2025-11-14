// 函数: sub_56b460
// 地址: 0x56b460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t lpdwProcessId = arg1
void* esi = *(arg1 + 4)

if ((**(esi + 0xc0))() != 0)
    return 1

HWND hWnd = GetActiveWindow()

if (hWnd == 0)
    hWnd.b = 0
    return hWnd

lpdwProcessId = 0xffffffff
GetWindowThreadProcessId(hWnd, &lpdwProcessId)
uint32_t eax_2
eax_2.b = lpdwProcessId == *(esi + 0xa8)
return eax_2
