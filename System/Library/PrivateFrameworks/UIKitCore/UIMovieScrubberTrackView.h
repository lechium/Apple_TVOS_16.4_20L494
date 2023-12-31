//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSDictionary, NSMutableDictionary, UIMovieScrubberTrackOverlayView;
@protocol UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberTrackView : UIView
{
    NSArray *_summaryThumbnailViews;	// 8 = 0x8
    NSArray *_summaryThumbnailTimestamps;	// 16 = 0x10
    NSArray *_summaryThumbnailChildTimestamps;	// 24 = 0x18
    NSDictionary *_thumbnailStartXValues;	// 32 = 0x20
    NSDictionary *_childThumbnailViews;	// 40 = 0x28
    NSMutableDictionary *_thumbnailViews;	// 48 = 0x30
    NSArray *_timestamps;	// 56 = 0x38
    UIMovieScrubberTrackOverlayView *_overlayView;	// 64 = 0x40
    UIView *_maskContainerView;	// 72 = 0x48
    struct CGSize _thumbnailSize;	// 80 = 0x50
    float _zoomOriginXDelta;	// 96 = 0x60
    float _zoomWidthDelta;	// 100 = 0x64
    float _unclampedZoomWidthDelta;	// 104 = 0x68
    float _zoomAnimationDuration;	// 108 = 0x6c
    double _duration;	// 112 = 0x70
    double _value;	// 120 = 0x78
    double _startValue;	// 128 = 0x80
    double _endValue;	// 136 = 0x88
    struct {
        unsigned int delegateSizeOriginDelta:1;
        unsigned int delegateDidExpand:1;
        unsigned int delegateDidCollapse:1;
        unsigned int delegateWillRequestThumbs:1;
        unsigned int delegateDidRequestThumbs:1;
        unsigned int delegateZoomAnimationDuration:1;
        unsigned int delegateZoomAnimationDelay:1;
        unsigned int needsReload:1;
        unsigned int editing:1;
        unsigned int editingHandle;
        unsigned int zoomIsDisabled:1;
    } _trackFlags;	// 144 = 0x90
    id <UIMovieScrubberTrackViewDataSource> _dataSource;	// 160 = 0xa0
    id <UIMovieScrubberTrackViewDelegate> _delegate;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000005371cc
@property(nonatomic) __weak id <UIMovieScrubberTrackViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <UIMovieScrubberTrackViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_unzoomAnimationDidFinish;	// IMP=0x0000000000536f70
- (void)_zoomAnimationDidFinish;	// IMP=0x0000000000536f22
- (void)unzoom;	// IMP=0x0000000000536b3d
- (void)_setOverlayViewIsZoomed:(_Bool)arg1 minValue:(float)arg2 maxValue:(float)arg3;	// IMP=0x00000000005369ae
- (_Bool)zoomAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000535605
- (double)zoomAnimationDuration;	// IMP=0x00000000005355f3
- (void)setZoomAnimationDuration:(double)arg1;	// IMP=0x00000000005355dd
- (void)layoutSubviews;	// IMP=0x000000000053558f
- (void)reloadData;	// IMP=0x0000000000535572
- (void)_reallyReloadData;	// IMP=0x0000000000534d48
- (void)clear;	// IMP=0x0000000000534c62
- (id)_createImageViewForTimestamp:(id)arg1 isSummaryThumbnail:(_Bool)arg2;	// IMP=0x0000000000534a7c
- (void)setThumbnailImage:(struct CGImage *)arg1 forTimestamp:(id)arg2;	// IMP=0x000000000053441a
- (void)setEndValue:(double)arg1;	// IMP=0x00000000005343a0
- (void)setStartValue:(double)arg1;	// IMP=0x0000000000534326
- (void)animateFillFramesAway;	// IMP=0x00000000005342fd
- (void)setEditing:(_Bool)arg1;	// IMP=0x0000000000534268
- (void)setValue:(double)arg1;	// IMP=0x000000000053421a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000533e0c

@end

