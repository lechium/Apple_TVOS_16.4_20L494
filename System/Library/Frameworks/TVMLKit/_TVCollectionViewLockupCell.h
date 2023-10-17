//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVContainerCollectionViewCell.h"

@class NSString, UIView;
@protocol TVAuxiliaryViewSelecting, TVCollectionViewLockupCellDelegate;

__attribute__((visibility("hidden")))
@interface _TVCollectionViewLockupCell : TVContainerCollectionViewCell
{
    _Bool _pressIsAnimating;	// 8 = 0x8
    UIView<TVAuxiliaryViewSelecting> *__selectingView;	// 16 = 0x10
    _Bool _unpressOnEndAnimating;	// 24 = 0x18
    struct {
        _Bool respondsToDidUnfocus;
        _Bool respondsToDidSelect;
        _Bool respondsToLayeredImageContainerLayerWithinCollectionViewCell;
    } _delegateFlags;	// 25 = 0x19
    id <TVCollectionViewLockupCellDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000019369d
@property(nonatomic) __weak id <TVCollectionViewLockupCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showPressState;	// IMP=0x00000000001933d2
- (void)_handleSelect;	// IMP=0x00000000001931fd
- (id)_selectingView;	// IMP=0x000000000019304f
- (void)_clearPressState;	// IMP=0x0000000000192eb8
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x0000000000192e3e
- (_Bool)_descendantsShouldHighlight;	// IMP=0x0000000000192e36
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x0000000000192ce7
- (id)layeredImageContainerLayer;	// IMP=0x0000000000192c86
- (void)prepareForReuse;	// IMP=0x0000000000192a87
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000192793
- (void)_searchForFocusRegionsInContext:(id)arg1;	// IMP=0x0000000000192183
- (id)selectingView;	// IMP=0x000000000019207b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000191fbd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

