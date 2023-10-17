//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ARUIRingUniformsCache;

__attribute__((visibility("hidden")))
@interface ARUIRingsRenderer : NSObject
{
    unsigned long long _indexCount;	// 8 = 0x8
    ARUIRingUniformsCache *_cache;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001f4f0
- (void)clearCaches;	// IMP=0x000000000001f4ba
- (void)_renderRingsFollowingPercent:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3 forState:(id)arg4;	// IMP=0x000000000001f091
- (void)_renderEntireRings:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3 forState:(id)arg4;	// IMP=0x000000000001ee1a
- (void)renderRings:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3 forState:(id)arg4;	// IMP=0x000000000001ed23
- (void)beginRenderingWithCommandEncoder:(id)arg1;	// IMP=0x000000000001ec87
- (id)initWithDevice:(id)arg1;	// IMP=0x000000000001eb9f

@end

