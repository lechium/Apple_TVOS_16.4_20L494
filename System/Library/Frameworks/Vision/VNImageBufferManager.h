//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIContext, NSHashTable, NSLock;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface VNImageBufferManager : NSObject
{
    CIContext *mainCIContext;	// 8 = 0x8
    id <MTLDevice> mainCIContextMetalDevice;	// 16 = 0x10
    CIContext *lowPriorityCIContext;	// 24 = 0x18
    id <MTLDevice> lowPriorityCIContextMetalDevice;	// 32 = 0x20
    NSLock *ciContextLock;	// 40 = 0x28
    NSHashTable *activeImageBuffers;	// 48 = 0x30
    NSLock *bufferTableLock;	// 56 = 0x38
}

+ (id)manager;	// IMP=0x0060000000078935
- (void).cxx_destruct;	// IMP=0x00000000000788d6
- (id)sharedCIContextWithOptions:(id)arg1;	// IMP=0x00000000000784f3
- (void)purgeAllCaches;	// IMP=0x00000000000783a8
- (void)dealloc;	// IMP=0x0000000000078318
- (id)init;	// IMP=0x000000000007825a

@end

