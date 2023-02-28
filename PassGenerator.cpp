#include <iostream>
#include <string>
#include <time.h>
#include "Colors.h"
#include <conio.h>
#include <fstream>
#include <clocale>
#include "FileInfo.h"
using namespace std;

struct fDataVal
{
		int64_t bProgress = 0;
	int64_t bMs = 0;
	int64_t bLenLimit = 0;
	int64_t m_key = 0;
	int64_t gColor_0 = 0;
	int64_t gColor_1 = 0;
	int64_t gColor_2 = 0;
	int64_t gColor_3 = 0;
	int64_t bItemPo = 1;
	int64_t bSound = 0;
	int64_t c = 0;
	int64_t bDuration = 0;
	int64_t mCRCGen = 0;
	uint64_t mDataColFL0 = 0;
	uint64_t mDataColFL1 = 0;
	uint64_t mDataColFL2 = 0;
	uint64_t mDataColFL3 = 0;
	uint64_t mPointItm = 0;
	uint64_t sxFileParsing = 1;
	uint64_t mSxLangPoint = 0;
	uint64_t mSxShowCtrl = 0;
	uint64_t dColorText  = 30;
	uint64_t nKeyHandle = 0;
	uint64_t bTurn = 0;
	uint64_t b1 = 0;
	uint64_t dColorFreq = 0;
	uint64_t dColorDur = 0;
};
 class  PassGen
{
	public:
bool fCheckKey(string fKeyOut)
{
	string fStrKey;
	ifstream fKeyFile("PassGen.cfg");
	fKeyFile.is_open();
	if(!fKeyFile.is_open())
	{
		return false;
	}
	if(fKeyFile.is_open())
	{
		while(getline(fKeyFile,fStrKey))
		{
			cout<<"Checking.."<<endl;
		}
		if(fKeyOut == fStrKey)
		{
			return true;
		}
		
	}
}
};

