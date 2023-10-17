//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol MTLBlitCommandEncoder, MTLCommandBuffer, MTLCommandQueue;

@interface GTDownloadContext : NSObject
{
    id <MTLCommandQueue> _queue;	// 8 = 0x8
    id <MTLCommandBuffer> _command;	// 16 = 0x10
    id <MTLBlitCommandEncoder> _blit;	// 24 = 0x18
    NSMutableArray *_MTLResources;	// 32 = 0x20
    NSMutableArray *_originalMTLResources;	// 40 = 0x28
    struct apr_pool_t *_pool;	// 48 = 0x30
    unsigned long long _blitRequestCount;	// 56 = 0x38
    struct apr_array_header_t *_requests;	// 64 = 0x40
    NSMutableArray *_objects;	// 72 = 0x48
    unsigned long long _usedGPUMemory;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000092335
@property(nonatomic) unsigned long long usedGPUMemory; // @synthesize usedGPUMemory=_usedGPUMemory;
@property(retain, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
@property(nonatomic) struct apr_array_header_t *requests; // @synthesize requests=_requests;
- (void)flush;	// IMP=0x00000000000922d9
- (void)flushWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000092113
- (id)blitCommandEncoder;	// IMP=0x000000000009205a
- (id)newCommandBuffer;	// IMP=0x000000000009203b
- (void)retainMTLResource:(id)arg1;	// IMP=0x0000000000092025
- (void)dealloc;	// IMP=0x0000000000091feb
- (id)initWithQueue:(id)arg1 forRequest:(struct apr_array_header_t *)arg2;	// IMP=0x0000000000091e73

@end

