//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

__attribute__((visibility("hidden")))
@interface _UITextFieldViewBackgroundProvider
{
}

- (void)_buildDescription:(id)arg1;	// IMP=0x000000000060f443
- (void)setNeedsDisplay;	// IMP=0x000000000060f3d6
- (void)populateArchivedSubviews:(id)arg1;	// IMP=0x000000000060f348
- (void)removeFromTextField;	// IMP=0x000000000060f2dd
- (void)addToTextField:(id)arg1;	// IMP=0x000000000060f20b
- (_Bool)hitTestView:(id)arg1;	// IMP=0x000000000060f19c
- (id)overridingSetBackgroundColor:(id)arg1;	// IMP=0x000000000060f13a
@property(readonly, nonatomic) UIView *backgroundView;
- (void)didChangeFirstResponder;	// IMP=0x000000000060f075
- (void)layoutIfNeeded;	// IMP=0x000000000060ef69

@end