int main()
{
	setlocale(0,"rus");
	SetColorAMD64(15);
	cout<<"\t\t";
	SetColorAMD64(30);
	cout<<"                                               "<<endl;
		SetColorAMD64(15);
	cout<<"\t\t";
	SetColorAMD64(30);
	cout<<"                                               "<<endl;
		SetColorAMD64(15);
	cout<<"\t\t";
	SetColorAMD64(30);
	cout<<"                                               "<<endl;
		SetColorAMD64(15);
	cout<<"\t\t";
	SetColorAMD64(30);
	cout<<"       --Скоро будет реализовано все           "<<endl;
		SetColorAMD64(15);
	cout<<"\t\t";
	SetColorAMD64(30);
	cout<<" а это Загрузка из файла свой набор символов   "<<endl;
		SetColorAMD64(15);
	cout<<"\t\t";
	SetColorAMD64(30);
	cout<<" Pass Generator by HCPP20334(HCPP Studio)      "<<endl;
		SetColorAMD64(15);
	cout<<"\t\t";
	SetColorAMD64(30);
	cout<<"  -Пофикшен Баг с Загрузкой из файла Symb.txt  "<<endl;
		SetColorAMD64(15);
	cout<<"\t\t";
	SetColorAMD64(30);
	cout<<"                                               "<<endl;
		SetColorAMD64(15);
	cout<<"\t\t";
	SetColorAMD64(30);
	cout<<"                                               \n"<<endl;
		SetColorAMD64(15);
	cout<<"Нажмите чтобы продолжить любую кнопку..."<<endl;
	
	_getch();
	system("cls");
	string gCols = "120";
	string gLines ="30";
	//ShowCursor(0);
//system(("mode con cols="+gCols+"  lines="+gLines).c_str());
	string bStrSymbols = "abcdefghijklmnopqrstuvwxyz"
	                     "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	                     "_123456789";
	   string fBar[] = 
   {
   "Ы                      ",
   "ЫЫ                     ",
   "ЫЫЫ                    ",
   "ЫЫЫЫ                   ",
   "ЫЫЫЫЫ                  ",
   "ЫЫЫЫЫЫ                 ",
   "ЫЫЫЫЫЫЫ                ",
   "ЫЫЫЫЫЫЫЫ               ",
   "ЫЫЫЫЫЫЫЫЫ              ",
   "ЫЫЫЫЫЫЫЫЫЫ             ",
   "ЫЫЫЫЫЫЫЫЫЫЫ            ",
   "ЫЫЫЫЫЫЫЫЫЫЫЫ           ",
   "ЫЫЫЫЫЫЫЫЫЫЫЫЫ          ",
   "ЫЫЫЫЫЫЫЫЫЫЫЫЫЫ         ",
   "ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ        ",
   "ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ       ",
   "ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ      ",
   "ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ     ",
   "ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ    ",
   "ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ   ",
   "ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ  ",
   "ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ ",
   "ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ"
   };
	                     
	fDataVal fDataByte;
	fDataByte.bProgress = 0;
	fDataByte.bMs = 0;
	fDataByte.bLenLimit = 0;
	fDataByte.m_key = 0;
	fDataByte.gColor_0 = 0;
	fDataByte.gColor_1 = 0;
	fDataByte.gColor_2 = 0;
	fDataByte.gColor_3 = 0;
	fDataByte.bItemPo = 1;
    fDataByte.bSound = 0;
	fDataByte.c = 0;
	fDataByte.bDuration = 0;
	fDataByte.mCRCGen = 0;
	fDataByte.mDataColFL0 = 0;
	fDataByte.mDataColFL1 = 0;
	fDataByte.mDataColFL2 = 0;
	fDataByte.mPointItm = 0;
	fDataByte.sxFileParsing = 1;
	fDataByte.mSxLangPoint = 0;
	fDataByte.mSxShowCtrl = 0;
	fDataByte.dColorText  = 30;
	fDataByte.nKeyHandle = 0;
	fDataByte.bTurn = 0;
	fDataByte.b1 = 0;
	fDataByte.dColorDur = 0;
	fDataByte.dColorFreq = 0;
	string bStrPass;
	string bBar;
	bool bGen = false;
	bool bSecretMenu  = true;
	bool bLoader = false;
	bool mLangRus = true;
	bool bShowKeys;
	bool dFileLoaded = false;
	bool dFileLoadedSymb  = false;
	bool dFileInfo = false;
	bool dKeyAccept = false;
	string sConteinerEdit0;
	string sConteinerEdit1;
	string sConteinerEdit2;
	string mSetSymbFile;
	string mSetSymbYourFile;
	string dBufferStr = "\t\t\t";
	string dKeyHash;
	string dLockLenLimit;
	string dLockStr;
	PassGen fData;
	uint64_t fSoundTestKeyPresed = 0;
		HANDLE hEngineHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	string mItemConteinerEn[] =
	{
		"Max Length",
		"FileLoader",
		"Generate  ",
		"    Load to Symb.txt    ",
		"    Load to your file   ",
		"    Back                "
	};
	string mItemConteinerRus[] = 
	{
	"Макс.длина пароля", //0
	"Работа с файлами ",//1
	"Сгенерировать    ",//2
	"Загрузить из  Symb.txt   ",//3
	"Загрузить из твоего файла",//4
	" Назад                   "	//5
	};
		uint64_t mSzStrDataBuffer = mSetSymbFile.size();
	char mSxFileName[256];
	char mSxNull[256] = "";
		if(fData.fCheckKey("mgoaD4SgHQA0"))
	{
	dKeyAccept = true;	
	}
	for(int64_t gMenu = 1; gMenu > 0; gMenu++)
	{
		srand(time(0));
		  if(bGen)
     {
     for(fDataByte.mCRCGen = 1;fDataByte.mCRCGen <= fDataByte.bLenLimit; fDataByte.mCRCGen++)
	{
		
					fDataByte.bProgress++;	
					//system(("title Rendered:"+ to_string(bProgress)).c_str());
		bStrPass = bStrPass + bStrSymbols[rand() % 93];	
//		if(bStrSymbols[rand() % 93]  != bStrPass)
//		{
//			bStrPass[bProgress];
//		}
	}
	if(bStrPass.size() > fDataByte.bLenLimit)
	{
		bStrPass = bStrPass[fDataByte.bLenLimit];
	}
//	cout<<" Generation.."<<fBar[fProcent++]<<endl;
//	if(fProcent > 22)
//	{
//		fProcent = 22;
//	}
cls(hEngineHandle);
	cout<<"Register:"<<&fDataByte.mCRCGen<<" | LenLimit:"<<fDataByte.bLenLimit<<" |Size: "<<bStrPass.size() + sizeof(&bStrPass)<<endl;
	cout<<"CRC_PassWord:"<<bStrPass<<endl;
	SetWindowText(GetConsoleWindow(),"[ENTER] -  Reload [R] - Write to File 'Pass.txt'");
	if(!GetAsyncKeyState(VK_RETURN))
	{
		bStrPass = bStrPass;
	}
	if(GetAsyncKeyState(VK_RETURN))
	{
		fDataByte.mCRCGen = 1;
		bStrPass = "";
		system("cls");
	}
			
}
if(!bGen)
{
		if(GetAsyncKeyState(VK_RETURN))
              	{
              		system("cls");
				  }
	 if(bLoader)
              {
              			  	fDataByte.mPointItm = 0;
	         for(uint64_t mSzFileLoader = 1;mSzFileLoader > 0; mSzFileLoader++)
	         {
	         	if(dFileLoaded && dFileLoadedSymb)
	         	{
	         		dFileInfo = true;
				 }
	         	  if(fDataByte.mPointItm == 0)
			        {
			  	      fDataByte.mDataColFL0 = 82;
			  	      fDataByte.mDataColFL1 = 0;
			  	      fDataByte.mDataColFL2 = 0;
			  	      fDataByte.mDataColFL3 = 0;
			        }
			        if(fDataByte.mPointItm == 1)
			        {
			  	      fDataByte.mDataColFL0 = 0;
			  	      fDataByte.mDataColFL1 = 82;
			  	      fDataByte.mDataColFL2 = 0;
			  	      fDataByte.mDataColFL3 = 0;
			        }
			        if(fDataByte.mPointItm == 2)
			        {
			  	      fDataByte.mDataColFL0 = 0;
			  	      fDataByte.mDataColFL1 = 0;
			  	      fDataByte.mDataColFL2 = 82;
			  	      fDataByte.mDataColFL3 = 0;
			        }
			        if(fDataByte.mPointItm == 3)
			        {
			  	      fDataByte.mDataColFL0 = 0;
			  	      fDataByte.mDataColFL1 = 0;
			  	      fDataByte.mDataColFL2 = 0;
			  	      fDataByte.mDataColFL3 = 97;
			        }
	         		cls(hEngineHandle);
	        if(!mLangRus)
	         {
	         	cout<<"\n\n\n";
	         	 	SetColorAMD64(15);
		  	cout<<"\t\t\t";
	         			  	SetColorAMD64(71);
		  	cout<<"           FileLoader            "<<endl;
		  	SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(15 + fDataByte.mDataColFL0);
		  	cout<<"   "<< mItemConteinerEn[3]<<"      "<<endl;
		  	 	SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(15 + fDataByte.mDataColFL1);
		  	cout<<"   "<< mItemConteinerEn[4]<<"      "<<endl;
		  	 	SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(15 + fDataByte.mDataColFL2);
		  	cout<<"   "<< mItemConteinerEn[5]<<"      "<<endl;
		  	 	cout<<"\t\t\t";
		  	SetColorAMD64(15 + fDataByte.mDataColFL3);
		  	cout<<"   "<<" Return Standard CharSet"<<"      "<<endl;
		  	 	SetColorAMD64(15);
			 }
	         if(mLangRus)
	         {
	         	cout<<"\n\n\n";
	         	SetColorAMD64(15);
		  	cout<<"\t\t\t";
	         			  	SetColorAMD64(71);
		  	cout<<"              FileLoader            "<<endl;
		  	 	SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(15 + fDataByte.mDataColFL0);
		  	cout<<"   "<< mItemConteinerRus[3]<<"      "<<endl;
		  	 	SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(15 + fDataByte.mDataColFL1);
		  	cout<<"   "<< mItemConteinerRus[4]<<"      "<<endl;
		  	 	SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(15 + fDataByte.mDataColFL2);
		  	cout<<"   "<< mItemConteinerRus[5]<<"      "<<endl;
		  		  	 	cout<<"\t\t\t";
		  	SetColorAMD64(15 + fDataByte.mDataColFL3);
		  	cout<<"   "<<"Вернуть символы назад"<<"      "<<endl;
		  	 	SetColorAMD64(15);
			 }
		  	SetColorAMD64(15);
		  fDataByte.nKeyHandle = 	_getch();
		          if(GetAsyncKeyState('R'))
		          {
		          gMenu = -1;
		          	bLoader = false;
			mSzFileLoader = -1;
					system("cls");
					   gMenu = 1;
		          	bLoader = false;
				mSzFileLoader = 1;
		          	
				  }
		  	      if(fDataByte.nKeyHandle == 'e')
		  	      {
		  	         	cin >> sConteinerEdit0;
		  	      	mItemConteinerRus[3] = sConteinerEdit0;
		  	      		cin >> sConteinerEdit1;
		  	      	mItemConteinerRus[4] = sConteinerEdit1;
		  	      		cin >> sConteinerEdit2;
		  	      	mItemConteinerRus[5] = sConteinerEdit2;
					}
		  	      if(fDataByte.nKeyHandle == 13)
		  	      {
		  	      	//dFileInfo = true;
		  	      	if(fDataByte.mPointItm == 0)
		  	      	{
		  	      	ifstream mFileSymb("symb.txt");
						mFileSymb.is_open();
						if(mFileSymb.is_open())
						{
							dFileLoadedSymb = true;
							dFileInfo = true;
						}
						if(!mFileSymb.is_open())
						{
							Sleep(1000);
							cout<<"[ERROR] File not Open!!"<<endl;
							dFileLoadedSymb = false;
							dFileInfo = false;
						}
					while(getline(mFileSymb,bStrSymbols));
					mFileSymb.close();
				//	cout<<"File "	
					}
					if(fDataByte.mPointItm == 1)
		  	      	{
		  	      	cin >> mSxFileName[256];
					cout<<"File:"<<mSxFileName<<" Added!!"<<endl;
					ifstream mFileSymb(mSxFileName);
		  	      	cout<<"Reading file.."<<endl;
						mFileSymb.is_open();
						if(mFileSymb.is_open())
						{
							dFileLoaded = true;
						}
						bStrSymbols = "";
						if(!mFileSymb.is_open())
						{
							Sleep(1000);
							cout<<"[ERROR] File not Open!!"<<endl;
							dFileLoaded = false;
							bStrSymbols = "abcdefghijklmnopqrstuvwxyz"
	                              "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	                              "_1234567890"; 
	                              mSxFileName[256] = mSxNull[256];
						}
					while(getline(mFileSymb,bStrSymbols));	
					}
					if(fDataByte.mPointItm == 2)
		  	      	{
		  	      	cout<<"Back"<<endl;
				bLoader = false;
//				"abcdefghijklmnopqrstuvwxyz"
//	                     "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
//	                     "_1234567890";
                  if(!dFileLoaded && !dFileLoadedSymb)
                  {
                  	bStrSymbols = "abcdefghijklmnopqrstuvwxyz"
	                              "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	                              "_1234567890";
				  }
			mSzFileLoader = -1;
					// system("cls");
					
//					fDataByte.bItemPo = 0;
					}
					if(fDataByte.mPointItm == 2)
					{
						bStrSymbols = "abcdefghijklmnopqrstuvwxyz"
	                              "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	                              "_1234567890";
					}
					}
			      if(GetAsyncKeyState('S'))
		  	    {
		  	     fDataByte.mPointItm++;
			        if(fDataByte.mPointItm > 2)
			        {
			  	      fDataByte.mPointItm = 0;
			        }	
			    }
			       if(GetAsyncKeyState('W'))
		  	    {
		  	      fDataByte.mPointItm--;
			        if(fDataByte.mPointItm < 0)
			        {
			  	      fDataByte.mPointItm = 2;
			        }	
			    }
			 }
			  }
			  if(!bLoader)
			  {
			  	fDataByte.mPointItm = 5;
     if(mLangRus)
     {
     	cls(hEngineHandle);
     	 		if(dKeyAccept)
	         	{
	         		dLockStr = ":Разблокированно";
	         			dLockLenLimit = ":Неограничено";
				 }
				 	if(!dKeyAccept)
	         	{
	         		dLockStr = ":Заблокированно";
	         			dLockLenLimit = ":Макс 6 символов";
				 }
//     					system("cls");
     							SetColorAMD64(15);
		  	cout<<"\n\n\n\n";
     					SetColorAMD64(15);
		  	cout<<"\t\t\t";
				SetColorAMD64(139);
	cout<<"               PassGenerator v 1.1                                "<<endl;
				SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
	cout<<"__________________________________________________________________"<<endl;
//	SetColorAMD64(15);
//		  	cout<<"\t\t\t";
//	SetColorAMD64(158+fDataByte.gColor_0);
//	cout<<"\t  "<<mItemConteinerRus[0]<<"          "<<fDataByte.bLenLimit<<dLockLenLimit<<endl;
//	SetColorAMD64(15);
//		  	cout<<"\t\t\t";	
//		SetColorAMD64(158+fDataByte.gColor_1);
//	cout<<"\t "<<mItemConteinerRus[1]<<"          "<<dLockStr<<endl;
//	SetColorAMD64(15);
//		  	cout<<"\t\t\t";	
//		SetColorAMD64(158+fDataByte.gColor_2);
//	cout<<"\t "<<mItemConteinerRus[2]<<"                          "<<endl;
SetColorAMD64(15);
	  	cout<<"\t\t\t";
SetColorAMD64(158);
cout<<"                                                                  "<<endl;
SetColorAMD64(15);
	  	cout<<"\t\t\t";
    SetColorAMD64(158+fDataByte.gColor_0);
    cout<<"  "<<mItemConteinerRus[0]<<"                                               :";
    SetColorAMD64(15);
	cout<<fDataByte.bLenLimit<<dLockLenLimit<<endl;
    SetColorAMD64(15);
	  	cout<<"\t\t\t";
SetColorAMD64(158);
cout<<"                                                                  "<<endl;
SetColorAMD64(15);
    SetColorAMD64(15);
	  	cout<<"\t\t\t";
    SetColorAMD64(158+fDataByte.gColor_1);
    cout<<"  "<<mItemConteinerRus[1]<<"                                               "<<endl;
    SetColorAMD64(15);
	  	cout<<"\t\t\t";
SetColorAMD64(158);
cout<<"                                                                  "<<endl;
SetColorAMD64(15);
    SetColorAMD64(15);
	  	cout<<"\t\t\t";
    SetColorAMD64(158+fDataByte.gColor_2);
    cout<<"  "<<mItemConteinerRus[2]<<"                                               "<<endl;
    SetColorAMD64(15);
    SetColorAMD64(15);
	  	cout<<"\t\t\t";
SetColorAMD64(158);
cout<<"                                                                  "<<endl;
SetColorAMD64(15);
SetColorAMD64(15);
	  	cout<<"\t\t\t";
SetColorAMD64(158);
cout<<"                                                                  "<<endl;
SetColorAMD64(15);
if(fDataByte.bItemPo != 1)
{
cout<<" W - Вверх , S - Вниз ,[ENTER] - OK                "<<endl;
}
}
if(fDataByte.bItemPo)
{
cout<<"[+] - Длина Пароля + 1, [-] - Длина пароля  - 1 , "<<endl;
	 }
	    if(!mLangRus)
     {
     	 		if(dKeyAccept)
	         	{
	         		dLockStr = ":Unlocked";
	         		dLockLenLimit = ":Unlimited";
				 }
				 	if(!dKeyAccept)
	         	{
	         		dLockStr = ":Locked";
	         		dLockLenLimit = ":Max 6";
				 }
     					system("cls");
     					SetColorAMD64(15);
		  	cout<<"\n\n\n\n";
		  	SetColorAMD64(15);
		  	cout<<"\t\t\t";
				SetColorAMD64(112);
	cout<<"\t             PassGenerator v 1.1          "<<endl;
	SetColorAMD64(15);
		  	cout<<"\t\t\t\t";
	SetColorAMD64(15+fDataByte.gColor_0);
	cout<<"\t  "<<mItemConteinerEn[0]<<"         "<<fDataByte.bLenLimit<<dLockLenLimit<<endl;
	SetColorAMD64(15);
		  	cout<<"\t\t\t\t";	
		SetColorAMD64(15+fDataByte.gColor_1);
	cout<<"\t "<<mItemConteinerEn[1]<<"          "<<dLockStr<<endl;
	SetColorAMD64(15);
		  	cout<<"\t\t\t\t";	
		SetColorAMD64(15+fDataByte.gColor_2);
	cout<<"\t "<<mItemConteinerEn[2]<<"          "<<endl;
	 }
	 SetColorAMD64(15);
//	if(bShowKeys)
//	{
//	cls(hEngineHandle);
//		cout<<"\n\n\n";
//		Sleep(16);
//		SetColorAMD64(15);
//	  cout<<"\t\t\t";
//	  	SetColorAMD64(1300);
//	  cout<<"                 CONTROLS                 "<<endl;
//	  	SetColorAMD64(15);
//	  	Sleep(16);
//	  cout<<"\t\t\t";
//	  SetColorAMD64(1300);
//	  cout<<"                                          "<<endl;
//	  Sleep(16);
//	  	SetColorAMD64(15);
//	  cout<<"\t\t\t";
//	  SetColorAMD64(30);
//	  cout<<"               W/S Up/Down                "<<endl;
//	  Sleep(16);
//	  	SetColorAMD64(15);
//	  cout<<"\t\t\t";
//	  SetColorAMD64(30);
//	  cout<<"               +/- only 1 item            "<<endl;
//	  Sleep(16);
//	  	SetColorAMD64(15);
//	  cout<<"\t\t\t";
//	  SetColorAMD64(30);
//	  cout<<"               Enter - OK                 "<<endl;
//	  Sleep(16);
//	  	SetColorAMD64(15);
//	  cout<<"\t\t\t";
//	  SetColorAMD64(30);
//	  cout<<"               L - switch language        "<<endl;
//	  Sleep(16);
//	  	SetColorAMD64(15);
//	  cout<<"\t\t\t";
//	  SetColorAMD64(30);
//	  cout<<"               С - close item             "<<endl;
//	  Sleep(16);
//	  	SetColorAMD64(15);
//	  cout<<"\t\t\t";
//	  SetColorAMD64(30);
//	  cout<<"                                          "<<endl;
//	  Sleep(16);
//	  	SetColorAMD64(15);
//	  cout<<"\t\t\t";
//	  SetColorAMD64(30);
//	  cout<<"                                          "<<endl;
//	  SetColorAMD64(15);
//	}
//	
//	if(!bShowKeys)
//	{
//		cls(hEngineHandle);
//		cout<<"\n\n\n\t\t\t C - Show Controls/Показать управление"<<endl;
//	}
	if(!dKeyAccept)
	{
		cls(hEngineHandle);
		cout<<"F5 - Activate program"<<endl;
	}
//	if(!dFileInfo)
//	{
//			 		cout<<"\t\t";
//			if(!dFileLoadedSymb && !dFileLoaded)
//			{
//				 SetColorAMD64(15);
//				cout<<"\t\t\t";
//				SetColorAMD64(158);
//				cout<<"                                           "<<endl;
//				 SetColorAMD64(15);
//				cout<<"\t\t\t";
//				SetColorAMD64(158);
//				cout<<"                                           "<<endl;
//				 SetColorAMD64(15);
//				cout<<"\t\t\t";
//				SetColorAMD64(158);
//				cout<<"       Stardard's Symbols' Loaded!!        "<<endl;
//				 SetColorAMD64(15);
//				cout<<"\t\t\t";
//				SetColorAMD64(158);
//				cout<<"                                           "<<endl;
//				 SetColorAMD64(15);
//				cout<<"\t\t\t";
//				SetColorAMD64(158);
//				cout<<"                                           "<<endl;
//				SetColorAMD64(15);
//				Sleep(100);
//				dFileInfo = false;
//			}
//	}
//    if(dFileInfo)
//    {
//    		cout<<"\t\t";
//    		SetColorAMD64(1300);
//	cout<<"                                   STATUS                        "<<endl;
//	 SetColorAMD64(15);
//	if(strlen(mSxFileName) == 0)
//	{
//		if(dFileLoadedSymb)
//			{
//				cout<<"\t\t\t";
//				SetColorAMD64(14);
//				cout<<"[FILE] file 'symb.txt' Loaded!!  | Length:"<<bStrSymbols.size()<<" | Open to reg:"<<&bStrSymbols<<"\n"<<endl;
//				 SetColorAMD64(15);
//			}
//	}
//	if(dFileLoaded)
//	{
//		SetColorAMD64(10);
//	 cout<<"[FILE] file '"<<mSxFileName[256]<<"' Loaded!!"<<"reg:"<<&bStrSymbols<<"\n"<<endl;
//	 SetColorAMD64(15);
//	}
//	}
	fDataByte.m_key = getch();
	if(fDataByte.m_key == '3')
	{
		fDataByte.bLenLimit = fDataByte.bLenLimit + 1000;
	}
	if(GetAsyncKeyState('R'))
	{
		bStrSymbols = "abcdefghijklmnopqrstuvwxyz"
	                     "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	                     "_123456789";
	}
	if(fDataByte.m_key == 'c')
	{
		fDataByte.mSxShowCtrl++;
		if(fDataByte.mSxShowCtrl > 1)
		{
			fDataByte.mSxShowCtrl = 0;
			
		}
		if(fDataByte.mSxShowCtrl == 0)
		{
			bShowKeys = false;
		}
		if(fDataByte.mSxShowCtrl == 1)
		{
			bShowKeys = true;
		}
	}
	if(fDataByte.m_key == 'l')
	{
		fDataByte.mSxLangPoint++;
		if(fDataByte.mSxLangPoint > 1)
		{
			fDataByte.mSxLangPoint = 0;
		}
		if(fDataByte.mSxLangPoint == 0)
		{
			mLangRus = false;
		}
			if(fDataByte.mSxLangPoint == 1)
		{
			mLangRus = true;
		}
	}
	if(GetAsyncKeyState(VK_F5))
	{
		system("cls");
		SetColorAMD64(71);
		cout<<"                        KEY                     "<<endl;
		SetColorAMD64(15);
		cout<<"    Enter Key Product:";
		SetColorAMD64(47);
		cin >> dKeyHash;
		SetColorAMD64(15);
//		if(dKeyHash == "turns")
//		{
//			for(int64_t dturns = 1; dturns > 0; dturns++)
//			{
//				
//				system("cls");
//        cout<<"bool bGen = "<<bGen<<endl;
//	    cout<<"bool bSecretMenu  ="<<bSecretMenu<<endl; 
//	    cout<<"bool bLoader = "<<bLoader<<endl;
//	    cout<<"bool mLangRus ="<<mLangRus<<endl; 
//	    cout<<"bool bShowKeys ="<<bShowKeys<<endl; 
//	    cout<<"bool dFileLoaded = "<<dFileLoaded<<endl; 
//	    cout<<"bool dFileLoadedSymb = "<<dFileLoadedSymb<<endl; 
//	    cout<<"bool dFileInfo = "<<dFileInfo<<endl; 
//	    cout<<"bool dKeyAccept ="<<dKeyAccept<<endl;  
//	     bTurn = _getch();
//	       if(bTurn == '1')
//	       {
//	        dturns = -1;
//		   }
//			}
//		}
		if(dKeyHash == "mgoaD4SgHQA0")
		{
		dKeyAccept = true;	
		cout<<"     Программа активирована!!"<<endl;
		} 
		else 
		{
			
		cout<<"      Неверный Ключ Продукта!!"<<endl;
		Sleep(1000);
		system("cls");
		dKeyAccept = false;	
		}
	}
	if(fDataByte.m_key == 12)
	{
	dKeyAccept = false;
	}
	if(fDataByte.m_key == 2)
	{
	dKeyAccept = true;
	}
	if(fDataByte.m_key == VK_RETURN)
	{
		  if(fDataByte.bItemPo == 1)
		  {
            if(dKeyAccept)
            {
            	 bLoader = true;
			}
			else 
			{
				Beep(330,50);
				SetColorAMD64(15);
				cout<<"\t\t\t";
				SetColorAMD64(137);
			cout<<"                    ERROR                  "<<endl;
				SetColorAMD64(15);
				cout<<"\t\t\t";
					SetColorAMD64(137);
			cout<<"                                           "<<endl;
				SetColorAMD64(15);
				cout<<"\t\t\t";
					SetColorAMD64(137);
			cout<<"          PROGRAM NOT  ACTIVATE!!          "<<endl;
				SetColorAMD64(15);
				cout<<"\t\t\t";
					SetColorAMD64(137);
			cout<<"                                           "<<endl;
				SetColorAMD64(15);
				cout<<"\t\t\t";
					SetColorAMD64(137);
			cout<<"                                           "<<endl;
				SetColorAMD64(15);
				Sleep(2000);
				system("cls");
				dKeyAccept = false;
			}
			 
		  }
	      if(fDataByte.bItemPo == 2)
	      {
	      		gMenu = 0;
		system("cls");
		bGen  = true;
		  }
	     if(fDataByte.bItemPo == 3)
	     {
	     		for(int64_t dSoundTest = 1;dSoundTest > 0;dSoundTest++)
		{
			system("cls");
		  	Beep(fDataByte.bSound,fDataByte.bDuration);
		  			SetColorAMD64(15); 	
		SetColorAMD64(15);
		  	cout<<"\t\t\t\t";
			SetColorAMD64(240  - fDataByte.dColorFreq);
			cout<<"\tFreq="<<fDataByte.bSound<<"Hz\n"<<endl;
					SetColorAMD64(15);
		  	cout<<"\t\t\t\t";\
		  		SetColorAMD64(240 + fDataByte.dColorDur);
			cout<<"\tDuration="<<fDataByte.bDuration<<"Ms"<<endl;
				SetColorAMD64(15);
				fSoundTestKeyPresed = _getch();
				if(fSoundTestKeyPresed == 4)
      	{
      		fDataByte.bDuration = fDataByte.bDuration + 10;
      		fDataByte.dColorDur = 100;
      		fDataByte.dColorFreq = 0;
		}
		if(fSoundTestKeyPresed == 1)
      	{
      		fDataByte.bDuration = fDataByte.bDuration - 10;
      		if(fDataByte.bDuration < 0)
      		{
      		fDataByte.bDuration = 1;	
			}
		}
    if(fSoundTestKeyPresed == '+')
	{
		fDataByte.bSound = fDataByte.bSound + 10;
		if(fDataByte.bSound > 100)
		{
			fDataByte.bSound = fDataByte.bSound + 50;
		}
			fDataByte.dColorDur = 0;
      		fDataByte.dColorFreq = 100;
	}
	if(fSoundTestKeyPresed == '-')
	{
		fDataByte.bSound = fDataByte.bSound - 10;
	}
		if(fSoundTestKeyPresed == 27)
	{
	dSoundTest = -1;
	bSecretMenu = false;
	}
		}
		 }
		
	}
	//560 Hz - SoundGun0
	//600 Hz - SoundGun1
	//2230 Hz - SoundGun2
	if(fDataByte.m_key == 'w')
	{
		fDataByte.bItemPo--;
		if(fDataByte.bItemPo < 0)
		{
	        if(bSecretMenu)
	        {
	        	fDataByte.bItemPo = 3;
			}
			if(!bSecretMenu)
	        {
	        	fDataByte.bItemPo = 2;
			}
		}
		if(fDataByte.bItemPo == 0)
		{
			fDataByte.gColor_0 = 82;
			fDataByte.gColor_1 = 0;
			fDataByte.gColor_2 = 0;
			fDataByte.gColor_3 = 0;
		}
		if(fDataByte.bItemPo == 1)
		{
			fDataByte.gColor_0 = 0;
			fDataByte.gColor_1 = 82;
			fDataByte.gColor_2 = 0;
			fDataByte.gColor_3 = 0;
		}
		if(fDataByte.bItemPo == 2)
		{
			fDataByte.gColor_0 = 0;
			fDataByte.gColor_1 = 0;
			fDataByte.gColor_2 = 82;
			fDataByte.gColor_3 = 0;
       	}
		if(fDataByte.bItemPo == 3)
		{
			fDataByte.gColor_0 = 0;
			fDataByte.gColor_1 = 0;
			fDataByte.gColor_2 = 0;
			fDataByte.gColor_3 = 97;
		}
	}
	if(fDataByte.m_key == 's')
	{
		fDataByte.bItemPo++;
		if(fDataByte.bItemPo > 2)
		{
			fDataByte.bItemPo = 0;
		}
		
		if(fDataByte.bItemPo == 0)
		{
			fDataByte.gColor_0 = 82;
			fDataByte.gColor_1 = 0;
			fDataByte.gColor_2 = 0;
			fDataByte.gColor_3 = 0;
		}
		if(fDataByte.bItemPo == 1)
		{
			fDataByte.gColor_0 = 0;
			fDataByte.gColor_1 = 82;
			fDataByte.gColor_2 = 0;
			fDataByte.gColor_3 = 0;
		}
		if(fDataByte.bItemPo == 2)
		{
			fDataByte.gColor_0 = 0;
			fDataByte.gColor_1 = 0;
			fDataByte.gColor_2 = 82;
			fDataByte.gColor_3 = 0;
		}
		if(fDataByte.bItemPo == 3)
		{
			fDataByte.gColor_0 = 0;
			fDataByte.gColor_1 = 0;
			fDataByte.gColor_2 = 0;
			fDataByte.gColor_3 = 97;
		}
	}
      if(fDataByte.bItemPo == 0)
      {
    if(fDataByte.m_key == '+')
	{
		if(dKeyAccept)
		{
			fDataByte.bLenLimit++;
		}
			if(!dKeyAccept)
		{
			fDataByte.bLenLimit++;
			if(fDataByte.bLenLimit > 6)\
			{
				fDataByte.bLenLimit = 6;
				dLockLenLimit = ":Error";
			}
		}
	}
	if(fDataByte.m_key == '-')
	{
			if(dKeyAccept)
		{
			fDataByte.bLenLimit--;
		}
			if(!dKeyAccept)
		{
			fDataByte.bLenLimit--;
			if(fDataByte.bLenLimit < 0)
			{
				fDataByte.bLenLimit = 4;
				dLockLenLimit = ":Error min 4";
			}
	}
	  }
	  if(fDataByte.m_key == 'p')
	  {
	  	fDataByte.c++;
	  	if(fDataByte.c > 3)
	  	{
	  		fDataByte.c = 3;
		}
		if(fDataByte.c == 3)
		{
			bSecretMenu = true;
		}
	  }
    }
}
}
}
}
