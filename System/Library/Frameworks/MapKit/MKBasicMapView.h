//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, VKMapView;

__attribute__((visibility("hidden")))
@interface MKBasicMapView : UIView
{
    UIView *_hostView;	// 8 = 0x8
    VKMapView *_mapView;	// 16 = 0x10
    double _mapModeStartTime;	// 24 = 0x18
    double _trafficStartTime;	// 32 = 0x20
    long long _changingViewSizeCount;	// 40 = 0x28
    _Bool _inactive;	// 48 = 0x30
    _Bool _hasRenderedSomething;	// 49 = 0x31
    _Bool _inBackground;	// 50 = 0x32
}

- (void).cxx_destruct;	// IMP=0x00000000000bb567
@property(readonly, nonatomic, getter=isInBackground) _Bool inBackground; // @synthesize inBackground=_inBackground;
@property(nonatomic) _Bool inactive; // @synthesize inactive=_inactive;
@property(nonatomic) _Bool hasRenderedSomething; // @synthesize hasRenderedSomething=_hasRenderedSomething;
@property(nonatomic) double trafficStartTime; // @synthesize trafficStartTime=_trafficStartTime;
@property(nonatomic) double mapModeStartTime; // @synthesize mapModeStartTime=_mapModeStartTime;
@property(readonly, nonatomic) VKMapView *mapView; // @synthesize mapView=_mapView;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;	// IMP=0x00000000000bb4bc
- (void)_updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(_Bool)arg1 ignoreIfViewInWindow:(_Bool)arg2;	// IMP=0x00000000000bb2d8
- (void)updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(_Bool)arg1;	// IMP=0x00000000000bb2c4
- (void)updateStatsForSwitchingToMapType:(int)arg1;	// IMP=0x00000000000bb2a1
- (void)updateStatsForTrafficEnabledTime;	// IMP=0x00000000000bb28d
- (void)_updateStatsForTrafficEnabledTime:(_Bool)arg1;	// IMP=0x00000000000bb1be
- (void)updateStatsForEnablingTraffic:(_Bool)arg1;	// IMP=0x00000000000bb19b
- (void)setHidden:(_Bool)arg1;	// IMP=0x00000000000bb15a
- (void)didMoveToWindow;	// IMP=0x00000000000baf6d
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000000bae71
- (void)_unregisterSceneNotifications;	// IMP=0x00000000000bad3f
- (void)_sceneDidEnterBackground:(id)arg1;	// IMP=0x00000000000bad28
- (void)_sceneWillEnterForeground:(id)arg1;	// IMP=0x00000000000bad11
- (void)_registerSceneNotifications;	// IMP=0x00000000000babca
- (void)_updateForCurrentScreen;	// IMP=0x00000000000ba8fe
- (void)_updateMapViewHidden;	// IMP=0x00000000000ba862
- (_Bool)isPointValidForGesturing:(struct CGPoint)arg1;	// IMP=0x00000000000ba845
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toCameraModelPointToView:(id)arg2;	// IMP=0x00000000000ba7c2
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toPointToView:(id)arg2;	// IMP=0x00000000000ba73f
- (struct CLLocationCoordinate2D)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;	// IMP=0x00000000000ba6bc
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000ba564
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000000ba41f
- (void)_animateCanvasForBounds:(struct CGRect)arg1;	// IMP=0x00000000000ba092
@property(nonatomic) _Bool rendersInBackground;
- (double)calloutContainerCanvasScale;	// IMP=0x00000000000b9fef
- (struct CGSize)calloutContainerCanvasSize;	// IMP=0x00000000000b9f9f
- (void)addCalloutSubview:(id)arg1;	// IMP=0x00000000000b9f82
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets;
- (void)dealloc;	// IMP=0x00000000000b9e6c
- (id)initWithFrame:(struct CGRect)arg1 andGlobe:(_Bool)arg2 shouldRasterize:(_Bool)arg3 allowsAntialiasing:(_Bool)arg4 carDisplayType:(long long)arg5;	// IMP=0x00000000000b98ea
- (id)initWithFrame:(struct CGRect)arg1 andGlobe:(_Bool)arg2 shouldRasterize:(_Bool)arg3 allowsAntialiasing:(_Bool)arg4;	// IMP=0x00000000000b98d5
- (id)initWithFrame:(struct CGRect)arg1 andGlobe:(_Bool)arg2 shouldRasterize:(_Bool)arg3;	// IMP=0x00000000000b98c0
- (void)_finishedSnapshot:(id)arg1;	// IMP=0x00000000000b98a3
- (void)_didEnterBackground;	// IMP=0x00000000000b97ec
- (void)_updateBackgroundState:(long long)arg1;	// IMP=0x00000000000b96d3
- (void)_updateBackgroundState;	// IMP=0x00000000000b9637
- (void)_finishChangingViewSize;	// IMP=0x00000000000b961a
- (void)_beginChangingViewSize;	// IMP=0x00000000000b9609
@property(readonly, nonatomic, getter=isChangingViewSize) _Bool changingViewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

