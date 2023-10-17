//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BufferedStreamReader, BufferedStreamWriter, NSString;
@protocol OS_dispatch_queue;

@interface BufferedStream : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    char *_buffer;	// 16 = 0x10
    unsigned long long _bufferLength;	// 24 = 0x18
    int _fd;	// 32 = 0x20
    NSString *_path;	// 40 = 0x28
    unsigned long long _readCursor;	// 48 = 0x30
    unsigned long long _writeCursor;	// 56 = 0x38
    BufferedStreamWriter *_streamWriter;	// 64 = 0x40
    BufferedStreamReader *_streamReader;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000003c2cd
- (void)dealloc;	// IMP=0x001000000003b6a7

@end

