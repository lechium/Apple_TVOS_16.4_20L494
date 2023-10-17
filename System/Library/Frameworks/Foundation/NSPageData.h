//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface NSPageData : NSData
{
    NSData *data;	// 8 = 0x8
    NSDate *_originalFileModDate;	// 16 = 0x10
    NSString *_originalFilePath;	// 24 = 0x18
}

+ (long long)_umask;	// IMP=0x006000000056e3a1
+ (void)initialize;	// IMP=0x006000000056e378
- (id)data;	// IMP=0x000000000056ebe1
- (id)initWithDataNoCopy:(id)arg1;	// IMP=0x000000000056ebba
- (id)deserializer;	// IMP=0x000000000056eb44
- (id)initFromSerializerStream:(id)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000056eadb
- (unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(_Bool)arg4 hardLinkPath:(id)arg5;	// IMP=0x000000000056e789
- (void)dealloc;	// IMP=0x000000000056e700
- (id)_mappedFile;	// IMP=0x000000000056e6ef
- (id)initWithContentsOfMappedFile:(id)arg1 withFileAttributes:(id)arg2;	// IMP=0x000000000056e611
- (id)initWithContentsOfMappedFile:(id)arg1;	// IMP=0x000000000056e5fd
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x000000000056e55b
- (void)_setOriginalFileInfoFromFileAttributes:(id)arg1;	// IMP=0x000000000056e4fd
- (id)initWithData:(id)arg1;	// IMP=0x000000000056e4be
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000056e470
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000056e422
- (id)init;	// IMP=0x000000000056e3e8
- (const void *)bytes;	// IMP=0x000000000056e3cb
- (unsigned long long)length;	// IMP=0x000000000056e3ae
- (unsigned long long)writeFile:(id)arg1;	// IMP=0x000000000056ec6e
- (unsigned long long)writeFd:(long long)arg1;	// IMP=0x000000000056ebff

@end

