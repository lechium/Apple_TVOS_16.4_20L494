//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCNMTLRenderPipeline;

__attribute__((visibility("hidden")))
@interface SCNMTLShadableKey : NSObject
{
    struct __C3DMaterial *_material;	// 8 = 0x8
    struct __C3DGeometry *_geometry;	// 16 = 0x10
    SCNMTLRenderPipeline *_pipeline;	// 24 = 0x18
}

- (unsigned long long)hash;	// IMP=0x000000000007723f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000077216

@end

