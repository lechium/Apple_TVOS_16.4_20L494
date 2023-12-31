//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface GTFileWriterSession : NSObject
{
    NSURL *_baseURL;	// 8 = 0x8
    NSArray *_fileEntries;	// 16 = 0x10
    unsigned int _totalWriteSize;	// 24 = 0x18
    void *_scratchBytes;	// 32 = 0x20
    unsigned int _scratchLength;	// 40 = 0x28
    int _algorithm;	// 44 = 0x2c
    unsigned int _fileChunkSize;	// 48 = 0x30
    int _fileIndex;	// 52 = 0x34
    int _fd;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000004d02f
- (void)finish;	// IMP=0x001000000004cfc9
- (void)writeFileChunks:(id)arg1 withData:(id)arg2;	// IMP=0x001000000004c9cc
- (void)startWithFileEntries:(id)arg1 relativeToURL:(id)arg2 config:(CDStruct_32a7f38a)arg3;	// IMP=0x001000000004c935
- (void)dealloc;	// IMP=0x001000000004c8f7
- (id)init;	// IMP=0x001000000004c8bb

@end

