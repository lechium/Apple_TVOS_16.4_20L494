//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VKMapImageCanvas
{
    void *_mapEngine;	// 144 = 0x90
    struct _retain_ptr<VKManifestTileGroupObserverProxy *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _manifestTileGroupObserverProxy;	// 152 = 0x98
}

- (id).cxx_construct;	// IMP=0x0000000000276eb4
- (void).cxx_destruct;	// IMP=0x0000000000276e92
- (void)tileGroupDidChange;	// IMP=0x0000000000276e7d
- (void)cancelTileRequests;	// IMP=0x0000000000276e60
- (void)clearScene;	// IMP=0x0000000000276e4e
- (void)setMapType:(int)arg1;	// IMP=0x0000000000276e39
- (void)resetCameraController;	// IMP=0x0000000000276c3e
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x0000000000276b3e
- (void)dealloc;	// IMP=0x0000000000276ac5
- (id)initWithMapEngine:(void *)arg1;	// IMP=0x00000000002767da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

