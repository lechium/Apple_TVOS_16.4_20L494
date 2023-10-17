//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RouteRenderLayerObserverProxy : NSObject
{
    struct PolylineGroupChangeObserver *_polylineGroupObserver;	// 8 = 0x8
    struct vector<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>> _retainedGroups;	// 16 = 0x10
    struct set<VKPolylineGroupOverlay *, std::less<VKPolylineGroupOverlay *>, std::allocator<VKPolylineGroupOverlay *>> _observedGroupsSet;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x000000000008b3e7
- (void).cxx_destruct;	// IMP=0x000000000008b380
- (void)stopObserving:(id)arg1;	// IMP=0x000000000008b136
- (void)startObserving:(id)arg1;	// IMP=0x000000000008ae7e
- (void)polylineGroup:(id)arg1 didFocusPolyline:(id)arg2;	// IMP=0x000000000008ae66
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;	// IMP=0x000000000008ae4e
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;	// IMP=0x000000000008ae36
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;	// IMP=0x000000000008ae1f
- (void)dealloc;	// IMP=0x000000000008acf1
- (id)initWithPolylineGroupObserver:(struct PolylineGroupChangeObserver *)arg1;	// IMP=0x000000000008acb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
