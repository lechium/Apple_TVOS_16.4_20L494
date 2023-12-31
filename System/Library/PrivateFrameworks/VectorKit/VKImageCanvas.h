//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapRegion, VKCamera, VKCameraController;
@protocol MDRenderTarget;

__attribute__((visibility("hidden")))
@interface VKImageCanvas : NSObject
{
    struct _retain_ptr<VKCameraController *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        VKCameraController *_obj;
        struct _retain_objc_arc _retain;
        struct _release_objc_arc _release;
    } _cameraController;	// 8 = 0x8
    shared_ptr_e963992e _taskContext;	// 32 = 0x20
    _retain_ptr_a171892e _vkCamera;	// 48 = 0x30
    shared_ptr_46708168 _camera;	// 72 = 0x48
    int _mapType;	// 88 = 0x58
    id <MDRenderTarget> _displayTarget;	// 96 = 0x60
    void *_mapRenderer;	// 104 = 0x68
    void *_layoutContext;	// 112 = 0x70
    struct RunLoopController *_runLoopController;	// 120 = 0x78
    struct VKEdgeInsets _edgeInsets;	// 128 = 0x80
}

- (id).cxx_construct;	// IMP=0x000000000050a1d6
- (void).cxx_destruct;	// IMP=0x000000000050a17e
@property(readonly, nonatomic) shared_ptr_46708168 camera; // @synthesize camera=_camera;
@property(nonatomic) struct VKEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
- (void)didReceiveMemoryWarning:(_Bool)arg1;	// IMP=0x000000000050a12e
- (void)renderSceneWithEngine:(void *)arg1 completion:(function_2e574590)arg2;	// IMP=0x0000000000509f25
- (void)cancelLoad;	// IMP=0x0000000000509efb
- (void)loadScene;	// IMP=0x0000000000509ed5
@property(readonly, nonatomic) VKCamera *vkCamera;
@property(readonly, nonatomic) double pitch;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;	// IMP=0x0000000000509d94
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;	// IMP=0x0000000000509cdc
- (void)cancelTileRequests;	// IMP=0x0000000000509cd6
- (void)clearScene;	// IMP=0x0000000000509cd0
- (void)didLayout;	// IMP=0x0000000000509cca
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x0000000000509cb4
@property(readonly, nonatomic) shared_ptr_e963992e taskContext;
- (id)initWithMapEngine:(void *)arg1;	// IMP=0x00000000005098fc

@end

