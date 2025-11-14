// 函数: sub_6a4950
// 地址: 0x6a4950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HWND hDlg
int32_t nIDButton
enum DLG_BUTTON_CHECK_STATE uCheck

if (*arg2 == 0)
    uCheck = BST_UNCHECKED
    nIDButton = *(arg1 + 0x20)
    hDlg = *(arg1 + 0x1c)
else
    uCheck = BST_CHECKED
    nIDButton = *(arg1 + 0x20)
    hDlg = *(arg1 + 0x1c)

CheckDlgButton(hDlg, nIDButton, uCheck)
HWND hDlg_1
int32_t nIDButton_1
enum DLG_BUTTON_CHECK_STATE uCheck_1

if (*(arg2 + 1) == 0)
    uCheck_1 = BST_UNCHECKED
    nIDButton_1 = *(arg1 + 0x38)
    hDlg_1 = *(arg1 + 0x34)
else
    uCheck_1 = BST_CHECKED
    nIDButton_1 = *(arg1 + 0x38)
    hDlg_1 = *(arg1 + 0x34)

CheckDlgButton(hDlg_1, nIDButton_1, uCheck_1)
HWND hDlg_2
int32_t nIDButton_2
enum DLG_BUTTON_CHECK_STATE uCheck_2

if (*(arg2 + 2) == 0)
    uCheck_2 = BST_UNCHECKED
    nIDButton_2 = *(arg1 + 0x50)
    hDlg_2 = *(arg1 + 0x4c)
else
    uCheck_2 = BST_CHECKED
    nIDButton_2 = *(arg1 + 0x50)
    hDlg_2 = *(arg1 + 0x4c)

CheckDlgButton(hDlg_2, nIDButton_2, uCheck_2)
HWND hDlg_3
int32_t nIDButton_3
enum DLG_BUTTON_CHECK_STATE uCheck_3

if (*(arg2 + 3) == 0)
    uCheck_3 = BST_UNCHECKED
    nIDButton_3 = *(arg1 + 0x68)
    hDlg_3 = *(arg1 + 0x64)
else
    uCheck_3 = BST_CHECKED
    nIDButton_3 = *(arg1 + 0x68)
    hDlg_3 = *(arg1 + 0x64)

CheckDlgButton(hDlg_3, nIDButton_3, uCheck_3)
HWND hDlg_4
int32_t nIDButton_4
enum DLG_BUTTON_CHECK_STATE uCheck_4

if (*(arg2 + 4) == 0)
    uCheck_4 = BST_UNCHECKED
    nIDButton_4 = *(arg1 + 0x80)
    hDlg_4 = *(arg1 + 0x7c)
else
    uCheck_4 = BST_CHECKED
    nIDButton_4 = *(arg1 + 0x80)
    hDlg_4 = *(arg1 + 0x7c)

CheckDlgButton(hDlg_4, nIDButton_4, uCheck_4)
HWND hDlg_5
int32_t nIDButton_5
enum DLG_BUTTON_CHECK_STATE uCheck_5

if (*(arg2 + 5) == 0)
    uCheck_5 = BST_UNCHECKED
    nIDButton_5 = *(arg1 + 0x98)
    hDlg_5 = *(arg1 + 0x94)
else
    uCheck_5 = BST_CHECKED
    nIDButton_5 = *(arg1 + 0x98)
    hDlg_5 = *(arg1 + 0x94)

CheckDlgButton(hDlg_5, nIDButton_5, uCheck_5)

if (*(arg2 + 6) == 0)
    return CheckDlgButton(*(arg1 + 0xac), *(arg1 + 0xb0), BST_UNCHECKED)

return CheckDlgButton(*(arg1 + 0xac), *(arg1 + 0xb0), BST_CHECKED)
