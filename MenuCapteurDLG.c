/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.30                          *
*        Compiled Jul  1 2015, 10:50:32                              *
*        (c) 2015 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END

#include "DIALOG.h"
#include "stdio.h"
/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_WINDOW_0     (GUI_ID_USER + 0x01)
#define ID_TEXT_0     (GUI_ID_USER + 0x03)
#define ID_TEXT_1     (GUI_ID_USER + 0x04)
#define ID_TEXT_2     (GUI_ID_USER + 0x05)
#define ID_TEXT_3     (GUI_ID_USER + 0x06)
#define ID_TEXT_4     (GUI_ID_USER + 0x07)
#define ID_BUTTON_0     (GUI_ID_USER + 0x08)



// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "MenuCapteur", ID_WINDOW_0, 0, 0, 480, 272, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "Capteur 4 :", ID_TEXT_0, 32, 171, 80, 20, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "Capteur 3 :", ID_TEXT_1, 27, 144, 80, 20, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "Capteur 2 :", ID_TEXT_2, 28, 119, 80, 20, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "Capteur 1 :", ID_TEXT_3, 26, 93, 80, 20, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "Capteur 5 :", ID_TEXT_4, 29, 201, 80, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "retour", ID_BUTTON_0, 11, 13, 80, 20, 0, 0x0, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
// USER END

/*********************************************************************
*
*       _cbDialog
*/
extern WM_HWIN hDlg2,hDlg,hDlg3,hDlg4;
char c1,c2,c3,c4,c5;
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int     NCode,i;
  int     Id;
	char buff[20];
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Capteur 1 :'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_0);
		sprintf(buff,"capteur1: %d ",c1);
		TEXT_SetText(hItem,buff);
    TEXT_SetFont(hItem, GUI_FONT_13_1);
		hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_1);
		sprintf(buff,"capteur2: %d ",c2);
		TEXT_SetText(hItem,buff);
    TEXT_SetFont(hItem, GUI_FONT_13_1);
		hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_2);
		sprintf(buff,"capteur3: %d ",c3);
		TEXT_SetText(hItem,buff);
    TEXT_SetFont(hItem, GUI_FONT_13_1);
		hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_3);
		sprintf(buff,"capteur4: %d ",c4);
		TEXT_SetText(hItem,buff);
    TEXT_SetFont(hItem, GUI_FONT_13_1);
		hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_4);
		sprintf(buff,"capteur5: %d ",c5);
		TEXT_SetText(hItem,buff);
    TEXT_SetFont(hItem, GUI_FONT_13_1);
    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_BUTTON_0: // Notifications sent by 'retour'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
			WM_BringToTop(hDlg);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    // USER START (Optionally insert additional code for further Ids)
    // USER END
    }
    break;
  // USER START (Optionally insert additional message handling)
  // USER END
  default:
    WM_DefaultProc(pMsg);
		
  }
		
}



/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       CreateMenuCapteur
*/
WM_HWIN CreateMenuCapteur(void);
WM_HWIN CreateMenuCapteur(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)

// USER END

/*************************** End of file ****************************/
