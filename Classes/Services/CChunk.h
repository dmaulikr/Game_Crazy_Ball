/* Copyright (c) 1996-2014 Clickteam
*
* This source code is part of the iOS exporter for Clickteam Multimedia Fusion 2
* and Clickteam Fusion 2.5.
* 
* Permission is hereby granted to any person obtaining a legal copy 
* of Clickteam Multimedia Fusion 2 or Clickteam Fusion 2.5 to use or modify this source 
* code for debugging, optimizing, or customizing applications created with 
* Clickteam Multimedia Fusion 2 and/or Clickteam Fusion 2.5. 
* Any other use of this source code is prohibited.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
* IN THE SOFTWARE.
*/
// --------------------------------------------------------------------------------
//
// CCHUNK : lecture de troncons de donnees de l'application
//
// --------------------------------------------------------------------------------

#import <Foundation/Foundation.h>
#import "CFile.h"

// Declaration des types de chunks
#define CHUNK_PREVIEW 0x1122

#define CHUNK_APPMINIHEADER 0x2222
#define CHUNK_APPHEADER 0x2223
#define CHUNK_APPNAME 0x2224
#define CHUNK_APPAUTHOR 0x2225
#define CHUNK_APPMENU 0x2226
#define CHUNK_EXTPATH 0x2227
#define CHUNK_EXTENSIONS 0x2228
#define CHUNK_FRAMEITEMS 0x2229
#define CHUNK_GLOBALEVENTS 0x222A
#define CHUNK_FRAMEHANDLES 0x222B
#define CHUNK_EXTDATA 0x222C
#define CHUNK_ADDITIONAL_EXTENSION 0x222D
#define CHUNK_APPEDITORFILENAME 0x222E
#define CHUNK_APPTARGETFILENAME 0x222F
#define CHUNK_APPDOC 0x2230
#define CHUNK_OTHEREXTS 0x2231
#define CHUNK_GLOBALVALUES 0x2232
#define CHUNK_GLOBALSTRINGS 0x2233
#define CHUNK_EXTENSIONS2 0x2234
#define CHUNK_APPICON_16x16x8 0x2235
#define CHUNK_DEMOVERSION 0x2236
#define CHUNK_SECNUM 0x2237
#define CHUNK_BINARYFILES 0x2238
#define CHUNK_APPMENUIMAGES 0x2239
#define CHUNK_ABOUTTEXT 0x223A
#define CHUNK_COPYRIGHT 0x223B
#define CHUNK_GLOBALVALUENAMES 0x223C
#define CHUNK_GLOBALSTRINGNAMES 0x223D
#define CHUNK_MVTEXTS 0x223E
#define CHUNK_FRAMEITEMS_2 0x223F
#define CHUNK_EXEONLY 0x2240
#define CHUNK_APPHEADER2 0x2245

#define CHUNK_FRAME 0x3333
#define CHUNK_FRAMEHEADER 0x3334
#define CHUNK_FRAMENAME 0x3335
#define CHUNK_FRAMEPASSWORD 0x3336
#define CHUNK_FRAMEPALETTE 0x3337
#define CHUNK_FRAMEITEMINSTANCES 0x3338
#define CHUNK_FRAMEFADEINFRAME 0x3339
#define CHUNK_FRAMEFADEOUTFRAME 0x333A
#define CHUNK_FRAMEFADEIN 0x333B
#define CHUNK_FRAMEFADEOUT 0x333C
#define CHUNK_FRAMEEVENTS 0x333D
#define CHUNK_FRAMEPLAYHEADER 0x333E
#define CHUNK_ADDITIONAL_FRAMEITEM 0x333F
#define CHUNK_ADDITIONAL_FRAMEITEMINSTANCE 0x3340
#define CHUNK_FRAMELAYERS 0x3341
#define CHUNK_FRAMEVIRTUALRECT 0x3342
#define CHUNK_DEMOFILEPATH 0x3343
#define CHUNK_RANDOMSEED 0x3344
#define CHUNK_FRAMELAYEREFFECTS 0x3345
#define CHUNK_BLURAYFRAMEOPTIONS 0x3346
#define CHUNK_MVTTIMERBASE 0x3347
#define CHUNK_MOSAICIMAGETABLE 0x3348
#define CHUNK_FRAMeEFFECTS 0x3349
#define CHUNK_FRAME_IPHONE_OPTIONS 0x334A

#define CHUNK_OBJINFOHEADER 0x4444
#define CHUNK_OBJINFONAME 0x4445
#define CHUNK_OBJECTSCOMMON 0x4446

#define CHUNK_IMAGESOFFSETS 0x5555
#define CHUNK_FONTSOFFSETS 0x5556
#define CHUNK_SOUNDSOFFSETS 0x5557
#define CHUNK_MUSICSOFFSETS 0x5558

#define CHUNK_IMAGES 0x6666
#define CHUNK_FONTS 0x6667
#define CHUNK_SOUNDS 0x6668
#define CHUNK_MUSICS 0x6669

#define CHUNK_LAST 0x7F7F

@interface CChunk : NSObject 
{
@public
    short chID;
    short chFlags;
    int chSize;
}
-(void)dealloc;
-(id)init;
-(short)readHeader: (CFile*)file;
-(void)skipChunk: (CFile*) file; 


@end
