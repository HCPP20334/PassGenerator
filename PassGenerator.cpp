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
    uint64_t fBufferSize0 = 0;
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

int main(int argc, char *argv[])
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
	cout<<"         Скоро будет реализовано все           "<<endl;
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
	cout<<" Press 'K' - Debug Menu                      \n"<<endl;
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
	fDataByte.fBufferSize0 = sizeof(fDataVal);
	int64_t fDebugMenu = 1;
	//
		int64_t fClr0 = 0;
		int64_t fClr1 = 0;
		int64_t fClr2 = 0;
		int64_t fClr3 = 0;
		int64_t fClr4 = 0;
		int64_t fClr5 = 0;
		//
		int64_t fDgPoint = 0;
		int64_t fSelPoint = 0;
		int64_t fKeyReset = 0;
		int64_t fFileSize = 0;
		int64_t bFileNumber = 0;
		int64_t fLic = 0;
		int64_t fBarPoint = 0;
		int (*uMem)(int,char**);
		uMem = &main;
		int64_t fTimeCurrent = 0;

		//
	string bStrPass;
	string bBar;
	string fGetFile;
	string fInfo;
	string fGetCommand;
	bool bGen = false;
	bool bSecretMenu  = true;
	bool bLoader = false;
	bool mLangRus = true;
	bool bShowKeys;
	bool dFileLoaded = false;
	bool dFileLoadedSymb  = false;
	bool dFileInfo = false;
	bool dKeyAccept = false;
	bool bDebugMenu = false;
	bool bFilePrefix = false;
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
		if(GetAsyncKeyState('K'))
		{
			bDebugMenu = true;
		}
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
    if(argv[1] == "-debug")
    {
    	bDebugMenu = true;
	}
	if(bDebugMenu)
	{
		for(fDebugMenu = 1;fDebugMenu > 0;fDebugMenu++)
	{
		//
		if(fDgPoint == 0)
		{
		fClr0 = 101;
		fClr1 = 0;
		fClr2 = 0;
		fClr3 = 0;
		fClr4 = 0;
		fClr5 = 0;
		fInfo = " Вызов меню в цикл с генерации Хэша CRC-32      ";
		}
		if(fDgPoint == 1)
		{
		fClr0 = 0;
		fClr1 = 101;
		fClr2 = 0;
		fClr3 = 0;
		fClr4 = 0;
		fClr5 = 0;
		fInfo = " Отключение и включение Проверки ключа активации";
		}
		if(fDgPoint == 2)
		{
		fClr0 = 0;
		fClr1 = 0;
		fClr2 = 101;
		fClr3 = 0;
		fClr4 = 0;
		fClr5 = 0;
		fInfo = " Вызов меню с Работа с файлами                  ";
		}
		if(fDgPoint == 3)
		{
		fClr0 = 0;
		fClr1 = 0;
		fClr2 = 0;
		fClr3 = 101;
		fClr4 = 0;
		fClr5 = 0;
		fInfo = " 0 - Англ.меню , 1 - Русское меню               ";
		}
		if(fDgPoint == 4)
		{
		fClr0 = 0;
		fClr1 = 0;
		fClr2 = 0;
		fClr3 = 0;
		fClr4 = 101;
		fClr5 = 0;
		fInfo = " Вызов меню с информации об Управлении          ";
		}
		cls(hEngineHandle);
	SetColorAMD64(30);
	cout<<"             Debug Menu                 "<<endl;
	SetColorAMD64(139+fClr0);
	cout<<"bGen:"<<bGen<<"                                  "<<endl;
	SetColorAMD64(139+fClr1);
	cout<<"dKeyAccept:"<<dKeyAccept<<"                            "<<endl;
	SetColorAMD64(139+fClr2);
	cout<<"bLoader:"<<bLoader<<"                               "<<endl;
	SetColorAMD64(139+fClr3);
	cout<<"mLangRus:"<<mLangRus<<"                              "<<endl;
	SetColorAMD64(139+fClr4);
	cout<<"bShowKeys:"<<bShowKeys<<"                             "<<endl;
	SetColorAMD64(240);
	cout<<" Save-[enter][SPACE]-select W/S Up/Down"<<endl;
	SetColorAMD64(113);
	cout<<"                    ИНФОРМАЦИЯ                     "<<endl;
	SetColorAMD64(139);
	cout<<"                                                   "<<endl;
	cout<<"                                                   "<<endl;
	cout<<"  "<<fInfo<<" "<<endl;
	cout<<"                                                   "<<endl;
	cout<<"                                                   "<<endl;
	_getch();
	if(GetAsyncKeyState('E'))
	{
	
	}
	if(GetAsyncKeyState(VK_RETURN))
	{
		system("cls");
	fDebugMenu = -1;	
	SetColorAMD64(15);
	}
	if(GetAsyncKeyState('W'))
	{
		fDgPoint--;	
		if(fDgPoint < 0)
		{
			fDgPoint = 4;
		}
	}
	if(GetAsyncKeyState('S'))
	{
		fDgPoint++;	
		if(fDgPoint > 4)
		{
			fDgPoint = 0;
		}
	}
	if(GetAsyncKeyState(VK_SPACE))
	{
		fSelPoint++;
		if(fSelPoint > 1)
		{
			fSelPoint = 0;
		}
		if(fSelPoint == 0)
		{
			if(fDgPoint == 0)
		    {
			  bGen = false;
		    }
		    if(fDgPoint == 1)
		    {
			  dKeyAccept = false;
		    }
		    if(fDgPoint == 2)
		    {
		      bLoader = false;
		    }
		    if(fDgPoint == 3)
		    {
			  mLangRus = false;
		    }
		    if(fDgPoint == 4)
		    {
		      bShowKeys = false;
		    }
		}
		if(fSelPoint == 1)
		{
			if(fDgPoint == 0)
		    {
			  bGen = true;
		    }
		    if(fDgPoint == 1)
		    {
			  dKeyAccept = true;
		    }
		    if(fDgPoint == 2)
		    {
		      bLoader = true;
		    }
		    if(fDgPoint == 3)
		    {
			  mLangRus = true;
		    }
		    if(fDgPoint == 4)
		    {
		      bShowKeys = true;
		    }
		}
		
	}
	}
	}
	for(int64_t gMenu = 1; gMenu > 0; gMenu++)
	{
		if(gMenu > 1)
		{
			bFilePrefix = true;
		}
		else
		{
			bFilePrefix = false;
		}
		srand(time(0));
		  if(bGen)
     {
     	if(bFilePrefix)
     	{
     		bFileNumber++;
		 }
    fGetFile = ("CRC_HASH"+to_string(bFileNumber)+".TXT");
     	  ofstream fBuffer(("CRC_HASH"+to_string(bFileNumber)+".TXT").c_str(),ios::binary);
    fBuffer.is_open();
    	fBuffer<<"--------------- HASH -----------------------------"<<endl;
	fBuffer<<" Generated: PassGenerator.exe by HCPP Block_Unit:"<<fBuffer<<"            "<<endl;
	fBuffer<<" writtein to C++ 64-bit release GCC MinGW         "<<endl;
	fBuffer<<" Addr:"<<&hEngineHandle<<" Size:"<<fFileSize<<":B"<<endl;
	fBuffer<<"--------------------------------------------------"<<endl;
     for(fDataByte.mCRCGen = 1;fDataByte.mCRCGen <= fDataByte.bLenLimit; fDataByte.mCRCGen++)
	{
		if(fDataByte.mCRCGen > fDataByte.bLenLimit)
		{
			fDataByte.mCRCGen = fDataByte.bLenLimit;
		}
						
					//system(("title Rendered:"+ to_string(bProgress)).c_str());
		bStrPass = bStrPass + bStrSymbols[rand() % 93];	
		fFileSize = fFileSize + bStrPass.size();
		fBuffer<<bStrPass<<endl;
//		if(bStrSymbols[rand() % 93]  != bStrPass)
//		{
//			bStrPass[bProgress];
//		}
cls(hEngineHandle);
          cout<<"CRC Creating "<<bStrPass.size()<<"/"<<fDataByte.bLenLimit<<" Write file to:"<<fGetFile<<endl;
            cout<<fBar[fBarPoint]<<endl;
            fTimeCurrent++;
            fTimeCurrent = fTimeCurrent / 60;
          
	}
	if(bStrPass.size() > fDataByte.bLenLimit)
	{
		bStrPass = bStrPass;
	}
//	cout<<" Generation.."<<fBar[fProcent++]<<endl;
//	if(fProcent > 22)
//	{
//		fProcent = 22;
//	}
         if(fDataByte.mCRCGen > fDataByte.bLenLimit)
         {
         	fDataByte.mCRCGen = bStrPass.size();
		 }
		 fBuffer<<bStrPass<<endl;
string fText;
	cout<<"Register:"<<&fDataByte.mCRCGen<<" | LenLimit:"<<fDataByte.bLenLimit<<" |Size: "<<bStrPass.size() + sizeof(&bStrPass)<<endl;
//cout<<"CRC_PassWord:"<<bStrPass<<endl;
	cout<<"--------------- HASH -----------------------------"<<endl;
	cout<<" Generated: PassGenerator.exe by HCPP             "<<endl;
	cout<<" writtein to C++ 64-bit release GCC MinGW         "<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"                                                  "<<endl;
	cout<<"       File "<<fGetFile<<" Saved!!                  "<<endl;
	cout<<" Size:"<<fFileSize<<"                                                 "<<endl;
	cout<<"Time Current: "<<fTimeCurrent / 60<<":"<<fTimeCurrent<<endl;
	cout<<" (ESC) - Back , (ENTER) - Restart Generation"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	if(fDataByte.bLenLimit < 30)
	{
		cout<<bStrPass<<endl;
	}
	SetWindowText(GetConsoleWindow(),("[ENTER] -  Reload fBufferLoaded ="+to_string(bStrPass.size() + sizeof(&bStrPass))).c_str());
		fBuffer.close();
		_getch();
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
	if(GetAsyncKeyState(VK_ESCAPE))
	{
		fDataByte.bLenLimit  = 0;
	 fDataByte.mCRCGen = -1;
	 bGen = false;
	system("cls");
	fBuffer.clear();
	bFileNumber = 0;
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
			  	      fDataByte.mDataColFL0 = 19;
			  	      fDataByte.mDataColFL1 = 0;
			  	      fDataByte.mDataColFL2 = 0;
			  	      fDataByte.mDataColFL3 = 0;
			        }
			        if(fDataByte.mPointItm == 1)
			        {
			  	      fDataByte.mDataColFL0 = 0;
			  	      fDataByte.mDataColFL1 = 19;
			  	      fDataByte.mDataColFL2 = 0;
			  	      fDataByte.mDataColFL3 = 0;
			        }
			        if(fDataByte.mPointItm == 2)
			        {
			  	      fDataByte.mDataColFL0 = 0;
			  	      fDataByte.mDataColFL1 = 0;
			  	      fDataByte.mDataColFL2 = 19;
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
		  	cout<<"               FSLoader                        "<<endl;
		  		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
		  		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
		  	 	SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139 + fDataByte.mDataColFL0);
		  	cout<<"       "<< mItemConteinerEn[3]<<"               "<<endl;
		  		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
		  		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
		  	 	SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139 + fDataByte.mDataColFL1);
		  	cout<<"       "<< mItemConteinerEn[4]<<"               "<<endl;
		  		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
		  		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
		  	 	SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139 + fDataByte.mDataColFL2);
		  	cout<<"        "<< mItemConteinerEn[5]<<"              "<<endl;
		  		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
		  		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
		  	 		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
		  		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
			 }
	         if(mLangRus)
	         {
	         	cout<<"\n\n\n";
	         	SetColorAMD64(15);
		  	cout<<"\t\t\t";
	         			  	SetColorAMD64(71);
		  	cout<<"              Загрузчик                        "<<endl;
		  		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
		  		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
		  	 	SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139 + fDataByte.mDataColFL0);
		  	cout<<"       "<< mItemConteinerRus[3]<<"               "<<endl;
		  		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
		  		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
		  	 	SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139 + fDataByte.mDataColFL1);
		  	cout<<"       "<< mItemConteinerRus[4]<<"               "<<endl;
		  		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
		  		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
		  	 	SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139 + fDataByte.mDataColFL2);
		  	cout<<"        "<< mItemConteinerRus[5]<<"              "<<endl;
		  		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
		  		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
		  	 		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
		  		SetColorAMD64(15);
		  	cout<<"\t\t\t";
		  	SetColorAMD64(139);
		  	cout<<"                                               "<<endl;
			 }
		  	SetColorAMD64(15);
		  	cout<<" fI0="<<fDataByte.mDataColFL0<<" | fI1="<<fDataByte.mDataColFL1<<" | fI2="<<fDataByte.mDataColFL2<<endl;
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
			  		if(bDebugMenu)
	{
		for(fDebugMenu = 1;fDebugMenu > 0;fDebugMenu++)
	{
		//
		if(fDgPoint == 0)
		{
		fClr0 = 101;
		fClr1 = 0;
		fClr2 = 0;
		fClr3 = 0;
		fClr4 = 0;
		fClr5 = 0;
		}
		if(fDgPoint == 1)
		{
		fClr0 = 0;
		fClr1 = 101;
		fClr2 = 0;
		fClr3 = 0;
		fClr4 = 0;
		fClr5 = 0;
		}
		if(fDgPoint == 2)
		{
		fClr0 = 0;
		fClr1 = 0;
		fClr2 = 101;
		fClr3 = 0;
		fClr4 = 0;
		fClr5 = 0;
		}
		if(fDgPoint == 3)
		{
		fClr0 = 0;
		fClr1 = 0;
		fClr2 = 0;
		fClr3 = 101;
		fClr4 = 0;
		fClr5 = 0;
		}
		if(fDgPoint == 4)
		{
		fClr0 = 0;
		fClr1 = 0;
		fClr2 = 0;
		fClr3 = 0;
		fClr4 = 101;
		fClr5 = 0;
		}
		cls(hEngineHandle);
	SetColorAMD64(30);
	cout<<"             Debug Menu                 "<<endl;
	SetColorAMD64(139+fClr0);
	cout<<"bGen:"<<bGen<<"                                  "<<endl;
	SetColorAMD64(139+fClr1);
	cout<<"bSecretMenu:"<<bSecretMenu<<"                           "<<endl;
	SetColorAMD64(139+fClr2);
	cout<<"bLoader:"<<bLoader<<"                               "<<endl;
	SetColorAMD64(139+fClr3);
	cout<<"mLangRus:"<<mLangRus<<"                              "<<endl;
	SetColorAMD64(139+fClr4);
	cout<<"bShowKeys:"<<bShowKeys<<"                             "<<endl;
	SetColorAMD64(134);
	cout<<"License:"<<dKeyAccept<<"                              "<<endl;
	SetColorAMD64(240);
	cout<<" Save-[enter][SPACE]-select W/S Up/Down"<<endl;
	cout<<" Unlock Func:[1]                       "<<fLic<<endl;
	_getch();
	if(GetAsyncKeyState('1'))
	{
		    fLic++;
			if(fLic > 1)
	       {
	         fLic = 0;
	       }
	       if(fLic == 1)
	       {
	    	dKeyAccept = true;
           }
	       if(fLic == 0)
	       {
		    dKeyAccept = false;
	       }
	}
	if(GetAsyncKeyState('F'))
	{
		Beep(300,140);
		SetColorAMD64(71);
		cout<<"                                                "<<endl;
		cout<<"                WARNING!!!                      "<<endl;
		cout<<"  Your CPU may be overloaded this               "<<endl;
		cout<<"  is a test for more powerful CPUs              "<<endl;
		cout<<"           Are you ready?                       "<<endl;
		cout<<" [ Y   - Yes      ]      [ N   - No      ]      "<<endl;
		SetColorAMD64(15);
        if(GetAsyncKeyState('Y'))
        {
        	cout<<"Saving..."<<endl;
        	fDataByte.bLenLimit = 10000;
        	system("cls");
	fDebugMenu = -1;
	bDebugMenu =  false;	
	SetColorAMD64(15);
		}
		if(GetAsyncKeyState('N'))
		{
			system("cls");
		}
	}
	if(GetAsyncKeyState(VK_RETURN))
	{
		system("cls");
	fDebugMenu = -1;
	bDebugMenu =  false;	
	SetColorAMD64(15);
	}
	if(GetAsyncKeyState('W'))
	{
		fDgPoint--;	
		if(fDgPoint < 0)
		{
			fDgPoint = 4;
		}
	}
	if(GetAsyncKeyState('S'))
	{
		fDgPoint++;	
		if(fDgPoint > 4)
		{
			fDgPoint = 0;
		}
	}
	if(GetAsyncKeyState(VK_SPACE))
	{
		fSelPoint++;
		if(fSelPoint > 1)
		{
			fSelPoint = 0;
		}
		if(fSelPoint == 0)
		{
			if(fDgPoint == 0)
		    {
			  bGen = false;
		    }
		    if(fDgPoint == 1)
		    {
			  bSecretMenu = false;
		    }
		    if(fDgPoint == 2)
		    {
		      bLoader = false;
		    }
		    if(fDgPoint == 3)
		    {
			  mLangRus = false;
		    }
		    if(fDgPoint == 4)
		    {
		      bShowKeys = false;
		    }
		}
		if(fSelPoint == 1)
		{
			if(fDgPoint == 0)
		    {
			  bGen = true;
		    }
		    if(fDgPoint == 1)
		    {
			  bSecretMenu = true;
		    }
		    if(fDgPoint == 2)
		    {
		      bLoader = true;
		    }
		    if(fDgPoint == 3)
		    {
			  mLangRus = true;
		    }
		    if(fDgPoint == 4)
		    {
		      bShowKeys = true;
		    }
		}
		
	}
	}
	}
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
     							cout<<" |Size: "<<bStrPass.size()<<"Stack1_PassWord:"<<&dKeyAccept<<"Stack0:"<<&uMem<<" Stack_size:"<<fDataByte.fBufferSize0<<endl;
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
  if(GetAsyncKeyState(VK_DELETE))
  {
  	system(("del CRC_HASH"+to_string(bFileNumber++)+".TXT").c_str());
  }
  if(GetAsyncKeyState('R'))
  {
  	cout<<"Void Memory... "<<endl;
  	
  }
   if(!GetAsyncKeyState(VK_F8))
   {
   	cin.clear();
   }
           if(GetAsyncKeyState(VK_F8))
		   {
		   	cout<<"PassGenerator \n============================="<<endl;
		   	cout<<" >>";
		   	cin >> fGetCommand;
		   	if(fGetCommand == "--debug")
		   	{
		   			system("cls");
	  		bDebugMenu = true;
	  		fKeyReset = 0;
		    }
		    if(fGetCommand == "--benchmark")
		   	{
	  		gMenu = 0;
		system("cls");
		bGen  = true;
		fDataByte.bLenLimit = 10000;
		
		    }
		   }
 if(GetAsyncKeyState(VK_F6))
	  {
	  	fKeyReset++;
	  	if(fKeyReset == 3)
	  	{
	  		system("cls");
	  		bDebugMenu = true;
	  		fKeyReset = 0;
		  }
	  }
	  
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
	if(bShowKeys)
	{
	cls(hEngineHandle);
		cout<<"\n\n\n";
		Sleep(16);
		SetColorAMD64(15);
	  cout<<"\t\t\t";
	  	SetColorAMD64(1300);
	  cout<<"               DEBUG                "<<endl;
	  	SetColorAMD64(15);
	  	Sleep(16);
	  cout<<"\t\t\t";
	  SetColorAMD64(1300);
	  cout<<"                                          "<<endl;
	  Sleep(16);
	  	SetColorAMD64(15);
	  cout<<"\t\t\t";
	  SetColorAMD64(30);
	  cout<<"               W/S Up/Down                "<<endl;
	  Sleep(16);
	  	SetColorAMD64(15);
	  cout<<"\t\t\t";
	  SetColorAMD64(30);
	  cout<<"               +/- only 1 item            "<<endl;
	  Sleep(16);
	  	SetColorAMD64(15);
	  cout<<"\t\t\t";
	  SetColorAMD64(30);
	  cout<<"               Enter - OK                 "<<endl;
	  Sleep(16);
	  	SetColorAMD64(15);
	  cout<<"\t\t\t";
	  SetColorAMD64(30);
	  cout<<"               L - switch language        "<<endl;
	  Sleep(16);
	  	SetColorAMD64(15);
	  cout<<"\t\t\t";
	  SetColorAMD64(30);
	  cout<<"               С - close item             "<<endl;
	  Sleep(16);
	  	SetColorAMD64(15);
	  cout<<"\t\t\t";
	  SetColorAMD64(30);
	  cout<<"   Reset and load Debug Menu [/] - to 3x  "<<endl;
	  Sleep(16);
	  	SetColorAMD64(15);
	  cout<<"\t\t\t";
	  SetColorAMD64(30);
	  cout<<"                                          "<<endl;
	  SetColorAMD64(15);
	  cout<<"Presed:"<<fKeyReset<<endl;
	  if(GetAsyncKeyState(VK_F6))
	  {
	  	fKeyReset++;
	  	if(fKeyReset == 3)
	  	{
	  		system("cls");
	  		bDebugMenu = true;
	  		fKeyReset = 0;
		  }
	  }
	}
	
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
	  if(GetAsyncKeyState('Y'))
        {
        	fDataByte.bLenLimit = 10000;
        	system("cls");
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
		if(dKeyHash == "mgoaD4SgHQA0" || dKeyHash == "--dev01")
		{
		dKeyAccept = true;	
		cout<<"     Программа активирована!!"<<endl;
		} 
		else 
		{
			
		cout<<"    Неверный Ключ Продукта!!"<<endl;
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
