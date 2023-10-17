//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSMutableArray;

@interface MDLScene : NSObject
{
    struct mutex *_sceneMutex;	// 8 = 0x8
    struct vector<ModelIO::RTRenderable *, std::allocator<ModelIO::RTRenderable *>> _sceneObjects;	// 16 = 0x10
    struct vector<MDLLight *, std::allocator<MDLLight *>> _sceneLights;	// 40 = 0x28
    NSMutableArray *_objects;	// 64 = 0x40
    int _signature;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x000000000018fa91
- (void).cxx_destruct;	// IMP=0x000000000018fa55
@property(readonly, retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (id)raytraceSceneWithCamera:(const struct RTCamera *)arg1 reflection:(id)arg2 irradiance:(id)arg3 size: /* Error: Ran out of types for this method. */;	// IMP=0x000000000018f0d1
- (void)clear;	// IMP=0x000000000018f07b
- (void)addObject:(id)arg1;	// IMP=0x000000000018ed6e
- (_Bool)castRayFrom:(struct RTCamera *)arg1 withDirection:(struct RTIntersectionResult *)arg2 usingCamera:result: /* Error: Ran out of types for this method. */;	// IMP=0x000000000018ed61
- (MISSING_TYPE *)hitTestRayFrom:(id)arg1 withDirection:usingCamera: /* Error: Ran out of types for this method. */;	// IMP=0x000000000018e958
- (void)releaseLockGuard:(int)arg1;	// IMP=0x000000000018e93c
- (int)acquireLockGuard;	// IMP=0x000000000018e91b
- (void)dealloc;	// IMP=0x000000000018e861
- (id)init;	// IMP=0x000000000018e746

@end

