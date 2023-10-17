//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MKMapView, NSArray, NSMapTable, NSMutableArray, NSMutableOrderedSet;
@protocol MKOverlayContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface MKOverlayContainerView : UIView
{
    NSMutableOrderedSet *_overlays[2];	// 8 = 0x8
    NSMapTable *_overlayToDrawable[2];	// 24 = 0x18
    NSMutableArray *_drawables[2];	// 40 = 0x28
    NSMutableArray *_vkOverlays[2];	// 56 = 0x38
    UIView *_viewContainers[2];	// 72 = 0x48
    id <MKOverlayContainerViewDelegate> _delegate;	// 88 = 0x58
    double _mapZoomScale;	// 96 = 0x60
    MKMapView *_mapView;	// 104 = 0x68
}

+ (long long)_defaultOverlayLevel;	// IMP=0x0060000000074b40
- (void).cxx_destruct;	// IMP=0x0000000000076942
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) double mapZoomScale; // @synthesize mapZoomScale=_mapZoomScale;
@property(nonatomic) __weak id <MKOverlayContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_allOverlaysSupportElevation;	// IMP=0x000000000007666a
- (_Bool)_anyOverlayRequiresModernMap;	// IMP=0x0000000000076487
- (_Bool)_overlayRequiresModernMap:(id)arg1;	// IMP=0x0000000000076439
- (void)_unFlexTerrainIfNeeded;	// IMP=0x00000000000763fc
- (void)_flexTerrainIfNeeded;	// IMP=0x00000000000763bf
@property(readonly, nonatomic) _Bool requiresModernMap;
@property(readonly, nonatomic) _Bool supportsElevation;
- (void)didMoveToWindow;	// IMP=0x00000000000761c8
- (void)_insertDrawable:(id)arg1 forOverlay:(id)arg2 atIndex:(long long)arg3 level:(long long)arg4;	// IMP=0x0000000000075d07
- (void)_updateContentScale:(id)arg1;	// IMP=0x0000000000075ba7
- (void)_removeDrawable:(id)arg1 forOverlay:(id)arg2 level:(long long)arg3;	// IMP=0x00000000000758c7
@property(readonly, nonatomic) NSArray *allDrawables;
- (id)drawableForOverlay:(id)arg1;	// IMP=0x0000000000075735
- (id)overlaysInLevel:(long long)arg1;	// IMP=0x00000000000756d4
@property(readonly, nonatomic) NSArray *overlays;
- (unsigned long long)_overlayCount;	// IMP=0x00000000000755a0
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;	// IMP=0x00000000000754e3
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;	// IMP=0x0000000000075425
- (void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2;	// IMP=0x00000000000752dd
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000075290
- (void)_exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2 level:(long long)arg3;	// IMP=0x00000000000750b5
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000075055
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 level:(long long)arg3;	// IMP=0x0000000000074ef3
- (void)removeOverlays:(id)arg1;	// IMP=0x0000000000074dc9
- (void)removeOverlay:(id)arg1;	// IMP=0x0000000000074ce0
- (long long)_levelForOverlay:(id)arg1 exists:(_Bool *)arg2;	// IMP=0x0000000000074c41
- (void)addOverlays:(id)arg1;	// IMP=0x0000000000074be6
- (void)addOverlay:(id)arg1;	// IMP=0x0000000000074b8b
- (void)addOverlays:(id)arg1 level:(long long)arg2;	// IMP=0x0000000000074840
- (void)addOverlay:(id)arg1 level:(long long)arg2;	// IMP=0x000000000007466f
- (void)addAndRemoveOverlayViews;	// IMP=0x0000000000073fdf
- (id)_considerAddingDrawable:(id)arg1 inAddRect:(CDStruct_02837cd9)arg2 level:(long long)arg3;	// IMP=0x0000000000073e3e
- (void)_configureAndAddDrawable:(id)arg1 forOverlay:(id)arg2 level:(long long)arg3;	// IMP=0x0000000000073ccc
- (CDStruct_02837cd9)_mapRectWithFractionOfVisible:(double)arg1;	// IMP=0x0000000000073bbf
- (long long)_drawableIndexForDrawable:(id)arg1 level:(long long)arg2;	// IMP=0x00000000000739da
- (id)_viewContainerForLevel:(long long)arg1;	// IMP=0x00000000000738be
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000738b6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000073776

@end
