//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface DDScannerObject : NSObject
{
    struct __DDScanner *_scanner;	// 8 = 0x8
    int _type;	// 16 = 0x10
    _Bool _hasBasicType;	// 20 = 0x14
    long long _jobIdentifier;	// 24 = 0x18
    NSXPCConnection *_connectionToService;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000002384
@property(nonatomic) long long jobIdentifier; // @synthesize jobIdentifier=_jobIdentifier;
- (void)cancel;	// IMP=0x000000000000235f
- (int)type;	// IMP=0x0000000000002356
- (id)scanString:(id)arg1 range:(CDStruct_912cb5d2)arg2 query:(struct __DDScanQuery *)arg3 configuration:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000001ea1
- (_Bool)hasBasicType;	// IMP=0x0000000000001e98
- (void)dealloc;	// IMP=0x0000000000001e59
- (id)initWithType:(int)arg1 enableParsec:(_Bool)arg2;	// IMP=0x0000000000001da4

@end

