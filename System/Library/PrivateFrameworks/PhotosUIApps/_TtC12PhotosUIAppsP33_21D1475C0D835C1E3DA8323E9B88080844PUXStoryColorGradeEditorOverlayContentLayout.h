//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGAbsoluteCompositeLayout.h>

@class MISSING_TYPE;

@interface _TtC12PhotosUIAppsP33_21D1475C0D835C1E3DA8323E9B88080844PUXStoryColorGradeEditorOverlayContentLayout : PXGAbsoluteCompositeLayout
{
    MISSING_TYPE *viewModel;	// 8 = 0x8
    MISSING_TYPE *selectionSpritesIndexRange;	// 16 = 0x10
    MISSING_TYPE *sublayoutFrames;	// 32 = 0x20
    MISSING_TYPE *previewClip;	// 40 = 0x28
    MISSING_TYPE *previewClipTimeRange;	// 48 = 0x30
    MISSING_TYPE *captionHeightsByRow;	// 96 = 0x60
    MISSING_TYPE *storyModelObservation;	// 104 = 0x68
    MISSING_TYPE *viewModelObservation;	// 112 = 0x70
    MISSING_TYPE *updateFlags;	// 120 = 0x78
    MISSING_TYPE *hasVerticalScrollingContent;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000026390
- (id)init;	// IMP=0x0000000000026310
- (id)initWithComposition:(id)arg1;	// IMP=0x00000000000262e0
- (struct CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize)arg3;	// IMP=0x00000000000262d0
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;	// IMP=0x0000000000026260
@property(nonatomic, readonly) long long scrollableAxis;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(id *)arg3;	// IMP=0x00000000000240c0
- (void)referenceSizeDidChange;	// IMP=0x0000000000023ce0
- (void)update;	// IMP=0x0000000000023cb0

@end

