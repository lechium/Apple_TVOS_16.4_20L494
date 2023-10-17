//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UIImage, UIImageView;

@interface TVSettingsDeckImageView : UIView
{
    UIView *_pendingDisplayView;	// 8 = 0x8
    unsigned long long _pendingViewType;	// 16 = 0x10
    UIView *_displayView;	// 24 = 0x18
    unsigned long long _viewType;	// 32 = 0x20
    UIImageView *_placeholderImageView;	// 40 = 0x28
    double _imageLoadTimeout;	// 48 = 0x30
    _Bool _shuffledParade;	// 56 = 0x38
    _Bool _inOrderParade;	// 57 = 0x39
    NSArray *_imageProxies;	// 64 = 0x40
    UIImage *_placeholderImage;	// 72 = 0x48
    unsigned long long _deckViewParadeType;	// 80 = 0x50
    double _cycleInterval;	// 88 = 0x58
    double _transitionDuration;	// 96 = 0x60
    double _newDataTransitionDuration;	// 104 = 0x68
    struct CGRect _imageFrame;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000000ba513
@property(nonatomic) double newDataTransitionDuration; // @synthesize newDataTransitionDuration=_newDataTransitionDuration;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) double cycleInterval; // @synthesize cycleInterval=_cycleInterval;
@property(nonatomic) unsigned long long deckViewParadeType; // @synthesize deckViewParadeType=_deckViewParadeType;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic, getter=isInOrder) _Bool inOrderParade; // @synthesize inOrderParade=_inOrderParade;
@property(nonatomic, getter=isShuffled) _Bool shuffledParade; // @synthesize shuffledParade=_shuffledParade;
@property(nonatomic) struct CGRect imageFrame; // @synthesize imageFrame=_imageFrame;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (unsigned long long)_viewTypeForNumberOfImages:(unsigned long long)arg1;	// IMP=0x00100000000ba3c5
- (unsigned long long)_paradeThreshold;	// IMP=0x00100000000ba3a6
- (void)_displayPlaceholderView;	// IMP=0x00100000000ba183
- (void)_fadeToBlack;	// IMP=0x00100000000ba095
- (void)_dissolveToPendingView;	// IMP=0x00100000000b9c3f
- (void)setInOrder:(_Bool)arg1;	// IMP=0x00100000000b9b87
- (void)setShuffled:(_Bool)arg1;	// IMP=0x00100000000b9acf
- (void)resume;	// IMP=0x00100000000b9a70
- (_Bool)isPaused;	// IMP=0x00100000000b9a07
- (void)pause;	// IMP=0x00100000000b99a5
- (void)_scrollingParadeViewReadyNotification:(id)arg1;	// IMP=0x00100000000b9626
- (void)_paradeViewReadyNotification:(id)arg1;	// IMP=0x00100000000b955f
- (void)_legacyCrossfadeViewReadyNotification:(id)arg1;	// IMP=0x00100000000b94a9
- (void)_crossfadeViewReadyNotification:(id)arg1;	// IMP=0x00100000000b93f3
- (void)layoutSubviews;	// IMP=0x00100000000b935e
- (void)dealloc;	// IMP=0x00100000000b92cb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000b90c4

@end

